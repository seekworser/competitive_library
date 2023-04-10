#define PROBLEM "https://judge.yosupo.jp/problem/lca"
#include "competitive/std/std.hpp"
#include "competitive/tree/heavy_light_decomposition.hpp"
#include "competitive/std/io.hpp"
int main() {
    ll n,q;
    input(n,q);
    vi from, to, cost(n-1, 1);
    rep(i, n-1) {
        ll p;
        input(p);
        from.push_back(p);
        to.push_back(i+1);
    }
    Graph g(n, from, to, cost, true);
    seg_add<ll> seg(vl(n, 0));
    HeavyLightDecomposition hld(g, seg);
    rep(q) {
        ll u,v;
        input(u,v);
        print(hld.lca(u,v));
    }
}