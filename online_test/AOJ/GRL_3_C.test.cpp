#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/3/GRL_3_C"
#include "competitive/std/std.hpp"
#include "competitive/graph/scc.hpp"
#include "competitive/std/io.hpp"
int main() {
    ll v,e;
    input(v,e);
    vi from(e), to(e), cost(e, 1);
    rep(i, e) input(from[i], to[i]);
    Graph g(v, from, to, cost);
    auto scc = scc_decompose(g);
    vl groups(v);
    rep(i, sz(scc)) repe(j, scc[i]) groups[j] = i;
    ll q;
    input(q);
    rep(q) {
        ll u,v;
        input(u, v);
        print(groups[u] == groups[v]);
    }
}
