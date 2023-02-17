---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: atcoder/internal_bit.hpp
    title: atcoder/internal_bit.hpp
  - icon: ':heavy_check_mark:'
    path: atcoder/lazysegtree.hpp
    title: atcoder/lazysegtree.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/data_structure/lazysegtree.hpp
    title: competitive/data_structure/lazysegtree.hpp
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
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_I
    links:
    - https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_I
  bundledCode: "#line 1 \"online_test/AOJ/DSL_2_I.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_I\"\
    \n#include <competitive/std/std.hpp>\n#include <competitive/data_structure/lazysegtree.hpp>\n\
    #include <competitive/std/io.hpp>\n\nint main() {\n    int n,q;\n    cin >> n\
    \ >> q;\n    lseg_add_rupdate<ll> lseg(n);\n    debug(lseg);\n    rep(i, q) {\n\
    \        int t;\n        cin >> t;\n        if (t == 0) {\n            int s,t;\
    \ ll x;\n            cin >> s >> t >> x;\n            lseg.apply(s, t+1, x);\n\
    \        } else {\n            int s,t;\n            cin >> s >> t;\n        \
    \    cout << lseg.prod(s, t+1) << '\\n';\n        }\n        debug(lseg);\n  \
    \  }\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_I\"\n#include\
    \ <competitive/std/std.hpp>\n#include <competitive/data_structure/lazysegtree.hpp>\n\
    #include <competitive/std/io.hpp>\n\nint main() {\n    int n,q;\n    cin >> n\
    \ >> q;\n    lseg_add_rupdate<ll> lseg(n);\n    debug(lseg);\n    rep(i, q) {\n\
    \        int t;\n        cin >> t;\n        if (t == 0) {\n            int s,t;\
    \ ll x;\n            cin >> s >> t >> x;\n            lseg.apply(s, t+1, x);\n\
    \        } else {\n            int s,t;\n            cin >> s >> t;\n        \
    \    cout << lseg.prod(s, t+1) << '\\n';\n        }\n        debug(lseg);\n  \
    \  }\n}\n"
  dependsOn:
  - competitive/std/std.hpp
  - competitive/data_structure/lazysegtree.hpp
  - atcoder/lazysegtree.hpp
  - atcoder/internal_bit.hpp
  - competitive/std/io.hpp
  isVerificationFile: true
  path: online_test/AOJ/DSL_2_I.test.cpp
  requiredBy: []
  timestamp: '2023-02-17 21:43:12+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: online_test/AOJ/DSL_2_I.test.cpp
layout: document
redirect_from:
- /verify/online_test/AOJ/DSL_2_I.test.cpp
- /verify/online_test/AOJ/DSL_2_I.test.cpp.html
title: online_test/AOJ/DSL_2_I.test.cpp
---
