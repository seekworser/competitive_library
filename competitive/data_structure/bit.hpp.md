---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: competitive/std/std.hpp
    title: competitive/std/std.hpp
  _extendedRequiredBy:
  - icon: ':warning:'
    path: competitive/math/inversion_num.hpp
    title: competitive/math/inversion_num.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: online_test/library-checker/static_range_sum.test.cpp
    title: online_test/library-checker/static_range_sum.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"competitive/data_structure/bit.hpp\"\n\n\n#include <competitive/std/std.hpp>\n\
    template<class T> struct BIT {\n    private:\n        vector<T> bit;\n       \
    \ int _n;\n    public:\n        BIT(int size):_n(size),bit(size+1, 0) {}\n   \
    \     void add(int p, T x) {\n            assert(0 <= p && p <= _n);\n       \
    \     p++;\n            for (int i = p; i <= _n; i += i & -i) {\n            \
    \    bit[i] += x;\n            }\n        }\n        T sum_from_left(int p) {\n\
    \            assert(0 <= p && p <= _n);\n            T ret = 0;\n            for\
    \ (int i = p; i > 0; i -= i & -i){\n                ret += bit[i];\n         \
    \   }\n            return ret;\n        }\n        T sum(int ps, int pt) {\n \
    \           return sum_from_left(pt) - sum_from_left(ps);\n        }\n};\n\n"
  code: "#ifndef COMPETITIVE_DATASTRUCTURE_BIT_HPP\n#define COMPETITIVE_DATASTRUCTURE_BIT_HPP\
    \ 1\n#include <competitive/std/std.hpp>\ntemplate<class T> struct BIT {\n    private:\n\
    \        vector<T> bit;\n        int _n;\n    public:\n        BIT(int size):_n(size),bit(size+1,\
    \ 0) {}\n        void add(int p, T x) {\n            assert(0 <= p && p <= _n);\n\
    \            p++;\n            for (int i = p; i <= _n; i += i & -i) {\n     \
    \           bit[i] += x;\n            }\n        }\n        T sum_from_left(int\
    \ p) {\n            assert(0 <= p && p <= _n);\n            T ret = 0;\n     \
    \       for (int i = p; i > 0; i -= i & -i){\n                ret += bit[i];\n\
    \            }\n            return ret;\n        }\n        T sum(int ps, int\
    \ pt) {\n            return sum_from_left(pt) - sum_from_left(ps);\n        }\n\
    };\n#endif //COMPETITIVE_DATASTRUCTURE_BIT_HPP"
  dependsOn:
  - competitive/std/std.hpp
  isVerificationFile: false
  path: competitive/data_structure/bit.hpp
  requiredBy:
  - competitive/math/inversion_num.hpp
  timestamp: '2023-02-22 09:47:28+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - online_test/library-checker/static_range_sum.test.cpp
documentation_of: competitive/data_structure/bit.hpp
layout: document
redirect_from:
- /library/competitive/data_structure/bit.hpp
- /library/competitive/data_structure/bit.hpp.html
title: competitive/data_structure/bit.hpp
---
