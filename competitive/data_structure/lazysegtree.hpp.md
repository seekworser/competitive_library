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
    path: competitive/std/std.hpp
    title: competitive/std/std.hpp
  _extendedRequiredBy: []
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
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"competitive/data_structure/lazysegtree.hpp\"\n\n\n#include\
    \ <atcoder/lazysegtree.hpp>\n#include <competitive/std/std.hpp>\ntemplate <class\
    \ S, S (*op)(S, S), S (*e)(), class F, S (*mapping)(F, S), F (*composition)(F,\
    \ F), F (*id)()>\nstd::ostream& operator<<(std::ostream& os, atcoder::lazy_segtree<S,\
    \ op, e, F, mapping, composition, id> seg) {\n    int n = seg.n();\n    rep(i,\
    \ n) { os << seg.get(i); if (i != n-1) os << \" \"; }\n    return os;\n};\n\n\
    template<typename T> struct AddNode {\n    T value;\n    ll size;\n    AddNode()\
    \ : value(T(0)), size(1) {};\n    AddNode(T value, ll size) : value(value), size(size)\
    \ {};\n    friend ostream& operator<<(std::ostream& os, const AddNode<T> &n) {\
    \ os << n.value; return os; };\n};\n\nint e_max() { return -INF; }\ntemplate<typename\
    \ T> T e_max() { return -INFL; }\nint e_min() { return INF; }\ntemplate<typename\
    \ T> T e_min() { return INFL; }\ntemplate<typename T> AddNode<T> e_add() { return\
    \ {0, 1}; }\n\ntemplate<typename T> T op_max(T x, T y) { return x > y ? x : y;\
    \ }\ntemplate<typename T> T op_min(T x, T y) { return x < y ? x : y; }\ntemplate<typename\
    \ T> AddNode<T> op_add(AddNode<T> x, AddNode<T> y) { return {x.value + y.value,\
    \ x.size + y.size}; }\n\ntemplate<typename T> T id_radd(){ return 0; }\nint id_rupdate(){\
    \ return INF; }\ntemplate<typename T> T id_rupdate(){ return INFL; }\n\ntemplate<typename\
    \ T> AddNode<T> mapping_add_radd(T f, AddNode<T> x){ return {x.value + f * x.size,\
    \ x.size}; }\ntemplate<typename T> AddNode<T> mapping_add_rupdate(T f, AddNode<T>\
    \ x){\n    AddNode<T> rev = AddNode<T>(x);\n    if(f != id_rupdate<T>()) rev.value\
    \ = f * rev.size;\n    return rev;\n}\ntemplate<typename T> T mapping_radd(T f,\
    \ T x){ return f+x; }\ntemplate<typename T> T mapping_rupdate(T f, T x){ return\
    \ (f == id_rupdate<T>() ? x : f); }\n\ntemplate<typename T> T composition_radd(T\
    \ f, T g){ return f+g; }\ntemplate<typename T> T composition_rupdate(T f, T g){\
    \ return (f == id_rupdate<T>() ? g : f); }\n\ntemplate<typename T> using lseg_add_radd\
    \ = atcoder::lazy_segtree<AddNode<T>, op_add<T>, e_add<T>, T, mapping_add_radd<T>,\
    \ composition_radd<T>, id_radd<T>>;\ntemplate<typename T> using lseg_min_radd\
    \ = atcoder::lazy_segtree<T, op_min<T>, e_min<T>, T, mapping_radd<T>, composition_radd<T>,\
    \ id_radd<T>>;\ntemplate<typename T> using lseg_max_radd = atcoder::lazy_segtree<T,\
    \ op_max<T>, e_max<T>, T, mapping_radd<T>, composition_radd<T>, id_radd<T>>;\n\
    template<typename T> using lseg_add_rupdate = atcoder::lazy_segtree<AddNode<T>,\
    \ op_add<T>, e_add<T>, T, mapping_add_rupdate<T>, composition_rupdate<T>, id_rupdate<T>>;\n\
    template<typename T> using lseg_min_rupdate = atcoder::lazy_segtree<T, op_min<T>,\
    \ e_min<T>, T, mapping_rupdate<T>, composition_rupdate<T>, id_rupdate<T>>;\ntemplate<typename\
    \ T> using lseg_max_rupdate = atcoder::lazy_segtree<T, op_max<T>, e_max<T>, T,\
    \ mapping_rupdate<T>, composition_rupdate<T>, id_rupdate<T>>;\n\n"
  code: "#ifndef COMPETITIVE_DATASTRUCTURE_LAZYSEGTREE_HPP\n#define COMPETITIVE_DATASTRUCTURE_LAZYSEGTREE_HPP\
    \ 1\n#include <atcoder/lazysegtree.hpp>\n#include <competitive/std/std.hpp>\n\
    template <class S, S (*op)(S, S), S (*e)(), class F, S (*mapping)(F, S), F (*composition)(F,\
    \ F), F (*id)()>\nstd::ostream& operator<<(std::ostream& os, atcoder::lazy_segtree<S,\
    \ op, e, F, mapping, composition, id> seg) {\n    int n = seg.n();\n    rep(i,\
    \ n) { os << seg.get(i); if (i != n-1) os << \" \"; }\n    return os;\n};\n\n\
    template<typename T> struct AddNode {\n    T value;\n    ll size;\n    AddNode()\
    \ : value(T(0)), size(1) {};\n    AddNode(T value, ll size) : value(value), size(size)\
    \ {};\n    friend ostream& operator<<(std::ostream& os, const AddNode<T> &n) {\
    \ os << n.value; return os; };\n};\n\nint e_max() { return -INF; }\ntemplate<typename\
    \ T> T e_max() { return -INFL; }\nint e_min() { return INF; }\ntemplate<typename\
    \ T> T e_min() { return INFL; }\ntemplate<typename T> AddNode<T> e_add() { return\
    \ {0, 1}; }\n\ntemplate<typename T> T op_max(T x, T y) { return x > y ? x : y;\
    \ }\ntemplate<typename T> T op_min(T x, T y) { return x < y ? x : y; }\ntemplate<typename\
    \ T> AddNode<T> op_add(AddNode<T> x, AddNode<T> y) { return {x.value + y.value,\
    \ x.size + y.size}; }\n\ntemplate<typename T> T id_radd(){ return 0; }\nint id_rupdate(){\
    \ return INF; }\ntemplate<typename T> T id_rupdate(){ return INFL; }\n\ntemplate<typename\
    \ T> AddNode<T> mapping_add_radd(T f, AddNode<T> x){ return {x.value + f * x.size,\
    \ x.size}; }\ntemplate<typename T> AddNode<T> mapping_add_rupdate(T f, AddNode<T>\
    \ x){\n    AddNode<T> rev = AddNode<T>(x);\n    if(f != id_rupdate<T>()) rev.value\
    \ = f * rev.size;\n    return rev;\n}\ntemplate<typename T> T mapping_radd(T f,\
    \ T x){ return f+x; }\ntemplate<typename T> T mapping_rupdate(T f, T x){ return\
    \ (f == id_rupdate<T>() ? x : f); }\n\ntemplate<typename T> T composition_radd(T\
    \ f, T g){ return f+g; }\ntemplate<typename T> T composition_rupdate(T f, T g){\
    \ return (f == id_rupdate<T>() ? g : f); }\n\ntemplate<typename T> using lseg_add_radd\
    \ = atcoder::lazy_segtree<AddNode<T>, op_add<T>, e_add<T>, T, mapping_add_radd<T>,\
    \ composition_radd<T>, id_radd<T>>;\ntemplate<typename T> using lseg_min_radd\
    \ = atcoder::lazy_segtree<T, op_min<T>, e_min<T>, T, mapping_radd<T>, composition_radd<T>,\
    \ id_radd<T>>;\ntemplate<typename T> using lseg_max_radd = atcoder::lazy_segtree<T,\
    \ op_max<T>, e_max<T>, T, mapping_radd<T>, composition_radd<T>, id_radd<T>>;\n\
    template<typename T> using lseg_add_rupdate = atcoder::lazy_segtree<AddNode<T>,\
    \ op_add<T>, e_add<T>, T, mapping_add_rupdate<T>, composition_rupdate<T>, id_rupdate<T>>;\n\
    template<typename T> using lseg_min_rupdate = atcoder::lazy_segtree<T, op_min<T>,\
    \ e_min<T>, T, mapping_rupdate<T>, composition_rupdate<T>, id_rupdate<T>>;\ntemplate<typename\
    \ T> using lseg_max_rupdate = atcoder::lazy_segtree<T, op_max<T>, e_max<T>, T,\
    \ mapping_rupdate<T>, composition_rupdate<T>, id_rupdate<T>>;\n#endif //COMPETITIVE_DATASTRUCTURE_SEGTREE_HPP"
  dependsOn:
  - atcoder/lazysegtree.hpp
  - atcoder/internal_bit.hpp
  - competitive/std/std.hpp
  isVerificationFile: false
  path: competitive/data_structure/lazysegtree.hpp
  requiredBy: []
  timestamp: '2023-02-17 21:43:12+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - online_test/AOJ/DSL_2_G.test.cpp
  - online_test/AOJ/DSL_2_F.test.cpp
  - online_test/AOJ/DSL_2_I.test.cpp
  - online_test/AOJ/DSL_2_H.test.cpp
documentation_of: competitive/data_structure/lazysegtree.hpp
layout: document
redirect_from:
- /library/competitive/data_structure/lazysegtree.hpp
- /library/competitive/data_structure/lazysegtree.hpp.html
title: competitive/data_structure/lazysegtree.hpp
---
