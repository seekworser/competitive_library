#ifndef COMPETITIVE_GEOMERY_BASE_HPP
#define COMPETITIVE_GEOMERY_BASE_HPP 1
#include <competitive/std/std.hpp>
/**
 * 2次元空間上の点・ベクトルを扱うためのクラス
 * absもしくは単位ベクトルを使う場合はdoubleを使い、その他の場合はFracを使う
 */
template<typename T> struct Point {
	T x, y;
    Point(T x, T y) : x(x), y(y) {
    };

    Point<T> &operator+=(const Point<T>& p) { (*this).x += p.x; (*this).y += p.y; return *this; }
    Point<T> &operator-=(const Point<T>& p) { (*this).x -= p.x; (*this).y -= p.y; return *this; }
    friend Point<T> operator+(const Point<T>& lhs, const Point<T>& rhs) { return Point(lhs) += rhs; }
    friend Point<T> operator-(const Point<T>& lhs, const Point<T>& rhs) { return Point(lhs) += rhs; }
    Point<T> &operator+() { return *this; }
    Point<T> &operator-() { (*this).x *= -1; (*this).y *= -1; return *this; }

    Point<T> &operator*=(const T &x) { (*this).x *= x; (*this).y *= x; return *this; }
    Point<T> &operator/=(const T &x) { (*this).x /= x; (*this).y /= x; return *this; }
    friend Point<T> operator*(const Point<T>& lhs, const T& rhs) { return Point(lhs) *= rhs; }
    friend Point<T> operator/(const Point<T>& lhs, const T& rhs) { return Point(lhs) /= rhs; }
    friend Point<T> operator*(const T& lhs, const Point<T>& rhs) { return Point(rhs) *= lhs; }
    friend Point<T> operator/(const T& lhs, const Point<T>& rhs) { return Point(rhs) /= lhs; }

    friend bool operator==(const Point<double> &lhs, const Point<double> &rhs) {
        return abs(lhs.x - rhs.x) < EPSL && abs(lhs.y - rhs.y) < EPSL;
    }
    friend bool operator==(const Point<float> &lhs, const Point<float> &rhs) {
        return abs(lhs.x - rhs.x) < EPS && abs(lhs.y - rhs.y) < EPS;
    }
    friend bool operator==(const Point<T> &lhs, const Point<T> &rhs) {
        return lhs.x == rhs.x && lhs.y == rhs.y;
    }
    friend bool operator!=(const Point<T> &lhs, const Point<T> &rhs) {
        return !(lhs != rhs);
    }
    T dot(const Point<T> &p) const {return (*this).x * p.x + (*this).y * p.y; };
    T cross(const Point<T> &p) const {return (*this).x * p.y - (*this).y * p.x; };
    T norm() const {return (*this).dot(*this); };
    T abs() const {return sqrt((*this).norm()); };

    T operator*=(const Point<T>& p) const { return (*this).dot(p); }
    friend const T operator*(const Point<T>& lhs, const Point<T>& rhs) { return lhs *= rhs; }
    friend ostream& operator<<(ostream& os, const Point<T> &p) { os << p.x << " " << p.y; return os; }
};

template<typename T> T dot(Point<T> &p1, Point<T> &p2) { return p1.dot(p2); }
template<typename T> T cross(Point<T> &p1, Point<T> &p2) { return p1.cross(p2); }
template<typename T> T norm(Point<T> &p) { return p.norm(); }
template<typename T> T abs(Point<T> &p) { return p.abs(); }
template<typename T> Point<T> unit(const Point<T> &p) { return p / abs(p); }
#endif // COMPETITIVE_GEOMERY_POINT_HPP