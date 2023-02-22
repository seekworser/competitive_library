---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: competitive/std/std.hpp
    title: competitive/std/std.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/ALDS_1_10_C.test.cpp
    title: online_test/AOJ/ALDS_1_10_C.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"competitive/algorithm/longest_common_subsequence.hpp\"\n\
    \n\n#include <competitive/std/std.hpp>\n// return index_of a for longest common\
    \ subsequence\ntemplate <class T> vector<int> lcs(vector<T> const &a, vector<T>\
    \ const &b) {\n    int n = sz(a);\n    int m = sz(b);\n    if (n == 0 || m ==\
    \ 0) {\n        vector<int> rev;\n        return rev;\n    }\n    const int FROM_UPPER_LEFT\
    \ = 1;\n    const int FROM_UPPER = 2;\n    const int FROM_LEFT = 3;\n    vvi dp(n+1,\
    \ vi(m+1, 0));\n    vvi prev(n+1, vi(m+1, 0));\n    repi(i, 1, n+1) repi(j, 1,\
    \ m+1) {\n        if (a[i-1] == b[j-1]) {\n            if (chmax(dp[i][j], dp[i-1][j-1]\
    \ + 1)) prev[i][j] = FROM_UPPER_LEFT;\n        }\n        if (chmax(dp[i][j],\
    \ dp[i-1][j])) prev[i][j] = FROM_UPPER;\n        if (chmax(dp[i][j], dp[i][j-1]))\
    \ prev[i][j] = FROM_LEFT;\n    }\n    int ni = n;\n    int mi = m;\n    vector<int>\
    \ rev(dp[n][m], 0);\n    int pos = dp[n][m] - 1;\n    while (pos >= 0) {\n   \
    \     if (prev[ni][mi] == FROM_UPPER_LEFT) {\n            ni--, mi--;\n      \
    \      rev[pos] = ni;\n            --pos;\n        } else if (prev[ni][mi] ==\
    \ FROM_UPPER) {\n            ni--;\n        } else {\n            mi--;\n    \
    \    }\n    }\n    return rev;\n};\nvector<int> lcs(string const &a, string const\
    \ &b) {\n    vector<char> _a(a.begin(), a.end());\n    vector<char> _b(b.begin(),\
    \ b.end());\n    return lcs(_a, _b);\n};\n\n"
  code: "#ifndef COMPETITIVE_ALGORITHM_LCS_HPP\n#define COMPETITIVE_ALGORITHM_LCS_HPP\
    \ 1\n#include <competitive/std/std.hpp>\n// return index_of a for longest common\
    \ subsequence\ntemplate <class T> vector<int> lcs(vector<T> const &a, vector<T>\
    \ const &b) {\n    int n = sz(a);\n    int m = sz(b);\n    if (n == 0 || m ==\
    \ 0) {\n        vector<int> rev;\n        return rev;\n    }\n    const int FROM_UPPER_LEFT\
    \ = 1;\n    const int FROM_UPPER = 2;\n    const int FROM_LEFT = 3;\n    vvi dp(n+1,\
    \ vi(m+1, 0));\n    vvi prev(n+1, vi(m+1, 0));\n    repi(i, 1, n+1) repi(j, 1,\
    \ m+1) {\n        if (a[i-1] == b[j-1]) {\n            if (chmax(dp[i][j], dp[i-1][j-1]\
    \ + 1)) prev[i][j] = FROM_UPPER_LEFT;\n        }\n        if (chmax(dp[i][j],\
    \ dp[i-1][j])) prev[i][j] = FROM_UPPER;\n        if (chmax(dp[i][j], dp[i][j-1]))\
    \ prev[i][j] = FROM_LEFT;\n    }\n    int ni = n;\n    int mi = m;\n    vector<int>\
    \ rev(dp[n][m], 0);\n    int pos = dp[n][m] - 1;\n    while (pos >= 0) {\n   \
    \     if (prev[ni][mi] == FROM_UPPER_LEFT) {\n            ni--, mi--;\n      \
    \      rev[pos] = ni;\n            --pos;\n        } else if (prev[ni][mi] ==\
    \ FROM_UPPER) {\n            ni--;\n        } else {\n            mi--;\n    \
    \    }\n    }\n    return rev;\n};\nvector<int> lcs(string const &a, string const\
    \ &b) {\n    vector<char> _a(a.begin(), a.end());\n    vector<char> _b(b.begin(),\
    \ b.end());\n    return lcs(_a, _b);\n};\n#endif // COMPETITIVE_ALGORITHM_LCS_HPP"
  dependsOn:
  - competitive/std/std.hpp
  isVerificationFile: false
  path: competitive/algorithm/longest_common_subsequence.hpp
  requiredBy: []
  timestamp: '2023-02-22 09:47:28+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - online_test/AOJ/ALDS_1_10_C.test.cpp
documentation_of: competitive/algorithm/longest_common_subsequence.hpp
layout: document
redirect_from:
- /library/competitive/algorithm/longest_common_subsequence.hpp
- /library/competitive/algorithm/longest_common_subsequence.hpp.html
title: competitive/algorithm/longest_common_subsequence.hpp
---
