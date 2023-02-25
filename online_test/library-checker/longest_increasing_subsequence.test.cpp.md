---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: competitive/algorithm/longest_increasing_subsequence.hpp
    title: competitive/algorithm/longest_increasing_subsequence.hpp
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
    PROBLEM: https://judge.yosupo.jp/problem/longest_increasing_subsequence
    links:
    - https://judge.yosupo.jp/problem/longest_increasing_subsequence
  bundledCode: "#line 1 \"online_test/library-checker/longest_increasing_subsequence.test.cpp\"\
    \n#define PROBLEM \"https://judge.yosupo.jp/problem/longest_increasing_subsequence\"\
    \n#include <competitive/std/std.hpp>\n#include <competitive/algorithm/longest_increasing_subsequence.hpp>\n\
    #include <competitive/std/io.hpp>\nint main() {\n    int n;\n    cin >> n;\n \
    \   vl a(n);\n    cin >> a;\n    vi lis_a = lis(a, true);\n    cout << sz(lis_a)\
    \ << endl;\n    cout << lis_a << endl;\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/longest_increasing_subsequence\"\
    \n#include <competitive/std/std.hpp>\n#include <competitive/algorithm/longest_increasing_subsequence.hpp>\n\
    #include <competitive/std/io.hpp>\nint main() {\n    int n;\n    cin >> n;\n \
    \   vl a(n);\n    cin >> a;\n    vi lis_a = lis(a, true);\n    cout << sz(lis_a)\
    \ << endl;\n    cout << lis_a << endl;\n}\n"
  dependsOn:
  - competitive/std/std.hpp
  - competitive/algorithm/longest_increasing_subsequence.hpp
  - competitive/std/io.hpp
  isVerificationFile: true
  path: online_test/library-checker/longest_increasing_subsequence.test.cpp
  requiredBy: []
  timestamp: '2023-02-26 03:11:42+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: online_test/library-checker/longest_increasing_subsequence.test.cpp
layout: document
redirect_from:
- /verify/online_test/library-checker/longest_increasing_subsequence.test.cpp
- /verify/online_test/library-checker/longest_increasing_subsequence.test.cpp.html
title: online_test/library-checker/longest_increasing_subsequence.test.cpp
---
