#ifndef COMPETITIVE_GEOMERY_POLYGON_HPP
#define COMPETITIVE_GEOMERY_POLYGON_HPP 1
#include <competitive/geometry/base.hpp>
#include <competitive/geometry/counter_clockwise.hpp>
// Polygon : 多角形
template<typename T> struct Polygon {
    vector<Point<T>> vertex;
    int n;
    Polygon() = default;
    Polygon(const vector<Point<T>>& p) : vertex(p), n(sz(p)) { if ((*this).area() < T(0)) reverse(all((*this).vertex)); }
    T area() const {
        T rev(0);
        rep(i, (*this).n) rev += cross((*this).vertex[i], (*this).vertex[(i + 1) % (*this).n]);
        return rev / T(2);
    }
};
template<typename T> T area(const Polygon<T>& p) { return p.area(); }
template<typename T> bool is_convex(const Polygon<T> &p) {
    bool rev(true);
    rep(i, p.n) {
        if (ccw(p.vertex[i], p.vertex[(i + 1) % p.n], p.vertex[(i + 2) % p.n]) != COUNTER_CLOCKWISE) rev = false;
    }
    return rev;
}
#endif // COMPETITIVE_GEOMERY_POLYGON_HPP