---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: competitive/geometry/base.hpp
    title: competitive/geometry/base.hpp
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
  _extendedVerifiedWith:
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
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"competitive/geometry/angle.hpp\"\n\n\n#include <competitive/std/std.hpp>\n\
    #include <competitive/geometry/base.hpp>\nconstexpr int ANGLE_0 = 0;\nconstexpr\
    \ int ANGLE_0_90 = 1;\nconstexpr int ANGLE_90 = 2;\nconstexpr int ANGLE_90_180\
    \ = 3;\nconstexpr int ANGLE_180 = 4;\nconstexpr int ANGLE_180_270 = -3;\nconstexpr\
    \ int ANGLE_270 = -2;\nconstexpr int ANGLE_270_360 = -1;\ntemplate <typename T>\
    \ int angle(const Point<T> &p1, const Point<T> &p2) {\n    Point<T> zero(0, 0);\n\
    \    assert(p1 != zero && p2 != zero);\n    T d = dot(p1, p2);\n    T c = cross(p1,\
    \ p2);\n    if (eq<T>(c, 0)) {\n        if (gt<T>(d, 0)) return  ANGLE_0;\n  \
    \      else return ANGLE_180;\n    }\n    if (eq<T>(d, 0)) {\n        if (gt<T>(c,\
    \ 0)) return ANGLE_90;\n        else return ANGLE_270;\n    }\n    if (gt<T>(d,\
    \ 0) && gt<T>(c, 0)) return ANGLE_0_90;\n    if (lt<T>(d, 0) && gt<T>(c, 0)) return\
    \ ANGLE_90_180;\n    if (lt<T>(d, 0) && lt<T>(c, 0)) return ANGLE_180_270;\n \
    \   if (gt<T>(d, 0) && lt<T>(c, 0)) return ANGLE_270_360;\n    throw runtime_error(\"\
    function angle unexpectedly reached end\");\n};\ntemplate<typename T> int angle(const\
    \ Line<T> &l1, const Line<T> &l2) { return angle(l1.vec(), l2.vec()); };\ntemplate<typename\
    \ PointOrLine> bool is_parallel(const PointOrLine &p1, const PointOrLine &p2)\
    \ {\n    int result = angle(p1, p2);\n    return result == ANGLE_0 || result ==\
    \ ANGLE_180;\n}\ntemplate<typename PointOrLine> bool is_orthogonal(const PointOrLine\
    \ &p1, const PointOrLine &p2) {\n    int result = angle(p1, p2);\n    return result\
    \ == ANGLE_90 || result == ANGLE_270;\n}\n\n"
  code: "#ifndef COMPETITIVE_GEOMERY_ANGLE_HPP\n#define COMPETITIVE_GEOMERY_ANGLE_HPP\
    \ 1\n#include <competitive/std/std.hpp>\n#include <competitive/geometry/base.hpp>\n\
    constexpr int ANGLE_0 = 0;\nconstexpr int ANGLE_0_90 = 1;\nconstexpr int ANGLE_90\
    \ = 2;\nconstexpr int ANGLE_90_180 = 3;\nconstexpr int ANGLE_180 = 4;\nconstexpr\
    \ int ANGLE_180_270 = -3;\nconstexpr int ANGLE_270 = -2;\nconstexpr int ANGLE_270_360\
    \ = -1;\ntemplate <typename T> int angle(const Point<T> &p1, const Point<T> &p2)\
    \ {\n    Point<T> zero(0, 0);\n    assert(p1 != zero && p2 != zero);\n    T d\
    \ = dot(p1, p2);\n    T c = cross(p1, p2);\n    if (eq<T>(c, 0)) {\n        if\
    \ (gt<T>(d, 0)) return  ANGLE_0;\n        else return ANGLE_180;\n    }\n    if\
    \ (eq<T>(d, 0)) {\n        if (gt<T>(c, 0)) return ANGLE_90;\n        else return\
    \ ANGLE_270;\n    }\n    if (gt<T>(d, 0) && gt<T>(c, 0)) return ANGLE_0_90;\n\
    \    if (lt<T>(d, 0) && gt<T>(c, 0)) return ANGLE_90_180;\n    if (lt<T>(d, 0)\
    \ && lt<T>(c, 0)) return ANGLE_180_270;\n    if (gt<T>(d, 0) && lt<T>(c, 0)) return\
    \ ANGLE_270_360;\n    throw runtime_error(\"function angle unexpectedly reached\
    \ end\");\n};\ntemplate<typename T> int angle(const Line<T> &l1, const Line<T>\
    \ &l2) { return angle(l1.vec(), l2.vec()); };\ntemplate<typename PointOrLine>\
    \ bool is_parallel(const PointOrLine &p1, const PointOrLine &p2) {\n    int result\
    \ = angle(p1, p2);\n    return result == ANGLE_0 || result == ANGLE_180;\n}\n\
    template<typename PointOrLine> bool is_orthogonal(const PointOrLine &p1, const\
    \ PointOrLine &p2) {\n    int result = angle(p1, p2);\n    return result == ANGLE_90\
    \ || result == ANGLE_270;\n}\n#endif // COMPETITIVE_GEOMERY_ANGLE_HPP"
  dependsOn:
  - competitive/std/std.hpp
  - competitive/geometry/base.hpp
  isVerificationFile: false
  path: competitive/geometry/angle.hpp
  requiredBy:
  - competitive/geometry/intersection.hpp
  - competitive/geometry/distance.hpp
  timestamp: '2023-02-14 22:07:39+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - online_test/AOJ/CGL_2_A.test.cpp
  - online_test/AOJ/CGL_2_B.test.cpp
  - online_test/AOJ/CGL_2_D.test.cpp
  - online_test/AOJ/CGL_2_C.test.cpp
documentation_of: competitive/geometry/angle.hpp
layout: document
redirect_from:
- /library/competitive/geometry/angle.hpp
- /library/competitive/geometry/angle.hpp.html
title: competitive/geometry/angle.hpp
---
