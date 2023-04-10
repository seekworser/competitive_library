#pragma once
#include "atcoder/segtree.hpp"
#include "competitive/std/std.hpp"
template <class S, S (*op)(S, S), S (*e)()> std::ostream& operator<<(std::ostream& os, const atcoder::segtree<S, op, e> seg) {
    int n = seg.n();
    rep(i, n) { os << seg.get(i); if (i != n-1) os << " "; }
    return os;
};
namespace segtree {
    template<typename T> T op_max(T x, T y) { return x > y? x : y; }
    template<typename T> T op_min(T x, T y) { return x < y? x : y; }
    template<typename T> T op_add(T x, T y) { return x + y; }

    int e_max() { return -INF; }
    template<typename T> T e_max() { return -INFL; }
    int e_min() { return INF; }
    template<typename T> T e_min() { return INFL; }
    template<typename T> T e_add() { return 0; }
}
template<typename T> using seg_add = atcoder::segtree<T, segtree::op_add, segtree::e_add>;
template<typename T> using seg_max = atcoder::segtree<T, segtree::op_max, segtree::e_max>;
template<typename T> using seg_min = atcoder::segtree<T, segtree::op_min, segtree::e_min>;
/**
 * @brief セグメント木（ラッパー）
 * @docs docs/data_structure/segtree.md
 */
