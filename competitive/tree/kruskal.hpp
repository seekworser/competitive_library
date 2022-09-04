#ifndef COMPETITIVE_TREE_KRUSKAL_HPP
#define COMPETITIVE_TREE_KRUSKAL_HPP 1
#include <atcoder/dsu.hpp>
#include <competitive/std/std.hpp>
#include <competitive/graph/graph.hpp>
// return minimul spanning tree
template<class Cost> Graph<Cost> kruskal(const Graph<Cost>& G){
    atcoder::dsu uf(G.n);
    priority_queue<tuple<Cost, int, int>, vector<tuple<Cost, int, int>>, greater<tuple<Cost, int, int>>> que;
    rep(i, G.n) repe(e, G[i]) { que.emplace(e.cost, i, e.to); }
    int count = 0;
    vi from,to;
    vector<Cost> cost;
    while(que.size() && count < G.n - 1 ){
        auto [c, u, v] = que.top();
        que.pop();
        if (!uf.same(u, v)) {
            uf.merge(u, v);
            from.push_back(u);
            to.push_back(v);
            cost.push_back(c);
            count++;
        }
    }
    if (count != G.n - 1) return Graph<Cost>(0);
    return Graph<Cost>(G.n, from, to, cost, true);
}
#endif // COMPETITIVE_TREE_KRUSKAL_HPP