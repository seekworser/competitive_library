---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: competitive/std/std.hpp
    title: competitive/std/std.hpp
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: competitive/geometry/angle.hpp
    title: competitive/geometry/angle.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/geometry/counter_clockwise.hpp
    title: competitive/geometry/counter_clockwise.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/geometry/distance.hpp
    title: competitive/geometry/distance.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/geometry/intersection.hpp
    title: competitive/geometry/intersection.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/geometry/polygon.hpp
    title: competitive/geometry/polygon.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/geometry/projection.hpp
    title: competitive/geometry/projection.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/CGL_1_A.test.cpp
    title: online_test/AOJ/CGL_1_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/CGL_1_B.test.cpp
    title: online_test/AOJ/CGL_1_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/CGL_1_C.test.cpp
    title: online_test/AOJ/CGL_1_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/CGL_2_A.test.cpp
    title: online_test/AOJ/CGL_2_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/CGL_2_B.test.cpp
    title: online_test/AOJ/CGL_2_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/CGL_2_C.test.cpp
    title: online_test/AOJ/CGL_2_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/CGL_2_D.test.cpp
    title: online_test/AOJ/CGL_2_D.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/CGL_3_A.test.cpp
    title: online_test/AOJ/CGL_3_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/CGL_3_B.test.cpp
    title: online_test/AOJ/CGL_3_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/CGL_4_A.test.cpp
    title: online_test/AOJ/CGL_4_A.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"competitive/geometry/base.hpp\"\n\n\n#include <competitive/std/std.hpp>\n\
    /**\n * Point : 2\u6B21\u5143\u7A7A\u9593\u4E0A\u306E\u70B9\u30FB\u30D9\u30AF\u30C8\
    \u30EB\u3092\u6271\u3046\u305F\u3081\u306E\u30AF\u30E9\u30B9\n * abs\u3082\u3057\
    \u304F\u306F\u5358\u4F4D\u30D9\u30AF\u30C8\u30EB\u3092\u4F7F\u3046\u5834\u5408\
    \u306Fdouble\u3092\u4F7F\u3044\u3001\u305D\u306E\u4ED6\u306E\u5834\u5408\u306F\
    Frac\u3092\u4F7F\u3046\n */\ntemplate<typename T> struct Point {\n\tT x, y;\n\
    \    Point(T x, T y) : x(x), y(y) {\n    };\n    Point() : Point(0, 0) {};\n\n\
    \    Point<T> &operator+=(const Point<T>& p) { (*this).x += p.x; (*this).y +=\
    \ p.y; return *this; }\n    Point<T> &operator-=(const Point<T>& p) { (*this).x\
    \ -= p.x; (*this).y -= p.y; return *this; }\n    friend Point<T> operator+(const\
    \ Point<T>& lhs, const Point<T>& rhs) { return Point(lhs) += rhs; }\n    friend\
    \ Point<T> operator-(const Point<T>& lhs, const Point<T>& rhs) { return Point(lhs)\
    \ -= rhs; }\n    Point<T> &operator+() { return *this; }\n    Point<T> &operator-()\
    \ { (*this).x *= -1; (*this).y *= -1; return *this; }\n\n    Point<T> &operator*=(const\
    \ T &x) { (*this).x *= x; (*this).y *= x; return *this; }\n    Point<T> &operator/=(const\
    \ T &x) { (*this).x /= x; (*this).y /= x; return *this; }\n    friend Point<T>\
    \ operator*(const Point<T>& lhs, const T& rhs) { return Point(lhs) *= rhs; }\n\
    \    friend Point<T> operator/(const Point<T>& lhs, const T& rhs) { return Point(lhs)\
    \ /= rhs; }\n    friend Point<T> operator*(const T& lhs, const Point<T>& rhs)\
    \ { return Point(rhs) *= lhs; }\n    friend Point<T> operator/(const T& lhs, const\
    \ Point<T>& rhs) { return Point(rhs) /= lhs; }\n\n    friend bool operator==(const\
    \ Point<T> &lhs, const Point<T> &rhs) {\n        return eq<T>(lhs.x, rhs.x) &&\
    \ eq<T>(lhs.y, rhs.y);\n    }\n    friend bool operator!=(const Point<T> &lhs,\
    \ const Point<T> &rhs) {\n        return !(lhs == rhs);\n    }\n    friend bool\
    \ operator>(const Point<T>& lhs, const Point<T>& rhs) {\n        if (eq<T>(lhs.x,\
    \ rhs.x)) return gt<T>(lhs.y, rhs.y);\n        return gt<T>(lhs.x, rhs.x);\n \
    \   }\n    friend bool operator<(const Point<T>& lhs, const Point<T>& rhs) {\n\
    \        if (eq<T>(lhs.x, rhs.x)) return lt<T>(lhs.y, rhs.y);\n        return\
    \ lt<T>(lhs.x, rhs.x);\n    }\n    friend bool operator>=(const Point<T>& lhs,\
    \ const Point<T>& rhs) { return !(lhs < rhs); }\n    friend bool operator<=(const\
    \ Point<T>& lhs, const Point<T>& rhs) { return !(lhs > rhs); }\n    T dot(const\
    \ Point<T> &p) const {return (*this).x * p.x + (*this).y * p.y; };\n    T cross(const\
    \ Point<T> &p) const {return (*this).x * p.y - (*this).y * p.x; };\n    T norm()\
    \ const {return (*this).dot(*this); };\n    T abs() const {return sqrt((*this).norm());\
    \ };\n    T arg() const {return atan((*this).y / (*this).x); };\n    Point<T>\
    \ rotate(const double &theta) {\n        (*this).x = cos(theta) * (*this).x -\
    \ sin(theta) * (*this).y;\n        (*this).y = sin(theta) * (*this).x + cos(theta)\
    \ * (*this).y;\n        return (*this);\n    };\n\n    T operator*=(const Point<T>&\
    \ p) const { return (*this).dot(p); }\n    friend const T operator*(const Point<T>&\
    \ lhs, const Point<T>& rhs) { return lhs *= rhs; }\n    friend ostream& operator<<(ostream&\
    \ os, const Point<T> &p) { os << p.x << \" \" << p.y; return os; }\n};\n\ntemplate<typename\
    \ T> T dot(const Point<T> &p1, const Point<T> &p2) { return p1.dot(p2); }\ntemplate<typename\
    \ T> T cross(const Point<T> &p1, const Point<T> &p2) { return p1.cross(p2); }\n\
    template<typename T> T norm(const Point<T> &p) { return p.norm(); }\ndouble abs(const\
    \ Point<double> &p) { return p.abs(); }\nPoint<double> unit_vector(const Point<double>\
    \ &p) { return p / abs(p); }\ntemplate<typename T> Point<T> normal_vector(const\
    \ Point<double> &p) { return Point(-p.y, p.x); }\nPoint<double> rotate(const Point<double>\
    \ &p, const double &theta) { return Point(p).rotate(theta); }\n\n// Line : \u76F4\
    \u7DDA\u30AF\u30E9\u30B9\ntemplate<typename T> struct Line {\n    Point<T> s,\
    \ t;\n    Line() = default;\n    Line(Point<T> s, Point<T> t) : s(s), t(t) {assert(s\
    \ != t);};\n    // ax+by+c=0;\n    Line(T a, T b, T c) {\n        assert(neq<T>(a,\
    \ 0) || neq<T>(b, 0));\n        if(eq<T>(b, 0)) {\n            s = Point(-c /\
    \ a, T(0)); t = Point(-c / a, T(1));\n        } else {\n            s = Point(T(0),\
    \ -c / b); t = Point(-c / a, T(1));\n        }\n    };\n    Point<T> vec() const\
    \ { return (*this).t - (*this).s; }\n    Point<T> normal() const { return normal_vector((*this).vec());\
    \ }\n    friend ostream& operator<<(ostream& os, const Line<T> &l) { os << l.s\
    \ << \" \" << l.t; return os; }\n};\n\n// Segment : \u7DDA\u5206\u3092\u8868\u3059\
    \u69CB\u9020\u4F53\ntemplate <typename T> struct Segment : Line<T> {\n    Segment()\
    \ = default;\n    Segment(Point<T> s, Point<T> t) : Line<T>(s, t) {}\n};\n\n//\
    \ Circle : \u5186\u3092\u8868\u3059\u69CB\u9020\u4F53\n// p\u304C\u4E2D\u5FC3\u306E\
    \u4F4D\u7F6E\u30D9\u30AF\u30C8\u30EB\u3001r\u306F\u534A\u5F84\ntemplate<typename\
    \ T> struct Circle {\n    Point<T> o;\n    T r;\n    Circle() = default;\n   \
    \ Circle(Point<T> o, double r) : o(o), r(r) {}\n};\n\n"
  code: "#ifndef COMPETITIVE_GEOMERY_BASE_HPP\n#define COMPETITIVE_GEOMERY_BASE_HPP\
    \ 1\n#include <competitive/std/std.hpp>\n/**\n * Point : 2\u6B21\u5143\u7A7A\u9593\
    \u4E0A\u306E\u70B9\u30FB\u30D9\u30AF\u30C8\u30EB\u3092\u6271\u3046\u305F\u3081\
    \u306E\u30AF\u30E9\u30B9\n * abs\u3082\u3057\u304F\u306F\u5358\u4F4D\u30D9\u30AF\
    \u30C8\u30EB\u3092\u4F7F\u3046\u5834\u5408\u306Fdouble\u3092\u4F7F\u3044\u3001\
    \u305D\u306E\u4ED6\u306E\u5834\u5408\u306FFrac\u3092\u4F7F\u3046\n */\ntemplate<typename\
    \ T> struct Point {\n\tT x, y;\n    Point(T x, T y) : x(x), y(y) {\n    };\n \
    \   Point() : Point(0, 0) {};\n\n    Point<T> &operator+=(const Point<T>& p) {\
    \ (*this).x += p.x; (*this).y += p.y; return *this; }\n    Point<T> &operator-=(const\
    \ Point<T>& p) { (*this).x -= p.x; (*this).y -= p.y; return *this; }\n    friend\
    \ Point<T> operator+(const Point<T>& lhs, const Point<T>& rhs) { return Point(lhs)\
    \ += rhs; }\n    friend Point<T> operator-(const Point<T>& lhs, const Point<T>&\
    \ rhs) { return Point(lhs) -= rhs; }\n    Point<T> &operator+() { return *this;\
    \ }\n    Point<T> &operator-() { (*this).x *= -1; (*this).y *= -1; return *this;\
    \ }\n\n    Point<T> &operator*=(const T &x) { (*this).x *= x; (*this).y *= x;\
    \ return *this; }\n    Point<T> &operator/=(const T &x) { (*this).x /= x; (*this).y\
    \ /= x; return *this; }\n    friend Point<T> operator*(const Point<T>& lhs, const\
    \ T& rhs) { return Point(lhs) *= rhs; }\n    friend Point<T> operator/(const Point<T>&\
    \ lhs, const T& rhs) { return Point(lhs) /= rhs; }\n    friend Point<T> operator*(const\
    \ T& lhs, const Point<T>& rhs) { return Point(rhs) *= lhs; }\n    friend Point<T>\
    \ operator/(const T& lhs, const Point<T>& rhs) { return Point(rhs) /= lhs; }\n\
    \n    friend bool operator==(const Point<T> &lhs, const Point<T> &rhs) {\n   \
    \     return eq<T>(lhs.x, rhs.x) && eq<T>(lhs.y, rhs.y);\n    }\n    friend bool\
    \ operator!=(const Point<T> &lhs, const Point<T> &rhs) {\n        return !(lhs\
    \ == rhs);\n    }\n    friend bool operator>(const Point<T>& lhs, const Point<T>&\
    \ rhs) {\n        if (eq<T>(lhs.x, rhs.x)) return gt<T>(lhs.y, rhs.y);\n     \
    \   return gt<T>(lhs.x, rhs.x);\n    }\n    friend bool operator<(const Point<T>&\
    \ lhs, const Point<T>& rhs) {\n        if (eq<T>(lhs.x, rhs.x)) return lt<T>(lhs.y,\
    \ rhs.y);\n        return lt<T>(lhs.x, rhs.x);\n    }\n    friend bool operator>=(const\
    \ Point<T>& lhs, const Point<T>& rhs) { return !(lhs < rhs); }\n    friend bool\
    \ operator<=(const Point<T>& lhs, const Point<T>& rhs) { return !(lhs > rhs);\
    \ }\n    T dot(const Point<T> &p) const {return (*this).x * p.x + (*this).y *\
    \ p.y; };\n    T cross(const Point<T> &p) const {return (*this).x * p.y - (*this).y\
    \ * p.x; };\n    T norm() const {return (*this).dot(*this); };\n    T abs() const\
    \ {return sqrt((*this).norm()); };\n    T arg() const {return atan((*this).y /\
    \ (*this).x); };\n    Point<T> rotate(const double &theta) {\n        (*this).x\
    \ = cos(theta) * (*this).x - sin(theta) * (*this).y;\n        (*this).y = sin(theta)\
    \ * (*this).x + cos(theta) * (*this).y;\n        return (*this);\n    };\n\n \
    \   T operator*=(const Point<T>& p) const { return (*this).dot(p); }\n    friend\
    \ const T operator*(const Point<T>& lhs, const Point<T>& rhs) { return lhs *=\
    \ rhs; }\n    friend ostream& operator<<(ostream& os, const Point<T> &p) { os\
    \ << p.x << \" \" << p.y; return os; }\n};\n\ntemplate<typename T> T dot(const\
    \ Point<T> &p1, const Point<T> &p2) { return p1.dot(p2); }\ntemplate<typename\
    \ T> T cross(const Point<T> &p1, const Point<T> &p2) { return p1.cross(p2); }\n\
    template<typename T> T norm(const Point<T> &p) { return p.norm(); }\ndouble abs(const\
    \ Point<double> &p) { return p.abs(); }\nPoint<double> unit_vector(const Point<double>\
    \ &p) { return p / abs(p); }\ntemplate<typename T> Point<T> normal_vector(const\
    \ Point<double> &p) { return Point(-p.y, p.x); }\nPoint<double> rotate(const Point<double>\
    \ &p, const double &theta) { return Point(p).rotate(theta); }\n\n// Line : \u76F4\
    \u7DDA\u30AF\u30E9\u30B9\ntemplate<typename T> struct Line {\n    Point<T> s,\
    \ t;\n    Line() = default;\n    Line(Point<T> s, Point<T> t) : s(s), t(t) {assert(s\
    \ != t);};\n    // ax+by+c=0;\n    Line(T a, T b, T c) {\n        assert(neq<T>(a,\
    \ 0) || neq<T>(b, 0));\n        if(eq<T>(b, 0)) {\n            s = Point(-c /\
    \ a, T(0)); t = Point(-c / a, T(1));\n        } else {\n            s = Point(T(0),\
    \ -c / b); t = Point(-c / a, T(1));\n        }\n    };\n    Point<T> vec() const\
    \ { return (*this).t - (*this).s; }\n    Point<T> normal() const { return normal_vector((*this).vec());\
    \ }\n    friend ostream& operator<<(ostream& os, const Line<T> &l) { os << l.s\
    \ << \" \" << l.t; return os; }\n};\n\n// Segment : \u7DDA\u5206\u3092\u8868\u3059\
    \u69CB\u9020\u4F53\ntemplate <typename T> struct Segment : Line<T> {\n    Segment()\
    \ = default;\n    Segment(Point<T> s, Point<T> t) : Line<T>(s, t) {}\n};\n\n//\
    \ Circle : \u5186\u3092\u8868\u3059\u69CB\u9020\u4F53\n// p\u304C\u4E2D\u5FC3\u306E\
    \u4F4D\u7F6E\u30D9\u30AF\u30C8\u30EB\u3001r\u306F\u534A\u5F84\ntemplate<typename\
    \ T> struct Circle {\n    Point<T> o;\n    T r;\n    Circle() = default;\n   \
    \ Circle(Point<T> o, double r) : o(o), r(r) {}\n};\n#endif // COMPETITIVE_GEOMERY_BASE_HPP"
  dependsOn:
  - competitive/std/std.hpp
  isVerificationFile: false
  path: competitive/geometry/base.hpp
  requiredBy:
  - competitive/geometry/angle.hpp
  - competitive/geometry/projection.hpp
  - competitive/geometry/intersection.hpp
  - competitive/geometry/polygon.hpp
  - competitive/geometry/distance.hpp
  - competitive/geometry/counter_clockwise.hpp
  timestamp: '2023-02-14 22:07:39+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - online_test/AOJ/CGL_1_B.test.cpp
  - online_test/AOJ/CGL_2_A.test.cpp
  - online_test/AOJ/CGL_2_B.test.cpp
  - online_test/AOJ/CGL_3_B.test.cpp
  - online_test/AOJ/CGL_2_D.test.cpp
  - online_test/AOJ/CGL_2_C.test.cpp
  - online_test/AOJ/CGL_4_A.test.cpp
  - online_test/AOJ/CGL_1_C.test.cpp
  - online_test/AOJ/CGL_3_A.test.cpp
  - online_test/AOJ/CGL_1_A.test.cpp
documentation_of: competitive/geometry/base.hpp
layout: document
redirect_from:
- /library/competitive/geometry/base.hpp
- /library/competitive/geometry/base.hpp.html
title: competitive/geometry/base.hpp
---
