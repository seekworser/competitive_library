#define PROBLEM "https://yukicoder.me/problems/no/399"
#include "competitive/std/std.hpp"
#include "competitive/tree/heavy_light_decomposition.hpp"
#include "competitive/std/io.hpp"
int main() {
    ll n;
    input(n);
    vi from(n-1), to(n-1), cost(n-1, 0);
    rep(i, n-1) input(from[i], to[i]);
    --from; --to;
    Graph g(n, from, to, cost, true);
    lseg_add_radd<ll> seg(n);
    HeavyLightDecomposition hld(g, seg, false);
    ll q;
    input(q);
    ll ans = 0;
    rep(q) {
        ll u,v;
        input(u,v);
        --u; --v;
        hld.apply(u,v,1);
        ans += hld.prod(u,v).value;
    }
    print(ans);
}
