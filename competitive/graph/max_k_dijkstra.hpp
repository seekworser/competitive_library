#include <competitive/std/std.hpp>
#include <competitive/graph/graph.hpp>
template<class Cost> void max_k_dijkstra(const Graph<Cost>& G, int start, int k, vector<Cost> &min_cost, vector<int> &prev, Cost inf=INF, Cost identity=0){
    vvi que(k+1, vi(0));
    min_cost = vector<Cost>(G.n, inf);
    min_cost[start] = identity;
    prev = vector<int>(G.n);
    que[0].push_back(start);
    int current = 0;
    while(true) {
        bool all_empty = true;
        for (int i=0; i<k+1; i++) {
            if (!que[i].empty()) {
                all_empty = false;
                break;
            }
        }
        if (all_empty) break;
        while (que[current].size()) {
            int u = que[current].back();
            Cost d = min_cost[u];
            que[current].pop_back();
            for(auto e : G[u]){
                int v = e.to;
                Cost cost_to = d + e.cost;
                if(min_cost[v] > cost_to) {
                    min_cost[v] = cost_to;
                    que[cost_to % (k+1)].push_back(v);
                    prev[v] = u;
                }
            }
        }
        current += 1;
        current %= k+1;
    }
    return;
}