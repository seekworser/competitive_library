#pragma once
#include "competitive/std/std.hpp"
#include "competitive/geometry/base.hpp"
template<typename T> Point<T> projection(const Line<T> &l, const Point<T> &p) {
    T t = dot(p - l.s, l.vec()) / norm(l.vec());
    return l.s + (l.vec()) * t;
}
template<typename T> Point<T> projection(const Segment<T> &l, const Point<T> &p) {
    return Point<T>();
}
template<typename T> Point<T> refrection(const Line<T> &l, const Point<T> &p) {
    return p + (projection(l, p) - p) * 2;
}
/**
 * @brief projection.hpp
 * @docs docs/geometry/projection.md
 */
