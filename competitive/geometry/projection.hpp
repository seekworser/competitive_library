#ifndef COMPETITIVE_GEOMERY_PROJECTION_HPP
#define COMPETITIVE_GEOMERY_PROJECTION_HPP 1
#include <competitive/std/std.hpp>
#include <competitive/geometry/base.hpp>
template<typename T> Point<T> projection(const Line<T> &l, const Point<T> &p) {
    T t = dot(p - l.s, l.direction()) / norm(l.direction());
    return l.s + (l.direction()) * t;
}
template<typename T> Point<T> projection(const Segment<T> &l, const Point<T> &p) {
    return Point<T>();
}
template<typename T> Point<T> refrection(const Line<T> &l, const Point<T> &p) {
    return p + (projection(l, p) - p) * 2;
}
#endif // COMPETITIVE_GEOMERY_PROJECTION_HPP