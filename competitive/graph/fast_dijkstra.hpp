#ifndef COMPETITIVE_GRAPH_DIJKSTRA_HPP
#define COMPETITIVE_GRAPH_DIJKSTRA_HPP 1
#include <competitive/std/std.hpp>
#include <competitive/graph/graph.hpp>
#include <competitive/data_structure/radix_heap.hpp>
template<class Cost> void dijkstra(const Graph<Cost>& G, int start, vector<Cost> &min_cost, vector<int> &prev, Cost inf=INF, Cost identity=0){
    // priority_queue<pair<Cost, int>, vector<pair<Cost, int>>, greater<pair<Cost, int>>> que;
    RadixHeap<Cost, int> que;
    min_cost = vector<Cost>(G.n, inf);
    min_cost[start] = identity;
    prev = vector<int>(G.n);
    que.push(identity, start);
    while(!que.empty()){
        auto [d, u] = que.pop();
        if (min_cost[u] < (Cost)d) continue;
        for(auto e : G[u]){
            int v = e.to;
            Cost cost_to = d + e.cost;
            if(min_cost[v] > cost_to) {
                min_cost[v] = cost_to;
                que.push(cost_to, v);
                prev[v] = u;
            }
        }
    }
    return;
}
#endif // COMPETITIVE_GRAPH_DIJKSTRA_HPP