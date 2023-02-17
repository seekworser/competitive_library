---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: competitive/geometry/base.hpp
    title: "\u5E7E\u4F55\u30E9\u30A4\u30D6\u30E9\u30EA\u30D9\u30FC\u30B9\u30AF\u30E9\
      \u30B9"
  - icon: ':heavy_check_mark:'
    path: competitive/geometry/counter_clockwise.hpp
    title: competitive/geometry/counter_clockwise.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/geometry/polygon.hpp
    title: competitive/geometry/polygon.hpp
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
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/3/CGL_3_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/3/CGL_3_B
  bundledCode: "#line 1 \"online_test/AOJ/CGL_3_B.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/3/CGL_3_B\"\
    \n#include <competitive/std/std.hpp>\n#include <competitive/math/fraction.hpp>\n\
    #include <competitive/geometry/polygon.hpp>\n#include <competitive/std/io.hpp>\n\
    \nint main() {\n    using P = Point<Frac>;\n    int n; cin >> n;\n    vector<P>\
    \ points(n);\n    rep(i, n) {\n        ll x,y;\n        cin >> x >> y;\n     \
    \   points[i] = P(x, y);\n    }\n    Polygon<Frac> poly(points);\n    cout <<\
    \ is_convex(poly, false) << '\\n';\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/3/CGL_3_B\"\
    \n#include <competitive/std/std.hpp>\n#include <competitive/math/fraction.hpp>\n\
    #include <competitive/geometry/polygon.hpp>\n#include <competitive/std/io.hpp>\n\
    \nint main() {\n    using P = Point<Frac>;\n    int n; cin >> n;\n    vector<P>\
    \ points(n);\n    rep(i, n) {\n        ll x,y;\n        cin >> x >> y;\n     \
    \   points[i] = P(x, y);\n    }\n    Polygon<Frac> poly(points);\n    cout <<\
    \ is_convex(poly, false) << '\\n';\n}\n"
  dependsOn:
  - competitive/std/std.hpp
  - competitive/math/fraction.hpp
  - competitive/geometry/polygon.hpp
  - competitive/geometry/base.hpp
  - competitive/geometry/counter_clockwise.hpp
  - competitive/std/io.hpp
  isVerificationFile: true
  path: online_test/AOJ/CGL_3_B.test.cpp
  requiredBy: []
  timestamp: '2023-02-17 13:48:31+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: online_test/AOJ/CGL_3_B.test.cpp
layout: document
redirect_from:
- /verify/online_test/AOJ/CGL_3_B.test.cpp
- /verify/online_test/AOJ/CGL_3_B.test.cpp.html
title: online_test/AOJ/CGL_3_B.test.cpp
---
