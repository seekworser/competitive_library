#pragma once
#include "competitive/std/std.hpp"
/**
 * @brief Pointクラス
 * @details
 * Point : 2次元空間上の点・ベクトルを扱うためのクラス
 * absもしくは単位ベクトルを使う場合はdoubleを使い、その他の場合はFracを使う
*/
template<typename T> struct Point {
    T x, y;
    Point(T x, T y) : x(x), y(y) {
    };
    Point() : Point(0, 0) {};

    Point<T> &operator+=(const Point<T>& p) { (*this).x += p.x; (*this).y += p.y; return *this; }
    Point<T> &operator-=(const Point<T>& p) { (*this).x -= p.x; (*this).y -= p.y; return *this; }
    friend Point<T> operator+(const Point<T>& lhs, const Point<T>& rhs) { return Point(lhs) += rhs; }
    friend Point<T> operator-(const Point<T>& lhs, const Point<T>& rhs) { return Point(lhs) -= rhs; }
    Point<T> &operator+() { return *this; }
    Point<T> &operator-() { (*this).x *= -1; (*this).y *= -1; return *this; }

    Point<T> &operator*=(const T &x) { (*this).x *= x; (*this).y *= x; return *this; }
    Point<T> &operator/=(const T &x) { (*this).x /= x; (*this).y /= x; return *this; }
    friend Point<T> operator*(const Point<T>& lhs, const T& rhs) { return Point(lhs) *= rhs; }
    friend Point<T> operator/(const Point<T>& lhs, const T& rhs) { return Point(lhs) /= rhs; }
    friend Point<T> operator*(const T& lhs, const Point<T>& rhs) { return Point(rhs) *= lhs; }
    friend Point<T> operator/(const T& lhs, const Point<T>& rhs) { return Point(rhs) /= lhs; }

    friend bool operator==(const Point<T> &lhs, const Point<T> &rhs) {
        return eq<T>(lhs.x, rhs.x) && eq<T>(lhs.y, rhs.y);
    }
    friend bool operator!=(const Point<T> &lhs, const Point<T> &rhs) {
        return !(lhs == rhs);
    }
    friend bool operator>(const Point<T>& lhs, const Point<T>& rhs) {
        if (eq<T>(lhs.x, rhs.x)) return gt<T>(lhs.y, rhs.y);
        return gt<T>(lhs.x, rhs.x);
    }
    friend bool operator<(const Point<T>& lhs, const Point<T>& rhs) {
        if (eq<T>(lhs.x, rhs.x)) return lt<T>(lhs.y, rhs.y);
        return lt<T>(lhs.x, rhs.x);
    }
    friend bool operator>=(const Point<T>& lhs, const Point<T>& rhs) { return !(lhs < rhs); }
    friend bool operator<=(const Point<T>& lhs, const Point<T>& rhs) { return !(lhs > rhs); }
    T dot(const Point<T> &p) const {return (*this).x * p.x + (*this).y * p.y; };
    T cross(const Point<T> &p) const {return (*this).x * p.y - (*this).y * p.x; };
    T norm() const {return (*this).dot(*this); };
    T abs() const {return sqrt((*this).norm()); };
    T arg() const {return atan((*this).y / (*this).x); };
    Point<T> rotate(const double &theta) {
        (*this).x = cos(theta) * (*this).x - sin(theta) * (*this).y;
        (*this).y = sin(theta) * (*this).x + cos(theta) * (*this).y;
        return (*this);
    };

    T operator*=(const Point<T>& p) const { return (*this).dot(p); }
    friend const T operator*(const Point<T>& lhs, const Point<T>& rhs) { return lhs *= rhs; }
    friend ostream& operator<<(ostream& os, const Point<T> &p) { os << p.x << " " << p.y; return os; }
};

template<typename T> T dot(const Point<T> &p1, const Point<T> &p2) { return p1.dot(p2); }
template<typename T> T cross(const Point<T> &p1, const Point<T> &p2) { return p1.cross(p2); }
template<typename T> T norm(const Point<T> &p) { return p.norm(); }
double abs(const Point<double> &p) { return p.abs(); }
Point<double> unit_vector(const Point<double> &p) { return p / abs(p); }
template<typename T> Point<T> normal_vector(const Point<double> &p) { return Point(-p.y, p.x); }
Point<double> rotate(const Point<double> &p, const double &theta) { return Point(p).rotate(theta); }

// Line : 直線クラス
template<typename T> struct Line {
    Point<T> s, t;
    Line() = default;
    Line(Point<T> s, Point<T> t) : s(s), t(t) {assert(s != t);};
    // ax+by+c=0;
    Line(T a, T b, T c) {
        assert(neq<T>(a, T(0)) || neq<T>(b, T(0)));
        if(eq<T>(b, T(0))) {
            s = Point(-c / a, T(0)); t = Point(-c / a, T(1));
        } else {
            s = Point(T(0), -c / b); t = Point(T(1), (-a-c)/b);
        }
    };
    Point<T> vec() const { return (*this).t - (*this).s; }
    Point<T> normal() const { return normal_vector((*this).vec()); }
    friend ostream& operator<<(ostream& os, const Line<T> &l) { os << l.s << " " << l.t; return os; }
};

// Segment : 線分を表す構造体
template <typename T> struct Segment : Line<T> {
    Segment() = default;
    Segment(Point<T> s, Point<T> t) : Line<T>(s, t) {}
};

// Circle : 円を表す構造体
// pが中心の位置ベクトル、rは半径
template<typename T> struct Circle {
    Point<T> o;
    T r;
    Circle() = default;
    Circle(Point<T> o, double r) : o(o), r(r) {}
};
/**
 * @brief 幾何ライブラリベースクラス
 * @docs docs/geometry/base.md
 */
