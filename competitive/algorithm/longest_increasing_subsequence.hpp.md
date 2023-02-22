---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: competitive/std/std.hpp
    title: competitive/std/std.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/DPL_1_D.test.cpp
    title: online_test/AOJ/DPL_1_D.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/library-checker/longest_increasing_subsequence.test.cpp
    title: online_test/library-checker/longest_increasing_subsequence.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"competitive/algorithm/longest_increasing_subsequence.hpp\"\
    \n\n\n#include <competitive/std/std.hpp>\n// return index_of longest increasing\
    \ subsequence of a\ntemplate <class T> vector<int> lis(vector<T> const &a, bool\
    \ const strict=true) {\n    vector<T> dp;\n    vector<int> pos(sz(a));\n    auto\
    \ iter = dp.begin();\n    rep(i, sz(a)) {\n        if (strict) iter = lower_bound(all(dp),\
    \ a[i]);\n        else iter = upper_bound(all(dp), a[i]);\n        pos[i] = distance(dp.begin(),\
    \ iter);\n        if (iter == dp.end()) dp.push_back(a[i]);\n        else *iter\
    \ = a[i];\n    }\n    int m = sz(dp) - 1;\n    vector<int> rev(m+1);\n    for\
    \ (int i = sz(a)-1; m >= 0 && i >= 0; --i) {\n        if (pos[i] == m) {\n   \
    \         rev[m] = i;\n            --m;\n        }\n    }\n    return rev;\n};\n\
    vector<int> lis(string const &a, bool const strict=true) {\n    vector<char> _a(a.begin(),\
    \ a.end());\n    return lis(_a, strict);\n};\n\n"
  code: "#ifndef COMPETITIVE_ALGORITHM_LIS_HPP\n#define COMPETITIVE_ALGORITHM_LIS_HPP\
    \ 1\n#include <competitive/std/std.hpp>\n// return index_of longest increasing\
    \ subsequence of a\ntemplate <class T> vector<int> lis(vector<T> const &a, bool\
    \ const strict=true) {\n    vector<T> dp;\n    vector<int> pos(sz(a));\n    auto\
    \ iter = dp.begin();\n    rep(i, sz(a)) {\n        if (strict) iter = lower_bound(all(dp),\
    \ a[i]);\n        else iter = upper_bound(all(dp), a[i]);\n        pos[i] = distance(dp.begin(),\
    \ iter);\n        if (iter == dp.end()) dp.push_back(a[i]);\n        else *iter\
    \ = a[i];\n    }\n    int m = sz(dp) - 1;\n    vector<int> rev(m+1);\n    for\
    \ (int i = sz(a)-1; m >= 0 && i >= 0; --i) {\n        if (pos[i] == m) {\n   \
    \         rev[m] = i;\n            --m;\n        }\n    }\n    return rev;\n};\n\
    vector<int> lis(string const &a, bool const strict=true) {\n    vector<char> _a(a.begin(),\
    \ a.end());\n    return lis(_a, strict);\n};\n#endif // COMPETITIVE_ALGORITHM_LIS_HPP"
  dependsOn:
  - competitive/std/std.hpp
  isVerificationFile: false
  path: competitive/algorithm/longest_increasing_subsequence.hpp
  requiredBy: []
  timestamp: '2023-02-22 09:47:28+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - online_test/library-checker/longest_increasing_subsequence.test.cpp
  - online_test/AOJ/DPL_1_D.test.cpp
documentation_of: competitive/algorithm/longest_increasing_subsequence.hpp
layout: document
redirect_from:
- /library/competitive/algorithm/longest_increasing_subsequence.hpp
- /library/competitive/algorithm/longest_increasing_subsequence.hpp.html
title: competitive/algorithm/longest_increasing_subsequence.hpp
---
