#pragma once
#include "competitive/geometry/base.hpp"
#include "competitive/geometry/counter_clockwise.hpp"
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
template<typename T> bool is_convex(const Polygon<T> &p, bool strict=true) {
    bool rev(true);
    rep(i, p.n) {
        int ccwi = ccw(p.vertex[i], p.vertex[(i + 1) % p.n], p.vertex[(i + 2) % p.n]);
        if (strict && ccwi != COUNTER_CLOCKWISE) rev = false;
        if (!strict && ccwi == CLOCKWISE) rev = false;
    }
    return rev;
}
template<typename T> Polygon<T> convex_full(const vector<Point<T>> &p, bool strict=true) {
    int n = sz(p);
    if (n < 3) return Polygon<T>(p);
    vector<Point<T>> sorted(p);
    sort(all(sorted));
    vector<Point<T>> rev;
    rev.push_back(sorted[0]);
    rev.push_back(sorted[1]);
    repi(i, 2, n) {
        int m = sz(rev);
        if (strict) {
            while (m >= 2 && ccw(rev[m-2], rev[m-1], sorted[i]) != CLOCKWISE) {
                rev.pop_back();
                --m;
            }
        } else {
            while (m >= 2 && ccw(rev[m-2], rev[m-1], sorted[i]) == COUNTER_CLOCKWISE) {
                rev.pop_back();
                --m;
            }
        }
        rev.push_back(sorted[i]);
    }
    int lower_size = sz(rev);
    repir(i, n-2, -1, -1) {
        int m = sz(rev);
        if (strict) {
            while (m > lower_size && ccw(rev[m-2], rev[m-1], sorted[i]) != CLOCKWISE) {
                rev.pop_back();
                --m;
            }
        } else {
            while (m > lower_size && ccw(rev[m-2], rev[m-1], sorted[i]) == COUNTER_CLOCKWISE) {
                rev.pop_back();
                --m;
            }
        }
        rev.push_back(sorted[i]);
    }
    rev.erase(rev.begin());
    return Polygon<T>(rev);
}
/**
 * @brief polygon.hpp
 * @docs docs/geometry/polygon.md
 */
