#ifndef COMPETITIVE_GEOMERY_INTERSECTION_HPP
#define COMPETITIVE_GEOMERY_INTERSECTION_HPP 1
#include <competitive/std/std.hpp>
#include <competitive/geometry/base.hpp>
#include <competitive/geometry/counter_clockwise.hpp>
#include <competitive/geometry/angle.hpp>
template <typename T> bool intersect(const Segment<T> &s1, const Segment<T> &s2, bool strict=false) {
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
template<typename T> bool intersect(const Line<T> &l1, const Line<T> &l2) {
    if(!is_parallel(l1, l2)) return true;
    if (online(l1, l2.s)) return true;
    return false;
};
template<typename T> Point<T> cross_point(const Line<T> &l1, const Line<T> &l2) {
    assert(intersect(l1, l2));
    if(is_parallel(l1, l2)) return l1.s;
    T d1 = cross(l1.vec(), l2.vec());
    T d2 = cross(l1.vec(), l1.t - l2.s);
    return l2.s + l2.vec() * (d2 / d1);
};
template<typename T> Point<T> cross_point(const Segment<T> &s1, const Segment<T> &s2, bool strict=false) {
    assert(intersect(s1, s2, strict));
    if(is_parallel(s1, s2)) {
        if (ccw(s1, s2.s, strict) == ONSEGMENT) return s2.s;
        if (ccw(s1, s2.t, strict) == ONSEGMENT) return s2.t;
        if (ccw(s2, s1.s, strict) == ONSEGMENT) return s1.s;
        if (ccw(s2, s1.t, strict) == ONSEGMENT) return s1.t;
        throw("segments are parallel but cannot find cross point");
    }
    return cross_point(Line(s1), Line(s2));
};
#endif // COMPETITIVE_GEOMERY_INTERSECTION_HPP