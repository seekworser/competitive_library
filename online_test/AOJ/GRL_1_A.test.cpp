#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A"
#include "competitive/std/std.hpp"
#include "competitive/graph/dijkstra.hpp"
#include "competitive/std/io.hpp"

int main() {
    int n,m,r;
    cin >> n >> m >> r;
    vi from(m), to(m); vl cost(m);
    rep(i, m) cin >> from[i] >> to[i] >> cost[i];
    Graph g(n, from, to, cost);
    vi prev; vl ans;
    dijkstra(g, r, ans, prev, INFL);
    rep(i, n) {
        if (ans[i] == INFL) cout << "INF\n";
        else cout << ans[i] << "\n";
    }
}
