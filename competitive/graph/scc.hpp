#pragma once
#include "competitive/std/std.hpp"
#include "competitive/graph/graph.hpp"
template<typename Cost> vvi scc_decompose(Graph<Cost> g) {
    vvi rev;
    Graph<Cost> gi = g.reversed_edges();
    int n = g.n;
    vi path;
    vb seen(n, false);
    auto dfs = [&] (auto self, int x) -> void {
        if (seen[x]) return;
        seen[x] = true;
        repe(e, g[x]) self(self, e.to);
        path.push_back(x);
    };
    rep(i, n) if(!seen[i]) dfs(dfs, i);
    seen = vb(n, false);
    ll cnt = 0;
    auto dfs2 = [&] (auto self, int x) -> void {
        if (seen[x]) return;
        seen[x] = true;
        rev[cnt].push_back(x);
        repe(e, gi[x]) self(self, e.to);
    };
    reverse(all(path));
    repe(e, path) if (!seen[e]) {
        rev.push_back(vi());
        dfs2(dfs2, e);
        cnt++;
    }
    return rev;
};
/**
 * @brief 強連結成分分解（SCC）
 * @docs docs/graph/scc.md
 */
