#ifndef COMPETITIVE_GEOMERY_INTERSECTION_HPP
#define COMPETITIVE_GEOMERY_INTERSECTION_HPP 1
#include <competitive/std/std.hpp>
#include <competitive/geometry/base.hpp>
#include <competitive/geometry/counter_clockwise.hpp>
template <typename T> int intersect(const Segment<T> &s1, const Segment<T> &s2, bool strict = false) {
    if (strict) {
        if (ccw(s1, s2.s, true) == ONSEGMENT) return online(s1, s2.t);
        if (ccw(s1, s2.t, true) == ONSEGMENT) return online(s1, s2.s);
        if (ccw(s2, s1.s, true) == ONSEGMENT) return online(s2, s1.t);
        if (ccw(s2, s1.t, true) == ONSEGMENT) return online(s2, s1.s);
        return
            ccw(s1, s2.s) * ccw(s1, s2.t) < 0 &&
            ccw(s2, s1.s) * ccw(s2, s1.t) < 0;
    }
    return
        ccw(s1, s2.s) * ccw(s1, s2.t) <= 0 &&
        ccw(s2, s1.s) * ccw(s2, s1.t) <= 0;
};
#endif // COMPETITIVE_GEOMERY_INTERSECTION_HPP