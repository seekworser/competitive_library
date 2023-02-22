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
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/CGL_1_A.test.cpp
    title: online_test/AOJ/CGL_1_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/CGL_1_B.test.cpp
    title: online_test/AOJ/CGL_1_B.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"competitive/geometry/projection.hpp\"\n\n\n#include <competitive/std/std.hpp>\n\
    #include <competitive/geometry/base.hpp>\ntemplate<typename T> Point<T> projection(const\
    \ Line<T> &l, const Point<T> &p) {\n    T t = dot(p - l.s, l.vec()) / norm(l.vec());\n\
    \    return l.s + (l.vec()) * t;\n}\ntemplate<typename T> Point<T> projection(const\
    \ Segment<T> &l, const Point<T> &p) {\n    return Point<T>();\n}\ntemplate<typename\
    \ T> Point<T> refrection(const Line<T> &l, const Point<T> &p) {\n    return p\
    \ + (projection(l, p) - p) * 2;\n}\n\n"
  code: "#ifndef COMPETITIVE_GEOMERY_PROJECTION_HPP\n#define COMPETITIVE_GEOMERY_PROJECTION_HPP\
    \ 1\n#include <competitive/std/std.hpp>\n#include <competitive/geometry/base.hpp>\n\
    template<typename T> Point<T> projection(const Line<T> &l, const Point<T> &p)\
    \ {\n    T t = dot(p - l.s, l.vec()) / norm(l.vec());\n    return l.s + (l.vec())\
    \ * t;\n}\ntemplate<typename T> Point<T> projection(const Segment<T> &l, const\
    \ Point<T> &p) {\n    return Point<T>();\n}\ntemplate<typename T> Point<T> refrection(const\
    \ Line<T> &l, const Point<T> &p) {\n    return p + (projection(l, p) - p) * 2;\n\
    }\n#endif // COMPETITIVE_GEOMERY_PROJECTION_HPP"
  dependsOn:
  - competitive/std/std.hpp
  - competitive/geometry/base.hpp
  isVerificationFile: false
  path: competitive/geometry/projection.hpp
  requiredBy: []
  timestamp: '2023-02-22 09:47:28+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - online_test/AOJ/CGL_1_A.test.cpp
  - online_test/AOJ/CGL_1_B.test.cpp
documentation_of: competitive/geometry/projection.hpp
layout: document
redirect_from:
- /library/competitive/geometry/projection.hpp
- /library/competitive/geometry/projection.hpp.html
title: competitive/geometry/projection.hpp
---
