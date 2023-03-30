---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    _deprecated_at_docs: docs/itertools/permutation.md
    document_title: permutation.hpp
    links: []
  bundledCode: "#line 2 \"competitive/itertools/permutation.hpp\"\ntemplate<class\
    \ T> void init_permutation_dup(vector<T> &cur, vector<T> &a, vector<ll> &ind)\
    \ {\n    long long n = a.size();\n    long long r = cur.size();\n    for (long\
    \ long i = 0; i < r; i++) {\n        ind[i] = 0;\n        cur[i] = a[0];\n   \
    \ }\n    return;\n};\ntemplate<class T> bool next_permutation_dup(vector<T> &cur,\
    \ vector<T> &a, vector<ll> &ind) {\n    long long n = a.size();\n    long long\
    \ r = cur.size();\n    for (long long i = r - 1; i > -1; i--) {\n        if (ind[i]\
    \ != n - 1) {\n            ind[i]++;\n            for (long long j = i + 1; j\
    \ < r; j++) {\n                ind[j] = 0;\n            }\n            for (long\
    \ long j = 0; j < r; j++) {\n                cur[j] = a[ind[j]];\n           \
    \ }\n            return true;\n        }\n    }\n    return false;\n};\ntemplate<class\
    \ T> void init_combination(vector<T> &cur, vector<T> &a, vector<ll> &ind) {\n\
    \    long long n = a.size();\n    long long r = cur.size();\n    assert(r <= n\
    \ && r != 0);\n    for (long long i = 0; i < r; i++) {\n        ind[i] = i;\n\
    \        cur[i] = a[i];\n    }\n    return;\n};\ntemplate<class T> bool next_combination(vector<T>\
    \ &cur, vector<T> &a, vector<ll> &ind) {\n    long long n = a.size();\n    long\
    \ long r = cur.size();\n    for (long long i = r - 1; i > -1; i--) {\n       \
    \ if (ind[i] != n - r + i) {\n            ind[i]++;\n            for (long long\
    \ j = i + 1; j < r; j++) {\n                ind[j] = ind[j-1] + 1;\n         \
    \   }\n            for (long long j = 0; j < r; j++) {\n                cur[j]\
    \ = a[ind[j]];\n            }\n            return true;\n        }\n    }\n  \
    \  return false;\n};\ntemplate<class T> void init_combination_dup(vector<T> &cur,\
    \ vector<T> &a, vector<ll> &ind) {\n    long long n = a.size();\n    long long\
    \ r = cur.size();\n    for (long long i = 0; i < r; i++) {\n        ind[i] = 0;\n\
    \        cur[i] = a[0];\n    }\n    return;\n};\ntemplate<class T> bool next_combination_dup(vector<T>\
    \ &cur, vector<T> &a, vector<ll> &ind) {\n    long long n = a.size();\n    long\
    \ long r = cur.size();\n    for (long long i = r - 1; i > -1; i--) {\n       \
    \ if (ind[i] != n - 1) {\n            ind[i]++;\n            for (long long j\
    \ = i + 1; j < r; j++) {\n                ind[j] = ind[j-1];\n            }\n\
    \            for (long long j = 0; j < r; j++) {\n                cur[j] = a[ind[j]];\n\
    \            }\n            return true;\n        }\n    }\n    return false;\n\
    };\ntemplate<class T> void init_permutation(vector<T> &cur, vector<T> &a, vector<ll>\
    \ &ind, vector<ll> &all_index) {\n    long long n = a.size();\n    long long r\
    \ = cur.size();\n    assert(r <= n && r != 0);\n    for (long long i = 0; i <\
    \ r; i++) {\n        ind[i] = i;\n        cur[i] = a[i];\n    }\n    for (long\
    \ long i = 0; i < n; i++) {\n        all_index[i] = i;\n    }\n    return;\n};\n\
    template<class T> bool next_permutation_(vector<T> &cur, vector<T> &a, vector<ll>\
    \ &ind, vector<ll> &ind_comb, vector<ll> &all_index) {\n    long long n = a.size();\n\
    \    long long r = cur.size();\n    if (next_permutation(all(ind))) {\n      \
    \  for (int i = 0; i < r; i++) {\n            cur[i] = a[ind[i]];\n        }\n\
    \        return true;\n    };\n    vector<ll> ind_ind_comb(ind_comb);\n    if\
    \ (next_combination(ind_comb, all_index, ind_ind_comb)) {\n        ind = ind_comb;\n\
    \        for (int i = 0; i < r; i++) {\n            cur[i] = a[ind[i]];\n    \
    \    }\n        return true;\n    }\n    return false;\n};\n// #define rep_perm(i,\
    \ a) auto i = a; sort(all(i)); for(bool i##_perm = true; i##_perm; i##_perm =\
    \ next_permutation(all(i)))\n#define rep_perm(i, a, r) decltype(a) i(r); vector<long\
    \ long> i##_ind_comb(r, -1); vector<long long> i##_ind(r, -1); vector<long long>\
    \ i##_all_index(a.size(), -1); vector<long long> i##_ind_ind_comb(a.size(), -1);\
    \ init_permutation(i, a, i##_ind, i##_all_index); init_combination(i##_ind_comb,\
    \ i##_all_index, i##_ind_ind_comb); for(bool i##_next_comb = true; i##_next_comb;\
    \ i##_next_comb=next_permutation_(i, a, i##_ind, i##_ind_comb, i##_all_index))\n\
    #define rep_perm_dup(i, a, r) decltype(a) i(r); vector<long long> i##_ind(r, -1);\
    \ init_permutation_dup(i, a, i##_ind); for(bool i##_next_comb = true; i##_next_comb;\
    \ i##_next_comb=next_permutation_dup(i, a, i##_ind))\n#define rep_comb(i, a, r)\
    \ decltype(a) i(r); vector<long long> i##_ind(r, -1); init_combination(i, a, i##_ind);\
    \ for(bool i##_next_comb = true; i##_next_comb; i##_next_comb=next_combination(i,\
    \ a, i##_ind))\n#define rep_comb_dup(i, a, r) decltype(a) i(r); vector<long long>\
    \ i##_ind(r, -1); init_combination_dup(i, a, i##_ind); for(bool i##_next_comb\
    \ = true; i##_next_comb; i##_next_comb=next_combination_dup(i, a, i##_ind))\n\
    /**\n * @brief permutation.hpp\n * @docs docs/itertools/permutation.md\n */\n"
  code: "#pragma once\ntemplate<class T> void init_permutation_dup(vector<T> &cur,\
    \ vector<T> &a, vector<ll> &ind) {\n    long long n = a.size();\n    long long\
    \ r = cur.size();\n    for (long long i = 0; i < r; i++) {\n        ind[i] = 0;\n\
    \        cur[i] = a[0];\n    }\n    return;\n};\ntemplate<class T> bool next_permutation_dup(vector<T>\
    \ &cur, vector<T> &a, vector<ll> &ind) {\n    long long n = a.size();\n    long\
    \ long r = cur.size();\n    for (long long i = r - 1; i > -1; i--) {\n       \
    \ if (ind[i] != n - 1) {\n            ind[i]++;\n            for (long long j\
    \ = i + 1; j < r; j++) {\n                ind[j] = 0;\n            }\n       \
    \     for (long long j = 0; j < r; j++) {\n                cur[j] = a[ind[j]];\n\
    \            }\n            return true;\n        }\n    }\n    return false;\n\
    };\ntemplate<class T> void init_combination(vector<T> &cur, vector<T> &a, vector<ll>\
    \ &ind) {\n    long long n = a.size();\n    long long r = cur.size();\n    assert(r\
    \ <= n && r != 0);\n    for (long long i = 0; i < r; i++) {\n        ind[i] =\
    \ i;\n        cur[i] = a[i];\n    }\n    return;\n};\ntemplate<class T> bool next_combination(vector<T>\
    \ &cur, vector<T> &a, vector<ll> &ind) {\n    long long n = a.size();\n    long\
    \ long r = cur.size();\n    for (long long i = r - 1; i > -1; i--) {\n       \
    \ if (ind[i] != n - r + i) {\n            ind[i]++;\n            for (long long\
    \ j = i + 1; j < r; j++) {\n                ind[j] = ind[j-1] + 1;\n         \
    \   }\n            for (long long j = 0; j < r; j++) {\n                cur[j]\
    \ = a[ind[j]];\n            }\n            return true;\n        }\n    }\n  \
    \  return false;\n};\ntemplate<class T> void init_combination_dup(vector<T> &cur,\
    \ vector<T> &a, vector<ll> &ind) {\n    long long n = a.size();\n    long long\
    \ r = cur.size();\n    for (long long i = 0; i < r; i++) {\n        ind[i] = 0;\n\
    \        cur[i] = a[0];\n    }\n    return;\n};\ntemplate<class T> bool next_combination_dup(vector<T>\
    \ &cur, vector<T> &a, vector<ll> &ind) {\n    long long n = a.size();\n    long\
    \ long r = cur.size();\n    for (long long i = r - 1; i > -1; i--) {\n       \
    \ if (ind[i] != n - 1) {\n            ind[i]++;\n            for (long long j\
    \ = i + 1; j < r; j++) {\n                ind[j] = ind[j-1];\n            }\n\
    \            for (long long j = 0; j < r; j++) {\n                cur[j] = a[ind[j]];\n\
    \            }\n            return true;\n        }\n    }\n    return false;\n\
    };\ntemplate<class T> void init_permutation(vector<T> &cur, vector<T> &a, vector<ll>\
    \ &ind, vector<ll> &all_index) {\n    long long n = a.size();\n    long long r\
    \ = cur.size();\n    assert(r <= n && r != 0);\n    for (long long i = 0; i <\
    \ r; i++) {\n        ind[i] = i;\n        cur[i] = a[i];\n    }\n    for (long\
    \ long i = 0; i < n; i++) {\n        all_index[i] = i;\n    }\n    return;\n};\n\
    template<class T> bool next_permutation_(vector<T> &cur, vector<T> &a, vector<ll>\
    \ &ind, vector<ll> &ind_comb, vector<ll> &all_index) {\n    long long n = a.size();\n\
    \    long long r = cur.size();\n    if (next_permutation(all(ind))) {\n      \
    \  for (int i = 0; i < r; i++) {\n            cur[i] = a[ind[i]];\n        }\n\
    \        return true;\n    };\n    vector<ll> ind_ind_comb(ind_comb);\n    if\
    \ (next_combination(ind_comb, all_index, ind_ind_comb)) {\n        ind = ind_comb;\n\
    \        for (int i = 0; i < r; i++) {\n            cur[i] = a[ind[i]];\n    \
    \    }\n        return true;\n    }\n    return false;\n};\n// #define rep_perm(i,\
    \ a) auto i = a; sort(all(i)); for(bool i##_perm = true; i##_perm; i##_perm =\
    \ next_permutation(all(i)))\n#define rep_perm(i, a, r) decltype(a) i(r); vector<long\
    \ long> i##_ind_comb(r, -1); vector<long long> i##_ind(r, -1); vector<long long>\
    \ i##_all_index(a.size(), -1); vector<long long> i##_ind_ind_comb(a.size(), -1);\
    \ init_permutation(i, a, i##_ind, i##_all_index); init_combination(i##_ind_comb,\
    \ i##_all_index, i##_ind_ind_comb); for(bool i##_next_comb = true; i##_next_comb;\
    \ i##_next_comb=next_permutation_(i, a, i##_ind, i##_ind_comb, i##_all_index))\n\
    #define rep_perm_dup(i, a, r) decltype(a) i(r); vector<long long> i##_ind(r, -1);\
    \ init_permutation_dup(i, a, i##_ind); for(bool i##_next_comb = true; i##_next_comb;\
    \ i##_next_comb=next_permutation_dup(i, a, i##_ind))\n#define rep_comb(i, a, r)\
    \ decltype(a) i(r); vector<long long> i##_ind(r, -1); init_combination(i, a, i##_ind);\
    \ for(bool i##_next_comb = true; i##_next_comb; i##_next_comb=next_combination(i,\
    \ a, i##_ind))\n#define rep_comb_dup(i, a, r) decltype(a) i(r); vector<long long>\
    \ i##_ind(r, -1); init_combination_dup(i, a, i##_ind); for(bool i##_next_comb\
    \ = true; i##_next_comb; i##_next_comb=next_combination_dup(i, a, i##_ind))\n\
    /**\n * @brief permutation.hpp\n * @docs docs/itertools/permutation.md\n */\n"
  dependsOn: []
  isVerificationFile: false
  path: competitive/itertools/permutation.hpp
  requiredBy: []
  timestamp: '2023-03-30 09:29:48+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: competitive/itertools/permutation.hpp
layout: document
redirect_from:
- /library/competitive/itertools/permutation.hpp
- /library/competitive/itertools/permutation.hpp.html
title: permutation.hpp
---
