#ifndef COMPETITIVE_GEOMERY_DISTANCE_HPP
#define COMPETITIVE_GEOMERY_DISTANCE_HPP 1
#include <competitive/std/std.hpp>
#include <competitive/geometry/base.hpp>
#include <competitive/geometry/angle.hpp>
#include <competitive/geometry/intersection.hpp>
template <typename T> T norm(const Point<T> &p, const Line<T> &l) {
    T area_sq = cross(l.vec(), p - l.s);
    return area_sq * area_sq / norm(l.vec());
};
template<typename T> T norm(const Point<T> &p, const Segment<T> &s) {
    if (lt<T>(dot(s.vec(), p - s.s), 0)) return norm(p - s.s);
    if (lt<T>(dot(-s.vec(), p - s.t), 0)) return norm(p - s.t);
    return norm(p, Line<T>(s));
};
template <typename T> T norm(const Segment<T> &s1, const Segment<T> &s2) {
    if (intersect(s1, s2)) return T(0);
    T ans = norm(s1.s, s2);
    chmin(ans, norm(s1.t, s2));
    chmin(ans, norm(s2.s, s1));
    chmin(ans, norm(s2.t, s1));
    return ans;
};
double distance(const Point<double> &p, const Line<double> &l) { return sqrt(norm(p, l)); }
double distance(const Point<double> &p, const Segment<double> &s) { return sqrt(norm(p, s)); }
double distance(const Segment<double> &s1, const Segment<double> &s2) { return sqrt(norm(s1, s2)); }
template<typename T> T manhattan(const Point<T> &p) { return abs(p.x) + abs(p.y); }
template<typename T> T manhattan(const Point<T> &p1, const Point<T> &p2) { return manhattan(p1 - p2); }
#endif // COMPETITIVE_GEOMERY_DISTANCE_HPP