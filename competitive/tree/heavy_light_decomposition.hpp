#pragma once
#include "competitive/std/std.hpp"
#include "competitive/graph/graph.hpp"
#include "competitive/data_structure/segtree.hpp"
#include "competitive/data_structure/lazysegtree.hpp"
template <typename Cost, typename Seg> struct HeavyLightDecomposition {
    vi heavy_edge,in,out,head,par,pos;
    Seg &seg;
    bool edge;
    HeavyLightDecomposition(Graph<Cost>& g, Seg& seg, bool edge = true) :
        heavy_edge(g.n), in(g.n), out(g.n), head(g.n), par(g.n), pos(g.n), seg(seg), edge(edge) {
        build(g);
    }

    void build(Graph<Cost>& g) {
        vi subtree_size(g.n, 0);
        auto dfs_sz = [&] (auto self, int x, int p) -> int {
            par[x] = p;
            subtree_size[x] = 1;
            repe(e, g[x]) {
                if (e.to == p) continue;
                subtree_size[x] += self(self, e.to, x);
            }
            int maxs = -INF;
            heavy_edge[x] = -1;
            repe(e, g[x]) {
                if (e.to == p) continue;
                if (chmax(maxs, subtree_size[e.to])) heavy_edge[x] = e.to;
            }
            return subtree_size[x];
        };
        dfs_sz(dfs_sz, 0, -1);
        int t = 0;
        auto dfs_hld = [&] (auto self, int x, int par) -> void {
            in[x] = t++;
            pos[in[x]] = x;
            if (heavy_edge[x] != -1) {
                head[heavy_edge[x]] = head[x];
                self(self, heavy_edge[x], x);
            }
            repe(e, g[x]) {
                if (e.to == par || e.to == heavy_edge[x]) continue;
                head[e.to] = e.to;
                self(self, e.to, x);
            }
            out[x] = t;
        };
        dfs_hld(dfs_hld, 0, -1);
    }

    int lca(int u, int v) {
        while (head[u] != head[v]) {
            if (in[u] > in[v]) swap(u, v);
            v = par[head[v]];
        }
        return in[u] < in[v] ? u : v;
    }

    int la(int u, int k) {
        while (true) {
            if (u == -1) return -1;
            if (u == 0 && k > 0) return -1;
            int v = head[u];
            if (in[u] - k >= in[v]) return pos[in[u] - k];
            k -= in[u] - in[v] + 1;
            u = par[head[u]];
        }
    }

    decltype(seg.e()) prod(int u, int v) {
        using T = decltype(seg.e());
        T l = seg.e();
        T r = seg.e();
        while (head[u] != head[v]) {
            if (in[u] > in[v]) swap(u, v), swap(l, r);
            l = seg.op(seg.prod(in[head[v]], in[v] + 1), l);
            v = par[head[v]];
        }
        if (in[u] > in[v]) swap(u, v), swap(l, r);
        // パスクエリの場合はu（uからuの親へのパス）は足さない
        return seg.op(seg.op(seg.prod(in[u] + edge, in[v] + 1), l) , r);
    }

    void apply(int u, int v, decltype(seg.id()) f) {
        while (head[u] != head[v]) {
            if (in[u] > in[v]) swap(u, v);
            seg.apply(in[head[v]], in[v] + 1, f);
            v = par[head[v]];
        }
        if (in[u] > in[v]) swap(u, v);
        seg.apply(in[u] + edge, in[v] + 1, f);
    }

    int edge_pos(int u, int v) {
        if (par[u] != v) swap(u, v);
        assert(par[u] == v);
        return in[u];
    }
};
/**
 * @brief HL分解 (Heavy Light Decomposition)
 * @docs docs/tree/heavy_light_decomposition.md
 */
