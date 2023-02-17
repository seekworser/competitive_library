---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: competitive/geometry/base.hpp
    title: "\u5E7E\u4F55\u30E9\u30A4\u30D6\u30E9\u30EA\u30D9\u30FC\u30B9\u30AF\u30E9\
      \u30B9"
  - icon: ':heavy_check_mark:'
    path: competitive/geometry/projection.hpp
    title: competitive/geometry/projection.hpp
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
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/1/CGL_1_A
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/1/CGL_1_A
  bundledCode: "#line 1 \"online_test/AOJ/CGL_1_A.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/1/CGL_1_A\"\
    \n#define ERROR 1e-6\n#include <competitive/std/std.hpp>\n#include <competitive/math/fraction.hpp>\n\
    #include <competitive/geometry/base.hpp>\n#include <competitive/geometry/projection.hpp>\n\
    #include <competitive/std/io.hpp>\nint main() {\n    using P = Point<Frac>;\n\
    \    using L = Line<Frac>;\n    ll x1, y1, x2, y2;\n    cin >> x1 >> y1 >> x2\
    \ >> y2;\n    L l(P(x1, y1), P(x2, y2));\n    int q;\n    cin >> q;\n    rep(_,\
    \ q) {\n        int x, y;\n        cin >> x >> y;\n        P ans = projection(l,\
    \ P(x, y));\n        cout << ans << '\\n';\n    }\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/1/CGL_1_A\"\
    \n#define ERROR 1e-6\n#include <competitive/std/std.hpp>\n#include <competitive/math/fraction.hpp>\n\
    #include <competitive/geometry/base.hpp>\n#include <competitive/geometry/projection.hpp>\n\
    #include <competitive/std/io.hpp>\nint main() {\n    using P = Point<Frac>;\n\
    \    using L = Line<Frac>;\n    ll x1, y1, x2, y2;\n    cin >> x1 >> y1 >> x2\
    \ >> y2;\n    L l(P(x1, y1), P(x2, y2));\n    int q;\n    cin >> q;\n    rep(_,\
    \ q) {\n        int x, y;\n        cin >> x >> y;\n        P ans = projection(l,\
    \ P(x, y));\n        cout << ans << '\\n';\n    }\n}\n"
  dependsOn:
  - competitive/std/std.hpp
  - competitive/math/fraction.hpp
  - competitive/geometry/base.hpp
  - competitive/geometry/projection.hpp
  - competitive/std/io.hpp
  isVerificationFile: true
  path: online_test/AOJ/CGL_1_A.test.cpp
  requiredBy: []
  timestamp: '2023-02-17 13:48:31+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: online_test/AOJ/CGL_1_A.test.cpp
layout: document
redirect_from:
- /verify/online_test/AOJ/CGL_1_A.test.cpp
- /verify/online_test/AOJ/CGL_1_A.test.cpp.html
title: online_test/AOJ/CGL_1_A.test.cpp
---
