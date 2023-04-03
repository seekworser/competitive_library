#pragma once
#include "competitive/std/std.hpp"
#include "competitive/random/random_base.hpp"
#include "atcoder/dsu.hpp"
vector<pii> random_tree(int n) {
    auto rev = vector<pii>(n-1);
    int cnt = 0;
    atcoder::dsu uf(n+1);
    while (cnt < n-1) {
        int u = randint(1, n);
        int v = randint(1, n);
        if (!uf.same(u, v)) {
            if (u > v) swap(u, v);
            rev[cnt++] = {u, v};
            uf.merge(u, v);
        }
    }
    return rev;
}
// return tree by parent form: [p2, p3, ..., pn]
vi random_treep(int n) {
    vi rev(n-1);
    rep(i, n-1) {
        rev[i] = randint(1, i+1);
    }
    return rev;
}
/**
 * @brief tree
 * @docs docs/random/tree.md
 */
