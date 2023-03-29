#pragma once
#include "atcoder/lazysegtree.hpp"
#include "competitive/std/std.hpp"
template <class S, S (*op)(S, S), S (*e)(), class F, S (*mapping)(F, S), F (*composition)(F, F), F (*id)()>
std::ostream& operator<<(std::ostream& os, atcoder::lazy_segtree<S, op, e, F, mapping, composition, id> seg) {
    int n = seg.n();
    rep(i, n) { os << seg.get(i); if (i != n-1) os << " "; }
    return os;
};

template<typename T> struct AddNode {
    T value;
    ll size;
    AddNode() : value(T(0)), size(1) {};
    AddNode(T value, ll size) : value(value), size(size) {};
    friend ostream& operator<<(std::ostream& os, const AddNode<T> &n) { os << n.value; return os; };
};

int e_max() { return -INF; }
template<typename T> T e_max() { return -INFL; }
int e_min() { return INF; }
template<typename T> T e_min() { return INFL; }
template<typename T> AddNode<T> e_add() { return {0, 1}; }

template<typename T> T op_max(T x, T y) { return x > y ? x : y; }
template<typename T> T op_min(T x, T y) { return x < y ? x : y; }
template<typename T> AddNode<T> op_add(AddNode<T> x, AddNode<T> y) { return {x.value + y.value, x.size + y.size}; }

template<typename T> T id_radd(){ return 0; }
int id_rupdate(){ return INF; }
template<typename T> T id_rupdate(){ return INFL; }

template<typename T> AddNode<T> mapping_add_radd(T f, AddNode<T> x){ return {x.value + f * x.size, x.size}; }
template<typename T> AddNode<T> mapping_add_rupdate(T f, AddNode<T> x){
    AddNode<T> rev = AddNode<T>(x);
    if(f != id_rupdate<T>()) rev.value = f * rev.size;
    return rev;
}
template<typename T> T mapping_radd(T f, T x){ return f+x; }
template<typename T> T mapping_rupdate(T f, T x){ return (f == id_rupdate<T>() ? x : f); }

template<typename T> T composition_radd(T f, T g){ return f+g; }
template<typename T> T composition_rupdate(T f, T g){ return (f == id_rupdate<T>() ? g : f); }

template<typename T> using lseg_add_radd = atcoder::lazy_segtree<AddNode<T>, op_add<T>, e_add<T>, T, mapping_add_radd<T>, composition_radd<T>, id_radd<T>>;
template<typename T> using lseg_min_radd = atcoder::lazy_segtree<T, op_min<T>, e_min<T>, T, mapping_radd<T>, composition_radd<T>, id_radd<T>>;
template<typename T> using lseg_max_radd = atcoder::lazy_segtree<T, op_max<T>, e_max<T>, T, mapping_radd<T>, composition_radd<T>, id_radd<T>>;
template<typename T> using lseg_add_rupdate = atcoder::lazy_segtree<AddNode<T>, op_add<T>, e_add<T>, T, mapping_add_rupdate<T>, composition_rupdate<T>, id_rupdate<T>>;
template<typename T> using lseg_min_rupdate = atcoder::lazy_segtree<T, op_min<T>, e_min<T>, T, mapping_rupdate<T>, composition_rupdate<T>, id_rupdate<T>>;
template<typename T> using lseg_max_rupdate = atcoder::lazy_segtree<T, op_max<T>, e_max<T>, T, mapping_rupdate<T>, composition_rupdate<T>, id_rupdate<T>>;
/**
 * @brief 遅延セグメント木（ラッパー）
 * @docs docs/data_structure/lazysegtree.md
 */
