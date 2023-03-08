#pragma once
#include "atcoder/dsu.hpp"
#include "competitive/std/std.hpp"
ostream& operator<<(ostream& os, atcoder::dsu& uf) {
    repe(g, uf.groups()) rep(i, sz(g)) {
        cout << g[i];
        if (i != sz(g) - 1) cout << " ";
        else cout << "\n";
    }
    return os;
}
using UnionFind = atcoder::dsu;
/**
 * @brief segtree.hpp
 * @docs docs/data_structure/segtree.md
 */