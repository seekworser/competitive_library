#define PROBLEM "https://judge.yosupo.jp/problem/shortest_path"
#include "competitive/std/std.hpp"
#include "competitive/graph/fast_dijkstra.hpp"
#include "competitive/std/io.hpp"
int main() {
    int n,m,s,t;
    cin >> n >> m >> s >> t;
    vi from(m), to(m); vl cost(m);
    rep(i, m) cin >> from[i] >> to[i] >> cost[i];
    Graph g(n, from, to, cost);
    vl min_cost; vi prev;
    dijkstra(g, s, min_cost, prev, INFL);
    if (min_cost[t] == INFL) {
        cout << -1 << endl;
        return 0;
    }
    vi path;
    int pos = t;
    while (pos != s) {
        path.push_back(pos);
        pos = prev[pos];
    }
    path.push_back(s);
    reverse(all(path));
    cout << min_cost[t] << " " << sz(path)-1 << endl;
    rep(i, sz(path)-1) {
        cout << path[i] << " " << path[i+1] << endl;
    }
}