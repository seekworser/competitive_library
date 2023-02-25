---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: competitive/std/io.hpp
    title: competitive/std/io.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/std/std.hpp
    title: competitive/std/std.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/string/rolling_hash.hpp
    title: competitive/string/rolling_hash.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_14_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_14_B
  bundledCode: "#line 1 \"online_test/AOJ/ALDS_1_14_B.test.cpp\"\n#define PROBLEM\
    \ \"https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_14_B\"\n#include <competitive/std/std.hpp>\n\
    #include <competitive/string/rolling_hash.hpp>\n#include <competitive/std/io.hpp>\n\
    \nint main() {\n    string s, t;\n    cin >> s >> t;\n    int n = sz(s);\n   \
    \ int m = sz(t);\n    RollingHash rhs(s, 4);\n    RollingHash rht(t);\n    auto\
    \ th = rht.query(0, m);\n    rep(i, n-m+1) {\n        if (rht.query(0, m) == rhs.query(i,\
    \ i+m)) print(i);\n    }\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_14_B\"\n\
    #include <competitive/std/std.hpp>\n#include <competitive/string/rolling_hash.hpp>\n\
    #include <competitive/std/io.hpp>\n\nint main() {\n    string s, t;\n    cin >>\
    \ s >> t;\n    int n = sz(s);\n    int m = sz(t);\n    RollingHash rhs(s, 4);\n\
    \    RollingHash rht(t);\n    auto th = rht.query(0, m);\n    rep(i, n-m+1) {\n\
    \        if (rht.query(0, m) == rhs.query(i, i+m)) print(i);\n    }\n}\n"
  dependsOn:
  - competitive/std/std.hpp
  - competitive/string/rolling_hash.hpp
  - competitive/std/io.hpp
  isVerificationFile: true
  path: online_test/AOJ/ALDS_1_14_B.test.cpp
  requiredBy: []
  timestamp: '2023-02-26 05:21:37+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: online_test/AOJ/ALDS_1_14_B.test.cpp
layout: document
redirect_from:
- /verify/online_test/AOJ/ALDS_1_14_B.test.cpp
- /verify/online_test/AOJ/ALDS_1_14_B.test.cpp.html
title: online_test/AOJ/ALDS_1_14_B.test.cpp
---
