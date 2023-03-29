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
 * @brief Union Find
 * @docs docs/data_structure/union_find.md
 */