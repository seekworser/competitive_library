---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: competitive/geometry/base.hpp
    title: "\u5E7E\u4F55\u30E9\u30A4\u30D6\u30E9\u30EA\u30D9\u30FC\u30B9\u30AF\u30E9\
      \u30B9"
  - icon: ':heavy_check_mark:'
    path: competitive/std/std.hpp
    title: competitive/std/std.hpp
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: competitive/geometry/distance.hpp
    title: competitive/geometry/distance.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/geometry/intersection.hpp
    title: competitive/geometry/intersection.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/geometry/polygon.hpp
    title: competitive/geometry/polygon.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/CGL_1_C.test.cpp
    title: online_test/AOJ/CGL_1_C.test.cpp
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
  bundledCode: "#line 1 \"competitive/geometry/counter_clockwise.hpp\"\n\n\n#include\
    \ <competitive/std/std.hpp>\n#include <competitive/geometry/base.hpp>\nconstexpr\
    \ int COUNTER_CLOCKWISE = 2;\nconstexpr int CLOCKWISE = -2;\nconstexpr int ONSEGMENT\
    \ = 0;\nconstexpr int ONLINE_BACK = 1;\nconstexpr int ONLINE_FRONT = -1;\ntemplate<typename\
    \ T> int ccw(const Line<T> &l, const Point<T> &p, bool strict=false) {\n    T\
    \ crs = cross(l.vec(), p - l.s);\n    if (lt<T>(crs, 0)) return CLOCKWISE;\n \
    \   if (gt<T>(crs, 0)) return COUNTER_CLOCKWISE;\n    T d = dot(l.vec(), p - l.s);\n\
    \    if (strict) {\n        if (le<T>(d, 0)) return ONLINE_BACK;\n        if (ge<T>(d,\
    \ norm(l.vec()))) return ONLINE_FRONT;\n    } else {\n        if (lt<T>(d, 0))\
    \ return ONLINE_BACK;\n        if (gt<T>(d, norm(l.vec()))) return ONLINE_FRONT;\n\
    \    }\n    return ONSEGMENT;\n};\ntemplate <typename T> int ccw(const Point<T>\
    \ &p1, const Point<T> &p2, const Point<T> &p3, bool strict=false) {\n    return\
    \ ccw(Line<T>(p1, p2), p3, strict);\n};\ntemplate <typename T> bool online(const\
    \ Line<T> &l, const Point<T> &p) {\n    int result = ccw(l, p);\n    return -1\
    \ <= result && result <= 1;\n};\ntemplate <typename T> int online(const Point<T>\
    \ &p1, const Point<T> &p2, const Point<T> &p3) {\n    return online(Line<T>(p1,\
    \ p2), p3);\n};\n\n"
  code: "#ifndef COMPETITIVE_GEOMERY_COUNTER_CLOCKWISE_HPP\n#define COMPETITIVE_GEOMERY_COUNTER_CLOCKWISE_HPP\
    \ 1\n#include <competitive/std/std.hpp>\n#include <competitive/geometry/base.hpp>\n\
    constexpr int COUNTER_CLOCKWISE = 2;\nconstexpr int CLOCKWISE = -2;\nconstexpr\
    \ int ONSEGMENT = 0;\nconstexpr int ONLINE_BACK = 1;\nconstexpr int ONLINE_FRONT\
    \ = -1;\ntemplate<typename T> int ccw(const Line<T> &l, const Point<T> &p, bool\
    \ strict=false) {\n    T crs = cross(l.vec(), p - l.s);\n    if (lt<T>(crs, 0))\
    \ return CLOCKWISE;\n    if (gt<T>(crs, 0)) return COUNTER_CLOCKWISE;\n    T d\
    \ = dot(l.vec(), p - l.s);\n    if (strict) {\n        if (le<T>(d, 0)) return\
    \ ONLINE_BACK;\n        if (ge<T>(d, norm(l.vec()))) return ONLINE_FRONT;\n  \
    \  } else {\n        if (lt<T>(d, 0)) return ONLINE_BACK;\n        if (gt<T>(d,\
    \ norm(l.vec()))) return ONLINE_FRONT;\n    }\n    return ONSEGMENT;\n};\ntemplate\
    \ <typename T> int ccw(const Point<T> &p1, const Point<T> &p2, const Point<T>\
    \ &p3, bool strict=false) {\n    return ccw(Line<T>(p1, p2), p3, strict);\n};\n\
    template <typename T> bool online(const Line<T> &l, const Point<T> &p) {\n   \
    \ int result = ccw(l, p);\n    return -1 <= result && result <= 1;\n};\ntemplate\
    \ <typename T> int online(const Point<T> &p1, const Point<T> &p2, const Point<T>\
    \ &p3) {\n    return online(Line<T>(p1, p2), p3);\n};\n#endif // COMPETITIVE_GEOMERY_COUNTER_CLOCKWISE_HPP"
  dependsOn:
  - competitive/std/std.hpp
  - competitive/geometry/base.hpp
  isVerificationFile: false
  path: competitive/geometry/counter_clockwise.hpp
  requiredBy:
  - competitive/geometry/intersection.hpp
  - competitive/geometry/polygon.hpp
  - competitive/geometry/distance.hpp
  timestamp: '2023-02-17 21:43:12+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - online_test/AOJ/CGL_2_B.test.cpp
  - online_test/AOJ/CGL_3_B.test.cpp
  - online_test/AOJ/CGL_2_D.test.cpp
  - online_test/AOJ/CGL_2_C.test.cpp
  - online_test/AOJ/CGL_4_A.test.cpp
  - online_test/AOJ/CGL_1_C.test.cpp
  - online_test/AOJ/CGL_3_A.test.cpp
documentation_of: competitive/geometry/counter_clockwise.hpp
layout: document
redirect_from:
- /library/competitive/geometry/counter_clockwise.hpp
- /library/competitive/geometry/counter_clockwise.hpp.html
title: competitive/geometry/counter_clockwise.hpp
---
