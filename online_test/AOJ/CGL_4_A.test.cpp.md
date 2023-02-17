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
    path: competitive/geometry/polygon.hpp
    title: competitive/geometry/polygon.hpp
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
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/3/CGL_4_A
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/3/CGL_4_A
  bundledCode: "#line 1 \"online_test/AOJ/CGL_4_A.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/3/CGL_4_A\"\
    \n#include <competitive/std/std.hpp>\n#include <competitive/geometry/polygon.hpp>\n\
    #include <competitive/std/io.hpp>\n\nint main() {\n    int n;\n    cin >> n;\n\
    \    using P = Point<ll>;\n    vector<P> points;\n    rep(i, n) {\n        ll\
    \ x, y;\n        cin >> x >> y;\n        points.emplace_back(x, y);\n    }\n \
    \   Polygon<ll> p = convex_full(points, false);\n    cout << sz(p.vertex) << endl;\n\
    \    int pos = 0;\n    pll cur = {p.vertex[0].y, p.vertex[0].x};\n    rep(i, sz(p.vertex))\
    \ {\n        if (chmin(cur, pll(p.vertex[i].y, p.vertex[i].x))) pos = i;\n   \
    \ }\n    rep(i, sz(p.vertex)) {\n        cout << p.vertex[pos] << endl;\n    \
    \    pos++;\n        pos %= sz(p.vertex);\n    }\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/3/CGL_4_A\"\
    \n#include <competitive/std/std.hpp>\n#include <competitive/geometry/polygon.hpp>\n\
    #include <competitive/std/io.hpp>\n\nint main() {\n    int n;\n    cin >> n;\n\
    \    using P = Point<ll>;\n    vector<P> points;\n    rep(i, n) {\n        ll\
    \ x, y;\n        cin >> x >> y;\n        points.emplace_back(x, y);\n    }\n \
    \   Polygon<ll> p = convex_full(points, false);\n    cout << sz(p.vertex) << endl;\n\
    \    int pos = 0;\n    pll cur = {p.vertex[0].y, p.vertex[0].x};\n    rep(i, sz(p.vertex))\
    \ {\n        if (chmin(cur, pll(p.vertex[i].y, p.vertex[i].x))) pos = i;\n   \
    \ }\n    rep(i, sz(p.vertex)) {\n        cout << p.vertex[pos] << endl;\n    \
    \    pos++;\n        pos %= sz(p.vertex);\n    }\n}\n"
  dependsOn:
  - competitive/std/std.hpp
  - competitive/geometry/polygon.hpp
  - competitive/geometry/base.hpp
  - competitive/geometry/counter_clockwise.hpp
  - competitive/std/io.hpp
  isVerificationFile: true
  path: online_test/AOJ/CGL_4_A.test.cpp
  requiredBy: []
  timestamp: '2023-02-15 22:44:03+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: online_test/AOJ/CGL_4_A.test.cpp
layout: document
redirect_from:
- /verify/online_test/AOJ/CGL_4_A.test.cpp
- /verify/online_test/AOJ/CGL_4_A.test.cpp.html
title: online_test/AOJ/CGL_4_A.test.cpp
---
