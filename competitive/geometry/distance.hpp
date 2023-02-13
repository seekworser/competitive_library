#ifndef COMPETITIVE_GEOMERY_ANGLE_HPP
#define COMPETITIVE_GEOMERY_ANGLE_HPP 1
#include <competitive/std/std.hpp>
#include <competitive/geometry/base.hpp>
template <typename T> T norm(const Point<T> &p, const Line<T> &l) {
    return abs(cross(l.vec(), p - l.s)) / norm(l.vec());
};
#endif // COMPETITIVE_GEOMERY_ANGLE_HPP