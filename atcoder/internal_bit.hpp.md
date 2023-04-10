---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: atcoder/convolution.hpp
    title: atcoder/convolution.hpp
  - icon: ':heavy_check_mark:'
    path: atcoder/lazysegtree.hpp
    title: atcoder/lazysegtree.hpp
  - icon: ':heavy_check_mark:'
    path: atcoder/segtree.hpp
    title: atcoder/segtree.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/data_structure/lazysegtree.hpp
    title: "\u9045\u5EF6\u30BB\u30B0\u30E1\u30F3\u30C8\u6728\uFF08\u30E9\u30C3\u30D1\
      \u30FC\uFF09"
  - icon: ':heavy_check_mark:'
    path: competitive/data_structure/segtree.hpp
    title: "\u30BB\u30B0\u30E1\u30F3\u30C8\u6728\uFF08\u30E9\u30C3\u30D1\u30FC\uFF09"
  - icon: ':heavy_check_mark:'
    path: competitive/tree/heavy_light_decomposition.hpp
    title: "HL\u5206\u89E3 (Heavy Light Decomposition)"
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/DSL_2_F.test.cpp
    title: online_test/AOJ/DSL_2_F.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/DSL_2_G.test.cpp
    title: online_test/AOJ/DSL_2_G.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/DSL_2_H.test.cpp
    title: online_test/AOJ/DSL_2_H.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/DSL_2_I.test.cpp
    title: online_test/AOJ/DSL_2_I.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/GRL_5_C.test.cpp
    title: online_test/AOJ/GRL_5_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/library-checker/lca_hld.test.cpp
    title: online_test/library-checker/lca_hld.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"atcoder/internal_bit.hpp\"\n#ifdef _MSC_VER\n#include <intrin.h>\n\
    #endif\n\nnamespace atcoder {\n\nnamespace internal {\n\n// @param n `0 <= n`\n\
    // @return minimum non-negative `x` s.t. `n <= 2**x`\nint ceil_pow2(int n) {\n\
    \    int x = 0;\n    while ((1U << x) < (unsigned int)(n)) x++;\n    return x;\n\
    }\n\n// @param n `1 <= n`\n// @return minimum non-negative `x` s.t. `(n & (1 <<\
    \ x)) != 0`\nconstexpr int bsf_constexpr(unsigned int n) {\n    int x = 0;\n \
    \   while (!(n & (1 << x))) x++;\n    return x;\n}\n\n// @param n `1 <= n`\n//\
    \ @return minimum non-negative `x` s.t. `(n & (1 << x)) != 0`\nint bsf(unsigned\
    \ int n) {\n#ifdef _MSC_VER\n    unsigned long index;\n    _BitScanForward(&index,\
    \ n);\n    return index;\n#else\n    return __builtin_ctz(n);\n#endif\n}\n\n}\
    \  // namespace internal\n\n}  // namespace atcoder\n"
  code: "#pragma once\n#ifdef _MSC_VER\n#include <intrin.h>\n#endif\n\nnamespace atcoder\
    \ {\n\nnamespace internal {\n\n// @param n `0 <= n`\n// @return minimum non-negative\
    \ `x` s.t. `n <= 2**x`\nint ceil_pow2(int n) {\n    int x = 0;\n    while ((1U\
    \ << x) < (unsigned int)(n)) x++;\n    return x;\n}\n\n// @param n `1 <= n`\n\
    // @return minimum non-negative `x` s.t. `(n & (1 << x)) != 0`\nconstexpr int\
    \ bsf_constexpr(unsigned int n) {\n    int x = 0;\n    while (!(n & (1 << x)))\
    \ x++;\n    return x;\n}\n\n// @param n `1 <= n`\n// @return minimum non-negative\
    \ `x` s.t. `(n & (1 << x)) != 0`\nint bsf(unsigned int n) {\n#ifdef _MSC_VER\n\
    \    unsigned long index;\n    _BitScanForward(&index, n);\n    return index;\n\
    #else\n    return __builtin_ctz(n);\n#endif\n}\n\n}  // namespace internal\n\n\
    }  // namespace atcoder\n"
  dependsOn: []
  isVerificationFile: false
  path: atcoder/internal_bit.hpp
  requiredBy:
  - atcoder/segtree.hpp
  - atcoder/lazysegtree.hpp
  - atcoder/convolution.hpp
  - competitive/tree/heavy_light_decomposition.hpp
  - competitive/data_structure/segtree.hpp
  - competitive/data_structure/lazysegtree.hpp
  timestamp: '2023-02-28 16:59:41+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - online_test/library-checker/lca_hld.test.cpp
  - online_test/AOJ/DSL_2_I.test.cpp
  - online_test/AOJ/GRL_5_C.test.cpp
  - online_test/AOJ/DSL_2_G.test.cpp
  - online_test/AOJ/DSL_2_H.test.cpp
  - online_test/AOJ/DSL_2_F.test.cpp
documentation_of: atcoder/internal_bit.hpp
layout: document
redirect_from:
- /library/atcoder/internal_bit.hpp
- /library/atcoder/internal_bit.hpp.html
title: atcoder/internal_bit.hpp
---
