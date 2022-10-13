#include <competitive/std/std.hpp>
#include <competitive/graph/graph.hpp>
template<class Cost> void dijkstra(const Graph<Cost>& G, ll start, vector<Cost> &min_cost, vector<ll> &prev, Cost inf=INF, Cost identity=0){
    priority_queue<pair<Cost, ll>, vector<pair<Cost, ll>>, greater<pair<Cost, ll>>> que;
    min_cost = vector<Cost>(G.n, inf);
    min_cost[start] = identity;
    prev = vector<ll>(G.n);
    que.push({identity, start});
    while(que.size()){
        Cost d = que.top().first;
        ll u = que.top().second;
        que.pop();
        for(auto e : G.adjacent_set[u]){
            ll v = e.to;
            Cost cost_to = d + e.cost;
            if(min_cost[v] > cost_to) {
                min_cost[v] = cost_to;
                que.push({cost_to, v});
                prev[v] = u;
            }
        }
    }
    return;
}