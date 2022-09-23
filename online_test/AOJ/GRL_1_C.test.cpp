#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_C"
#include <competitive/std/std.hpp>
#include <competitive/graph/warshall_floyd.hpp>

int main() {
    int V, E;
    cin >> V >> E;
    vi from(E), to(E);
    vl cost(E);
    rep(i, E) {
        cin >> from[i] >> to[i] >> cost[i];
    }
    Graph g(V, from, to, cost);
    vvl min_cost;
    bool valid = warshall_floyd(g, min_cost, INFL);
    if (!valid) {
        cout << "NEGATIVE CYCLE" << endl;
        return 0;
    }
    rep(i, V) rep(j, V) {
        if (min_cost[i][j] != INFL) cout << min_cost[i][j];
        else cout << "INF";
        if (j == V - 1) cout << "\n";
        else cout << " ";
    }
}