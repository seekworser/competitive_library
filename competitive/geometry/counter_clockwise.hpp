#ifndef COMPETITIVE_GEOMERY_COUNTER_CLOCKWISE_HPP
#define COMPETITIVE_GEOMERY_COUNTER_CLOCKWISE_HPP 1
#include <competitive/std/std.hpp>
#include <competitive/geometry/base.hpp>
constexpr int COUNTER_CLOCKWISE = 2;
constexpr int CLOCKWISE = -2;
constexpr int ONSEGMENT = 0;
constexpr int ONLINE_BACK = 1;
constexpr int ONLINE_FRONT = -1;
template<typename T> int ccw(const Line<T> &l, const Point<T> &p, bool strict=false) {
    T crs = cross(l.vec(), p - l.s);
    if (lt<T>(crs, 0)) return CLOCKWISE;
    if (gt<T>(crs, 0)) return COUNTER_CLOCKWISE;
    T d = dot(l.vec(), p - l.s);
    if (strict) {
        if (le<T>(d, 0)) return ONLINE_BACK;
        if (ge<T>(d, norm(l.vec()))) return ONLINE_FRONT;
    } else {
        if (lt<T>(d, 0)) return ONLINE_BACK;
        if (gt<T>(d, norm(l.vec()))) return ONLINE_FRONT;
    }
    return ONSEGMENT;
};
template <typename T> int ccw(const Point<T> &p1, const Point<T> &p2, const Point<T> &p3, bool strict=false) {
    return ccw(Line<T>(p1, p2), p3, strict);
};
template <typename T> bool online(const Line<T> &l, const Point<T> &p) {
    int result = ccw(l, p);
    return -1 <= result && result <= 1;
};
template <typename T> int online(const Point<T> &p1, const Point<T> &p2, const Point<T> &p3) {
    return online(Line<T>(p1, p2), p3);
};
#endif // COMPETITIVE_GEOMERY_COUNTER_CLOCKWISE_HPP