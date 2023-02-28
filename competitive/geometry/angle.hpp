#pragma once
#include "competitive/std/std.hpp"
#include "competitive/geometry/base.hpp"
constexpr int ANGLE_0 = 0;
constexpr int ANGLE_0_90 = 1;
constexpr int ANGLE_90 = 2;
constexpr int ANGLE_90_180 = 3;
constexpr int ANGLE_180 = 4;
constexpr int ANGLE_180_270 = -3;
constexpr int ANGLE_270 = -2;
constexpr int ANGLE_270_360 = -1;
template <typename T> int angle(const Point<T> &p1, const Point<T> &p2) {
    Point<T> zero(0, 0);
    assert(p1 != zero && p2 != zero);
    T d = dot(p1, p2);
    T c = cross(p1, p2);
    if (eq<T>(c, 0)) {
        if (gt<T>(d, 0)) return  ANGLE_0;
        else return ANGLE_180;
    }
    if (eq<T>(d, 0)) {
        if (gt<T>(c, 0)) return ANGLE_90;
        else return ANGLE_270;
    }
    if (gt<T>(d, 0) && gt<T>(c, 0)) return ANGLE_0_90;
    if (lt<T>(d, 0) && gt<T>(c, 0)) return ANGLE_90_180;
    if (lt<T>(d, 0) && lt<T>(c, 0)) return ANGLE_180_270;
    if (gt<T>(d, 0) && lt<T>(c, 0)) return ANGLE_270_360;
    throw runtime_error("function angle unexpectedly reached end");
};
template<typename T> int angle(const Line<T> &l1, const Line<T> &l2) { return angle(l1.vec(), l2.vec()); };
template<typename PointOrLine> bool is_parallel(const PointOrLine &p1, const PointOrLine &p2) {
    int result = angle(p1, p2);
    return result == ANGLE_0 || result == ANGLE_180;
}
template<typename PointOrLine> bool is_orthogonal(const PointOrLine &p1, const PointOrLine &p2) {
    int result = angle(p1, p2);
    return result == ANGLE_90 || result == ANGLE_270;
}
/**
 * @brief angle.hpp
 * @docs docs/geometry/angle.md
 */
