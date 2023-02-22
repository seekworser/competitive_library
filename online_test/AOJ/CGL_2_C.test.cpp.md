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
    path: competitive/math/fraction.hpp
    title: competitive/math/fraction.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/std/io.hpp
    title: competitive/std/io.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/std/std.hpp
    title: competitive/std/std.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    ERROR: 1e-6
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/1/CGL_2_C
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/1/CGL_2_C
  bundledCode: "#line 1 \"online_test/AOJ/CGL_2_C.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/1/CGL_2_C\"\
    \n#define ERROR 1e-6\n#include <competitive/std/std.hpp>\n#include <competitive/geometry/intersection.hpp>\n\
    #include <competitive/math/fraction.hpp>\n#include <competitive/std/io.hpp>\n\n\
    int main() {\n    using P = Point<Frac>;\n    using S = Segment<Frac>;\n    int\
    \ q;\n    cin >> q;\n    rep(_, q) {\n        ll x1, y1, x2, y2;\n        cin\
    \ >> x1 >> y1 >> x2 >> y2;\n        S s1(P(x1, y1), P(x2, y2));\n        cin >>\
    \ x1 >> y1 >> x2 >> y2;\n        S s2(P(x1, y1), P(x2, y2));\n        cout <<\
    \ cross_point(s1, s2) << endl;\n    }\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/1/CGL_2_C\"\
    \n#define ERROR 1e-6\n#include <competitive/std/std.hpp>\n#include <competitive/geometry/intersection.hpp>\n\
    #include <competitive/math/fraction.hpp>\n#include <competitive/std/io.hpp>\n\n\
    int main() {\n    using P = Point<Frac>;\n    using S = Segment<Frac>;\n    int\
    \ q;\n    cin >> q;\n    rep(_, q) {\n        ll x1, y1, x2, y2;\n        cin\
    \ >> x1 >> y1 >> x2 >> y2;\n        S s1(P(x1, y1), P(x2, y2));\n        cin >>\
    \ x1 >> y1 >> x2 >> y2;\n        S s2(P(x1, y1), P(x2, y2));\n        cout <<\
    \ cross_point(s1, s2) << endl;\n    }\n}\n"
  dependsOn:
  - competitive/std/std.hpp
  - competitive/geometry/intersection.hpp
  - competitive/geometry/base.hpp
  - competitive/geometry/counter_clockwise.hpp
  - competitive/geometry/angle.hpp
  - competitive/math/fraction.hpp
  - competitive/std/io.hpp
  isVerificationFile: true
  path: online_test/AOJ/CGL_2_C.test.cpp
  requiredBy: []
  timestamp: '2023-02-22 09:47:28+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: online_test/AOJ/CGL_2_C.test.cpp
layout: document
redirect_from:
- /verify/online_test/AOJ/CGL_2_C.test.cpp
- /verify/online_test/AOJ/CGL_2_C.test.cpp.html
title: online_test/AOJ/CGL_2_C.test.cpp
---
