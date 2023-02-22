---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: competitive/data_structure/bit.hpp
    title: competitive/data_structure/bit.hpp
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
    PROBLEM: https://judge.yosupo.jp/problem/static_range_sum
    links:
    - https://judge.yosupo.jp/problem/static_range_sum
  bundledCode: "#line 1 \"online_test/library-checker/static_range_sum.test.cpp\"\n\
    #define PROBLEM \"https://judge.yosupo.jp/problem/static_range_sum\"\n#include\
    \ <competitive/std/std.hpp>\n#include <competitive/data_structure/bit.hpp>\n#include\
    \ <competitive/std/io.hpp>\nint main() {\n    int n,q;\n    cin >> n >> q;\n \
    \   BIT<ll> b(n);\n    rep(i, n) {\n        ll x;\n        cin >> x;\n       \
    \ b.add(i, x);\n    }\n    rep(i, q) {\n        int l,r;\n        cin >> l >>\
    \ r;\n        cout << b.sum(l, r) << \"\\n\";\n    }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/static_range_sum\"\n#include\
    \ <competitive/std/std.hpp>\n#include <competitive/data_structure/bit.hpp>\n#include\
    \ <competitive/std/io.hpp>\nint main() {\n    int n,q;\n    cin >> n >> q;\n \
    \   BIT<ll> b(n);\n    rep(i, n) {\n        ll x;\n        cin >> x;\n       \
    \ b.add(i, x);\n    }\n    rep(i, q) {\n        int l,r;\n        cin >> l >>\
    \ r;\n        cout << b.sum(l, r) << \"\\n\";\n    }\n}"
  dependsOn:
  - competitive/std/std.hpp
  - competitive/data_structure/bit.hpp
  - competitive/std/io.hpp
  isVerificationFile: true
  path: online_test/library-checker/static_range_sum.test.cpp
  requiredBy: []
  timestamp: '2023-02-22 09:47:28+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: online_test/library-checker/static_range_sum.test.cpp
layout: document
redirect_from:
- /verify/online_test/library-checker/static_range_sum.test.cpp
- /verify/online_test/library-checker/static_range_sum.test.cpp.html
title: online_test/library-checker/static_range_sum.test.cpp
---
