#ifndef COMPETITIVE_DATASTRUCTURE_SEGTREE_HPP
#define COMPETITIVE_DATASTRUCTURE_SEGTREE_HPP 1
#include <atcoder/segtree.hpp>
#include <competitive/std/std.hpp>
template <class S, S (*op)(S, S), S (*e)()> std::ostream& operator<<(std::ostream& os, atcoder::segtree<S, op, e> seg) {
    int n = seg.n();
    rep(i, n) { os << seg.get(i); if (i != n-1) os << " "; }
    return os;
};
#endif //COMPETITIVE_DATASTRUCTURE_SEGTREE_HPP