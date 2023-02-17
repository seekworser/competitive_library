---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: competitive/algorithm/longest_common_subsequence.hpp
    title: competitive/algorithm/longest_common_subsequence.hpp
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
    PROBLEM: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_10_C
    links:
    - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_10_C
  bundledCode: "#line 1 \"online_test/AOJ/ALDS_1_10_C.test.cpp\"\n#define PROBLEM\
    \ \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_10_C\"\n#include\
    \ <competitive/std/std.hpp>\n#include <competitive/algorithm/longest_common_subsequence.hpp>\n\
    #include <competitive/std/io.hpp>\nint main() {\n    int n;\n    cin >> n;\n \
    \   rep(i, n) {\n        string s,t;\n        cin >> s >> t;\n        vector<char>\
    \ sv, tv;\n        rep(i, sz(s)) sv.push_back(s[i]);\n        rep(i, sz(t)) tv.push_back(t[i]);\n\
    \        cout << lcs(sv, tv).size() << endl;\n    }\n}\n"
  code: "#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_10_C\"\
    \n#include <competitive/std/std.hpp>\n#include <competitive/algorithm/longest_common_subsequence.hpp>\n\
    #include <competitive/std/io.hpp>\nint main() {\n    int n;\n    cin >> n;\n \
    \   rep(i, n) {\n        string s,t;\n        cin >> s >> t;\n        vector<char>\
    \ sv, tv;\n        rep(i, sz(s)) sv.push_back(s[i]);\n        rep(i, sz(t)) tv.push_back(t[i]);\n\
    \        cout << lcs(sv, tv).size() << endl;\n    }\n}"
  dependsOn:
  - competitive/std/std.hpp
  - competitive/algorithm/longest_common_subsequence.hpp
  - competitive/std/io.hpp
  isVerificationFile: true
  path: online_test/AOJ/ALDS_1_10_C.test.cpp
  requiredBy: []
  timestamp: '2023-02-14 09:29:01+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: online_test/AOJ/ALDS_1_10_C.test.cpp
layout: document
redirect_from:
- /verify/online_test/AOJ/ALDS_1_10_C.test.cpp
- /verify/online_test/AOJ/ALDS_1_10_C.test.cpp.html
title: online_test/AOJ/ALDS_1_10_C.test.cpp
---
