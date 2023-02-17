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
    path: competitive/std/std.hpp
    title: competitive/std/std.hpp
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: competitive/geometry/distance.hpp
    title: competitive/geometry/distance.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/CGL_2_B.test.cpp
    title: online_test/AOJ/CGL_2_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/CGL_2_C.test.cpp
    title: online_test/AOJ/CGL_2_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/CGL_2_D.test.cpp
    title: online_test/AOJ/CGL_2_D.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"competitive/geometry/intersection.hpp\"\n\n\n#include <competitive/std/std.hpp>\n\
    #include <competitive/geometry/base.hpp>\n#include <competitive/geometry/counter_clockwise.hpp>\n\
    #include <competitive/geometry/angle.hpp>\ntemplate <typename T> bool intersect(const\
    \ Segment<T> &s1, const Segment<T> &s2, bool strict=false) {\n    if (strict)\
    \ {\n        if (ccw(s1, s2.s, true) == ONSEGMENT) return online(s1, s2.t);\n\
    \        if (ccw(s1, s2.t, true) == ONSEGMENT) return online(s1, s2.s);\n    \
    \    if (ccw(s2, s1.s, true) == ONSEGMENT) return online(s2, s1.t);\n        if\
    \ (ccw(s2, s1.t, true) == ONSEGMENT) return online(s2, s1.s);\n        return\n\
    \            ccw(s1, s2.s) * ccw(s1, s2.t) < 0 &&\n            ccw(s2, s1.s) *\
    \ ccw(s2, s1.t) < 0;\n    }\n    return\n        ccw(s1, s2.s) * ccw(s1, s2.t)\
    \ <= 0 &&\n        ccw(s2, s1.s) * ccw(s2, s1.t) <= 0;\n};\ntemplate<typename\
    \ T> bool intersect(const Line<T> &l1, const Line<T> &l2) {\n    if(!is_parallel(l1,\
    \ l2)) return true;\n    if (online(l1, l2.s)) return true;\n    return false;\n\
    };\ntemplate<typename T> Point<T> cross_point(const Line<T> &l1, const Line<T>\
    \ &l2) {\n    assert(intersect(l1, l2));\n    if(is_parallel(l1, l2)) return l1.s;\n\
    \    T d1 = cross(l1.vec(), l2.vec());\n    T d2 = cross(l1.vec(), l1.t - l2.s);\n\
    \    return l2.s + l2.vec() * (d2 / d1);\n};\ntemplate<typename T> Point<T> cross_point(const\
    \ Segment<T> &s1, const Segment<T> &s2, bool strict=false) {\n    assert(intersect(s1,\
    \ s2, strict));\n    if(is_parallel(s1, s2)) {\n        if (ccw(s1, s2.s, strict)\
    \ == ONSEGMENT) return s2.s;\n        if (ccw(s1, s2.t, strict) == ONSEGMENT)\
    \ return s2.t;\n        if (ccw(s2, s1.s, strict) == ONSEGMENT) return s1.s;\n\
    \        if (ccw(s2, s1.t, strict) == ONSEGMENT) return s1.t;\n        throw(\"\
    segments are parallel but cannot find cross point\");\n    }\n    return cross_point(Line(s1),\
    \ Line(s2));\n};\n\n"
  code: "#ifndef COMPETITIVE_GEOMERY_INTERSECTION_HPP\n#define COMPETITIVE_GEOMERY_INTERSECTION_HPP\
    \ 1\n#include <competitive/std/std.hpp>\n#include <competitive/geometry/base.hpp>\n\
    #include <competitive/geometry/counter_clockwise.hpp>\n#include <competitive/geometry/angle.hpp>\n\
    template <typename T> bool intersect(const Segment<T> &s1, const Segment<T> &s2,\
    \ bool strict=false) {\n    if (strict) {\n        if (ccw(s1, s2.s, true) ==\
    \ ONSEGMENT) return online(s1, s2.t);\n        if (ccw(s1, s2.t, true) == ONSEGMENT)\
    \ return online(s1, s2.s);\n        if (ccw(s2, s1.s, true) == ONSEGMENT) return\
    \ online(s2, s1.t);\n        if (ccw(s2, s1.t, true) == ONSEGMENT) return online(s2,\
    \ s1.s);\n        return\n            ccw(s1, s2.s) * ccw(s1, s2.t) < 0 &&\n \
    \           ccw(s2, s1.s) * ccw(s2, s1.t) < 0;\n    }\n    return\n        ccw(s1,\
    \ s2.s) * ccw(s1, s2.t) <= 0 &&\n        ccw(s2, s1.s) * ccw(s2, s1.t) <= 0;\n\
    };\ntemplate<typename T> bool intersect(const Line<T> &l1, const Line<T> &l2)\
    \ {\n    if(!is_parallel(l1, l2)) return true;\n    if (online(l1, l2.s)) return\
    \ true;\n    return false;\n};\ntemplate<typename T> Point<T> cross_point(const\
    \ Line<T> &l1, const Line<T> &l2) {\n    assert(intersect(l1, l2));\n    if(is_parallel(l1,\
    \ l2)) return l1.s;\n    T d1 = cross(l1.vec(), l2.vec());\n    T d2 = cross(l1.vec(),\
    \ l1.t - l2.s);\n    return l2.s + l2.vec() * (d2 / d1);\n};\ntemplate<typename\
    \ T> Point<T> cross_point(const Segment<T> &s1, const Segment<T> &s2, bool strict=false)\
    \ {\n    assert(intersect(s1, s2, strict));\n    if(is_parallel(s1, s2)) {\n \
    \       if (ccw(s1, s2.s, strict) == ONSEGMENT) return s2.s;\n        if (ccw(s1,\
    \ s2.t, strict) == ONSEGMENT) return s2.t;\n        if (ccw(s2, s1.s, strict)\
    \ == ONSEGMENT) return s1.s;\n        if (ccw(s2, s1.t, strict) == ONSEGMENT)\
    \ return s1.t;\n        throw(\"segments are parallel but cannot find cross point\"\
    );\n    }\n    return cross_point(Line(s1), Line(s2));\n};\n#endif // COMPETITIVE_GEOMERY_INTERSECTION_HPP"
  dependsOn:
  - competitive/std/std.hpp
  - competitive/geometry/base.hpp
  - competitive/geometry/counter_clockwise.hpp
  - competitive/geometry/angle.hpp
  isVerificationFile: false
  path: competitive/geometry/intersection.hpp
  requiredBy:
  - competitive/geometry/distance.hpp
  timestamp: '2023-02-17 13:48:31+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - online_test/AOJ/CGL_2_B.test.cpp
  - online_test/AOJ/CGL_2_D.test.cpp
  - online_test/AOJ/CGL_2_C.test.cpp
documentation_of: competitive/geometry/intersection.hpp
layout: document
redirect_from:
- /library/competitive/geometry/intersection.hpp
- /library/competitive/geometry/intersection.hpp.html
title: competitive/geometry/intersection.hpp
---
