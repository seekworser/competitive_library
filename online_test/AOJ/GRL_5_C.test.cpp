#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/5/GRL_5_C"
#include "competitive/std/std.hpp"
#include "competitive/tree/heavy_light_decomposition.hpp"
#include "competitive/std/io.hpp"
int main() {
    ll n;
    input(n);
    vi from, to; vi cost(n-1, 1);
    rep(i, n) {
        ll k;
        input(k);
        rep(k) {
            ll v;
            input(v);
            from.push_back(i);
            to.push_back(v);
        }
    }
    Graph g(n, from, to, cost, true);
    seg_add<ll> seg(vl(n, 0));
    HeavyLightDecomposition hld(g, seg);
    ll q;
    input(q);
    rep(q) {
        ll u,v;
        input(u,v);
        print(hld.lca(u,v));
    }
}
