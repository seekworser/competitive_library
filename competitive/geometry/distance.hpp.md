---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: competitive/geometry/angle.hpp
    title: competitive/geometry/angle.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/geometry/base.hpp
    title: "\u5E7E\u4F55\u30E9\u30A4\u30D6\u30E9\u30EA\u30D9\u30FC\u30B9\u30AF\u30E9\
      \u30B9"
  - icon: ':heavy_check_mark:'
    path: competitive/geometry/counter_clockwise.hpp
    title: competitive/geometry/counter_clockwise.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/geometry/intersection.hpp
    title: competitive/geometry/intersection.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/std/std.hpp
    title: competitive/std/std.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/CGL_2_D.test.cpp
    title: online_test/AOJ/CGL_2_D.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"competitive/geometry/distance.hpp\"\n\n\n#include <competitive/std/std.hpp>\n\
    #include <competitive/geometry/base.hpp>\n#include <competitive/geometry/angle.hpp>\n\
    #include <competitive/geometry/intersection.hpp>\ntemplate <typename T> T norm(const\
    \ Point<T> &p, const Line<T> &l) {\n    T area_sq = cross(l.vec(), p - l.s);\n\
    \    return area_sq * area_sq / norm(l.vec());\n};\ntemplate<typename T> T norm(const\
    \ Point<T> &p, const Segment<T> &s) {\n    if (lt<T>(dot(s.vec(), p - s.s), 0))\
    \ return norm(p - s.s);\n    if (lt<T>(dot(-s.vec(), p - s.t), 0)) return norm(p\
    \ - s.t);\n    return norm(p, Line<T>(s));\n};\ntemplate <typename T> T norm(const\
    \ Segment<T> &s1, const Segment<T> &s2) {\n    if (intersect(s1, s2)) return T(0);\n\
    \    T ans = norm(s1.s, s2);\n    chmin(ans, norm(s1.t, s2));\n    chmin(ans,\
    \ norm(s2.s, s1));\n    chmin(ans, norm(s2.t, s1));\n    return ans;\n};\ndouble\
    \ distance(const Point<double> &p, const Line<double> &l) { return sqrt(norm(p,\
    \ l)); }\ndouble distance(const Point<double> &p, const Segment<double> &s) {\
    \ return sqrt(norm(p, s)); }\ndouble distance(const Segment<double> &s1, const\
    \ Segment<double> &s2) { return sqrt(norm(s1, s2)); }\ntemplate<typename T> T\
    \ manhattan(const Point<T> &p) { return abs(p.x) + abs(p.y); }\ntemplate<typename\
    \ T> T manhattan(const Point<T> &p1, const Point<T> &p2) { return manhattan(p1\
    \ - p2); }\n\n"
  code: "#ifndef COMPETITIVE_GEOMERY_DISTANCE_HPP\n#define COMPETITIVE_GEOMERY_DISTANCE_HPP\
    \ 1\n#include <competitive/std/std.hpp>\n#include <competitive/geometry/base.hpp>\n\
    #include <competitive/geometry/angle.hpp>\n#include <competitive/geometry/intersection.hpp>\n\
    template <typename T> T norm(const Point<T> &p, const Line<T> &l) {\n    T area_sq\
    \ = cross(l.vec(), p - l.s);\n    return area_sq * area_sq / norm(l.vec());\n\
    };\ntemplate<typename T> T norm(const Point<T> &p, const Segment<T> &s) {\n  \
    \  if (lt<T>(dot(s.vec(), p - s.s), 0)) return norm(p - s.s);\n    if (lt<T>(dot(-s.vec(),\
    \ p - s.t), 0)) return norm(p - s.t);\n    return norm(p, Line<T>(s));\n};\ntemplate\
    \ <typename T> T norm(const Segment<T> &s1, const Segment<T> &s2) {\n    if (intersect(s1,\
    \ s2)) return T(0);\n    T ans = norm(s1.s, s2);\n    chmin(ans, norm(s1.t, s2));\n\
    \    chmin(ans, norm(s2.s, s1));\n    chmin(ans, norm(s2.t, s1));\n    return\
    \ ans;\n};\ndouble distance(const Point<double> &p, const Line<double> &l) { return\
    \ sqrt(norm(p, l)); }\ndouble distance(const Point<double> &p, const Segment<double>\
    \ &s) { return sqrt(norm(p, s)); }\ndouble distance(const Segment<double> &s1,\
    \ const Segment<double> &s2) { return sqrt(norm(s1, s2)); }\ntemplate<typename\
    \ T> T manhattan(const Point<T> &p) { return abs(p.x) + abs(p.y); }\ntemplate<typename\
    \ T> T manhattan(const Point<T> &p1, const Point<T> &p2) { return manhattan(p1\
    \ - p2); }\n#endif // COMPETITIVE_GEOMERY_DISTANCE_HPP"
  dependsOn:
  - competitive/std/std.hpp
  - competitive/geometry/base.hpp
  - competitive/geometry/angle.hpp
  - competitive/geometry/intersection.hpp
  - competitive/geometry/counter_clockwise.hpp
  isVerificationFile: false
  path: competitive/geometry/distance.hpp
  requiredBy: []
  timestamp: '2023-02-26 03:11:42+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - online_test/AOJ/CGL_2_D.test.cpp
documentation_of: competitive/geometry/distance.hpp
layout: document
redirect_from:
- /library/competitive/geometry/distance.hpp
- /library/competitive/geometry/distance.hpp.html
title: competitive/geometry/distance.hpp
---
