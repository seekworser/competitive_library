---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: competitive/geometry/base.hpp
    title: competitive/geometry/base.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/geometry/counter_clockwise.hpp
    title: competitive/geometry/counter_clockwise.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/std/std.hpp
    title: competitive/std/std.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
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
  bundledCode: "#line 1 \"competitive/geometry/polygon.hpp\"\n\n\n#include <competitive/geometry/base.hpp>\n\
    #include <competitive/geometry/counter_clockwise.hpp>\n// Polygon : \u591A\u89D2\
    \u5F62\ntemplate<typename T> struct Polygon {\n    vector<Point<T>> vertex;\n\
    \    int n;\n    Polygon() = default;\n    Polygon(const vector<Point<T>>& p)\
    \ : vertex(p), n(sz(p)) { if ((*this).area() < T(0)) reverse(all((*this).vertex));\
    \ }\n    T area() const {\n        T rev(0);\n        rep(i, (*this).n) rev +=\
    \ cross((*this).vertex[i], (*this).vertex[(i + 1) % (*this).n]);\n        return\
    \ rev / T(2);\n    }\n};\ntemplate<typename T> T area(const Polygon<T>& p) { return\
    \ p.area(); }\ntemplate<typename T> bool is_convex(const Polygon<T> &p, bool strict=true)\
    \ {\n    bool rev(true);\n    rep(i, p.n) {\n        int ccwi = ccw(p.vertex[i],\
    \ p.vertex[(i + 1) % p.n], p.vertex[(i + 2) % p.n]);\n        if (strict && ccwi\
    \ != COUNTER_CLOCKWISE) rev = false;\n        if (!strict && ccwi == CLOCKWISE)\
    \ rev = false;\n    }\n    return rev;\n}\ntemplate<typename T> Polygon<T> convex_full(const\
    \ vector<Point<T>> &p, bool strict=true) {\n    int n = sz(p);\n    if (n < 3)\
    \ return Polygon<T>(p);\n    vector<Point<T>> sorted(p);\n    sort(all(sorted));\n\
    \    vector<Point<T>> rev;\n    rev.push_back(sorted[0]);\n    rev.push_back(sorted[1]);\n\
    \    repi(i, 2, n) {\n        int m = sz(rev);\n        if (strict) {\n      \
    \      while (m >= 2 && ccw(rev[m-2], rev[m-1], sorted[i]) != CLOCKWISE) {\n \
    \               rev.pop_back();\n                --m;\n            }\n       \
    \ } else {\n            while (m >= 2 && ccw(rev[m-2], rev[m-1], sorted[i]) ==\
    \ COUNTER_CLOCKWISE) {\n                rev.pop_back();\n                --m;\n\
    \            }\n        }\n        rev.push_back(sorted[i]);\n    }\n    int lower_size\
    \ = sz(rev);\n    repir(i, n-2, -1, -1) {\n        int m = sz(rev);\n        if\
    \ (strict) {\n            while (m > lower_size && ccw(rev[m-2], rev[m-1], sorted[i])\
    \ != CLOCKWISE) {\n                rev.pop_back();\n                --m;\n   \
    \         }\n        } else {\n            while (m > lower_size && ccw(rev[m-2],\
    \ rev[m-1], sorted[i]) == COUNTER_CLOCKWISE) {\n                rev.pop_back();\n\
    \                --m;\n            }\n        }\n        rev.push_back(sorted[i]);\n\
    \    }\n    rev.erase(rev.begin());\n    return Polygon<T>(rev);\n}\n\n"
  code: "#ifndef COMPETITIVE_GEOMERY_POLYGON_HPP\n#define COMPETITIVE_GEOMERY_POLYGON_HPP\
    \ 1\n#include <competitive/geometry/base.hpp>\n#include <competitive/geometry/counter_clockwise.hpp>\n\
    // Polygon : \u591A\u89D2\u5F62\ntemplate<typename T> struct Polygon {\n    vector<Point<T>>\
    \ vertex;\n    int n;\n    Polygon() = default;\n    Polygon(const vector<Point<T>>&\
    \ p) : vertex(p), n(sz(p)) { if ((*this).area() < T(0)) reverse(all((*this).vertex));\
    \ }\n    T area() const {\n        T rev(0);\n        rep(i, (*this).n) rev +=\
    \ cross((*this).vertex[i], (*this).vertex[(i + 1) % (*this).n]);\n        return\
    \ rev / T(2);\n    }\n};\ntemplate<typename T> T area(const Polygon<T>& p) { return\
    \ p.area(); }\ntemplate<typename T> bool is_convex(const Polygon<T> &p, bool strict=true)\
    \ {\n    bool rev(true);\n    rep(i, p.n) {\n        int ccwi = ccw(p.vertex[i],\
    \ p.vertex[(i + 1) % p.n], p.vertex[(i + 2) % p.n]);\n        if (strict && ccwi\
    \ != COUNTER_CLOCKWISE) rev = false;\n        if (!strict && ccwi == CLOCKWISE)\
    \ rev = false;\n    }\n    return rev;\n}\ntemplate<typename T> Polygon<T> convex_full(const\
    \ vector<Point<T>> &p, bool strict=true) {\n    int n = sz(p);\n    if (n < 3)\
    \ return Polygon<T>(p);\n    vector<Point<T>> sorted(p);\n    sort(all(sorted));\n\
    \    vector<Point<T>> rev;\n    rev.push_back(sorted[0]);\n    rev.push_back(sorted[1]);\n\
    \    repi(i, 2, n) {\n        int m = sz(rev);\n        if (strict) {\n      \
    \      while (m >= 2 && ccw(rev[m-2], rev[m-1], sorted[i]) != CLOCKWISE) {\n \
    \               rev.pop_back();\n                --m;\n            }\n       \
    \ } else {\n            while (m >= 2 && ccw(rev[m-2], rev[m-1], sorted[i]) ==\
    \ COUNTER_CLOCKWISE) {\n                rev.pop_back();\n                --m;\n\
    \            }\n        }\n        rev.push_back(sorted[i]);\n    }\n    int lower_size\
    \ = sz(rev);\n    repir(i, n-2, -1, -1) {\n        int m = sz(rev);\n        if\
    \ (strict) {\n            while (m > lower_size && ccw(rev[m-2], rev[m-1], sorted[i])\
    \ != CLOCKWISE) {\n                rev.pop_back();\n                --m;\n   \
    \         }\n        } else {\n            while (m > lower_size && ccw(rev[m-2],\
    \ rev[m-1], sorted[i]) == COUNTER_CLOCKWISE) {\n                rev.pop_back();\n\
    \                --m;\n            }\n        }\n        rev.push_back(sorted[i]);\n\
    \    }\n    rev.erase(rev.begin());\n    return Polygon<T>(rev);\n}\n#endif //\
    \ COMPETITIVE_GEOMERY_POLYGON_HPP"
  dependsOn:
  - competitive/geometry/base.hpp
  - competitive/std/std.hpp
  - competitive/geometry/counter_clockwise.hpp
  isVerificationFile: false
  path: competitive/geometry/polygon.hpp
  requiredBy: []
  timestamp: '2023-02-15 22:44:03+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - online_test/AOJ/CGL_3_B.test.cpp
  - online_test/AOJ/CGL_4_A.test.cpp
  - online_test/AOJ/CGL_3_A.test.cpp
documentation_of: competitive/geometry/polygon.hpp
layout: document
redirect_from:
- /library/competitive/geometry/polygon.hpp
- /library/competitive/geometry/polygon.hpp.html
title: competitive/geometry/polygon.hpp
---
