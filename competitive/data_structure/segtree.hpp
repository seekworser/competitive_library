#pragma once
#include "atcoder/segtree.hpp"
#include "competitive/std/std.hpp"
template <typename S, S (*op)(S, S), S (*e)()> std::ostream& operator<<(std::ostream& os, const atcoder::segtree<S, op, e> seg) {
    int n = seg.n();
    rep(i, n) { os << seg.get(i); if (i != n-1) os << " "; }
    return os;
};
namespace segtree_internal {
    template<typename T> T op_max(T x, T y) { return x > y? x : y; }
    template<typename T> T op_min(T x, T y) { return x < y? x : y; }
    template<typename T> T op_add(T x, T y) { return x + y; }

    template<typename T> T e_max() { return -INFL; }
    template<> int e_max() { return -INF; }
    template<typename T> T e_min() { return INFL; }
    template<> int e_min() { return INF; }
    template<typename T> T e_add() { return 0; }
}
template<class S, S (*op)(S,S), S(*e)()> using segtree = atcoder::segtree<S, op, e>;
template<typename T> using seg_add = segtree<T, segtree_internal::op_add<T>, segtree_internal::e_add<T>>;
template<typename T> using seg_max = segtree<T, segtree_internal::op_max<T>, segtree_internal::e_max<T>>;
template<typename T> using seg_min = segtree<T, segtree_internal::op_min<T>, segtree_internal::e_min<T>>;
/**
 * @brief セグメント木（ラッパー）
 * @docs docs/data_structure/segtree.md
 */
