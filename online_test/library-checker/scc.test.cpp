#define PROBLEM "https://judge.yosupo.jp/problem/scc"
#include "competitive/std/std.hpp"
#include "competitive/graph/scc.hpp"
#include "competitive/std/io.hpp"
int main() {
    ll n,m;
    input(n, m);
    vi from(m), to(m), cost(m, 1);
    rep(i, m) input(from[i], to[i]);
    Graph g(n, from, to, cost);
    auto scc = scc_decompose(g);
    print(sz(scc));
    repe(e, scc) {
        print_sep_end("", " ", sz(e));
        print(e);
    }
}
