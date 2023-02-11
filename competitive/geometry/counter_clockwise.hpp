#ifndef COMPETITIVE_GEOMERY_COUNTER_CLOCKWISE_HPP
#define COMPETITIVE_GEOMERY_COUNTER_CLOCKWISE_HPP 1
#include <competitive/std/std.hpp>
#include <competitive/geometry/base.hpp>
constexpr int COUNTER_CLOCKWISE = 2;
constexpr int CLOCKWISE = -2;
constexpr int ONSEGMENT = 0;
constexpr int ONLINE_BACK = 1;
constexpr int ONLINE_FRONT = -1;
template<typename T> int ccw(const Line<T> &l, const Point<T> &p) {
    T crs = cross(l.direction(), p - l.s);
    if (lt<T>(crs, 0)) return CLOCKWISE;
    if (gt<T>(crs, 0)) return COUNTER_CLOCKWISE;
    T d = dot(l.direction(), p - l.s);
    if (lt<T>(d, 0)) return ONLINE_BACK;
    if (gt<T>(d, norm(l.direction()))) return ONLINE_FRONT;
    return ONSEGMENT;
}
#endif // COMPETITIVE_GEOMERY_COUNTER_CLOCKWISE_HPP