#ifndef COMPETITIVE_DATASTRUCTURE_SEGTREE_HPP
#define COMPETITIVE_DATASTRUCTURE_SEGTREE_HPP 1
#include <atcoder/segtree.hpp>
#include <competitive/std/std.hpp>
template <class S, S (*op)(S, S), S (*e)()> std::ostream& operator<<(std::ostream& os, atcoder::segtree<S, op, e> seg) {
    int n = seg.n();
    rep(i, n) { os << seg.get(i); if (i != n-1) os << " "; }
    return os;
};
template<typename T> T op_max(T x, T y) { return x > y? x : y; }
int e_max() { return -INF; }
template<typename T> T e_max() { return -INFL; }
template<typename T> T op_min(T x, T y) { return x < y? x : y; }
int e_min() { return INF; }
template<typename T> T e_min() { return INFL; }
template<typename T> T op_add(T x, T y) { return x + y; }
template<typename T> T e_add() { return 0; }
template<typename T> using segtree_add = atcoder::segtree<T, op_add<T>, e_add<T>>;
template<typename T> using segtree_max = atcoder::segtree<T, op_max<T>, e_max<T>>;
template<typename T> using segtree_min = atcoder::segtree<T, op_min<T>, e_min<T>>;
#endif //COMPETITIVE_DATASTRUCTURE_SEGTREE_HPP