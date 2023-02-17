---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: competitive/geometry/angle.hpp
    title: competitive/geometry/angle.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/geometry/base.hpp
    title: competitive/geometry/base.hpp
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
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/2/CGL_2_A
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/2/CGL_2_A
  bundledCode: "#line 1 \"online_test/AOJ/CGL_2_A.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/2/CGL_2_A\"\
    \n#include <competitive/std/std.hpp>\n#include <competitive/math/fraction.hpp>\n\
    #include <competitive/geometry/angle.hpp>\n#include <competitive/std/io.hpp>\n\
    \nint main() {\n    using P = Point<Frac>;\n    using L = Line<Frac>;\n    ll\
    \ x1,y1,x2,y2;\n    int q;\n    cin >> q;\n    rep(_, q) {\n        cin >> x1\
    \ >> y1 >> x2 >> y2;\n        L l1(P(x1, y1), P(x2, y2));\n        cin >> x1 >>\
    \ y1 >> x2 >> y2;\n        L l2(P(x1, y1), P(x2, y2));\n        if (is_parallel(l1,\
    \ l2)) cout << 2 << '\\n';\n        else if (is_orthogonal(l1, l2)) cout << 1\
    \ << '\\n';\n        else cout << 0 << '\\n';\n    }\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/2/CGL_2_A\"\
    \n#include <competitive/std/std.hpp>\n#include <competitive/math/fraction.hpp>\n\
    #include <competitive/geometry/angle.hpp>\n#include <competitive/std/io.hpp>\n\
    \nint main() {\n    using P = Point<Frac>;\n    using L = Line<Frac>;\n    ll\
    \ x1,y1,x2,y2;\n    int q;\n    cin >> q;\n    rep(_, q) {\n        cin >> x1\
    \ >> y1 >> x2 >> y2;\n        L l1(P(x1, y1), P(x2, y2));\n        cin >> x1 >>\
    \ y1 >> x2 >> y2;\n        L l2(P(x1, y1), P(x2, y2));\n        if (is_parallel(l1,\
    \ l2)) cout << 2 << '\\n';\n        else if (is_orthogonal(l1, l2)) cout << 1\
    \ << '\\n';\n        else cout << 0 << '\\n';\n    }\n}\n"
  dependsOn:
  - competitive/std/std.hpp
  - competitive/math/fraction.hpp
  - competitive/geometry/angle.hpp
  - competitive/geometry/base.hpp
  - competitive/std/io.hpp
  isVerificationFile: true
  path: online_test/AOJ/CGL_2_A.test.cpp
  requiredBy: []
  timestamp: '2023-02-14 22:07:39+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: online_test/AOJ/CGL_2_A.test.cpp
layout: document
redirect_from:
- /verify/online_test/AOJ/CGL_2_A.test.cpp
- /verify/online_test/AOJ/CGL_2_A.test.cpp.html
title: online_test/AOJ/CGL_2_A.test.cpp
---
