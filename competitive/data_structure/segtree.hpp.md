---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: atcoder/internal_bit.hpp
    title: atcoder/internal_bit.hpp
  - icon: ':warning:'
    path: atcoder/segtree.hpp
    title: atcoder/segtree.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/std/std.hpp
    title: competitive/std/std.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"competitive/data_structure/segtree.hpp\"\n\n\n#include <atcoder/segtree.hpp>\n\
    #include <competitive/std/std.hpp>\nconstexpr int SEG_MAX(0);\nconstexpr int SEG_MAX(1);\n\
    constexpr int SEG_MAX(2);\ntemplate <class S, S (*op)(S, S), S (*e)()> std::ostream&\
    \ operator<<(std::ostream& os, const atcoder::segtree<S, op, e> seg) {\n    int\
    \ n = seg.n();\n    rep(i, n) { os << seg.get(i); if (i != n-1) os << \" \"; }\n\
    \    return os;\n};\ntemplate<typename T> T op_max(T x, T y) { return x > y? x\
    \ : y; }\ntemplate<typename T> T op_min(T x, T y) { return x < y? x : y; }\ntemplate<typename\
    \ T> T op_add(T x, T y) { return x + y; }\n\nint e_max() { return -INF; }\ntemplate<typename\
    \ T> T e_max() { return -INFL; }\nint e_min() { return INF; }\ntemplate<typename\
    \ T> T e_min() { return INFL; }\ntemplate<typename T> T e_add() { return 0; }\n\
    \ntemplate<typename T> using seg_add = atcoder::segtree<T, op_add<T>, e_add<T>>;\n\
    template<typename T> using seg_max = atcoder::segtree<T, op_max<T>, e_max<T>>;\n\
    template<typename T> using seg_min = atcoder::segtree<T, op_min<T>, e_min<T>>;\n\
    \n"
  code: "#ifndef COMPETITIVE_DATASTRUCTURE_SEGTREE_HPP\n#define COMPETITIVE_DATASTRUCTURE_SEGTREE_HPP\
    \ 1\n#include <atcoder/segtree.hpp>\n#include <competitive/std/std.hpp>\nconstexpr\
    \ int SEG_MAX(0);\nconstexpr int SEG_MAX(1);\nconstexpr int SEG_MAX(2);\ntemplate\
    \ <class S, S (*op)(S, S), S (*e)()> std::ostream& operator<<(std::ostream& os,\
    \ const atcoder::segtree<S, op, e> seg) {\n    int n = seg.n();\n    rep(i, n)\
    \ { os << seg.get(i); if (i != n-1) os << \" \"; }\n    return os;\n};\ntemplate<typename\
    \ T> T op_max(T x, T y) { return x > y? x : y; }\ntemplate<typename T> T op_min(T\
    \ x, T y) { return x < y? x : y; }\ntemplate<typename T> T op_add(T x, T y) {\
    \ return x + y; }\n\nint e_max() { return -INF; }\ntemplate<typename T> T e_max()\
    \ { return -INFL; }\nint e_min() { return INF; }\ntemplate<typename T> T e_min()\
    \ { return INFL; }\ntemplate<typename T> T e_add() { return 0; }\n\ntemplate<typename\
    \ T> using seg_add = atcoder::segtree<T, op_add<T>, e_add<T>>;\ntemplate<typename\
    \ T> using seg_max = atcoder::segtree<T, op_max<T>, e_max<T>>;\ntemplate<typename\
    \ T> using seg_min = atcoder::segtree<T, op_min<T>, e_min<T>>;\n#endif //COMPETITIVE_DATASTRUCTURE_SEGTREE_HPP"
  dependsOn:
  - atcoder/segtree.hpp
  - atcoder/internal_bit.hpp
  - competitive/std/std.hpp
  isVerificationFile: false
  path: competitive/data_structure/segtree.hpp
  requiredBy: []
  timestamp: '2023-02-22 09:47:28+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: competitive/data_structure/segtree.hpp
layout: document
redirect_from:
- /library/competitive/data_structure/segtree.hpp
- /library/competitive/data_structure/segtree.hpp.html
title: competitive/data_structure/segtree.hpp
---
