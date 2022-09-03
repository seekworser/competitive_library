#include <competitive/std/std.hpp>
#include <competitive/graph/graph.hpp>
template<class Cost> void dijkstra(const Graph<Cost>& G, int start, vector<Cost> &min_cost, vector<int> &prev, Cost inf=INF, Cost identity=0){
    priority_queue<pair<Cost, int>, vector<pair<Cost, int>>, greater<pair<Cost, int>>> que;
    min_cost = vector<Cost>(G.n, inf);
    min_cost[start] = identity;
    prev = vector<int>(G.n);
    que.emplace(identity, start);
    while(que.size()){
        Cost d = que.top().first;
        int u = que.top().second;
        que.pop();
        for(auto e : G[u]){
            int v = e.to;
            Cost cost_to = d + e.cost;
            if(min_cost[v] > cost_to) {
                min_cost[v] = cost_to;
                que.emplace(cost_to, v);
                prev[v] = u;
            }
        }
    }
    return;
}