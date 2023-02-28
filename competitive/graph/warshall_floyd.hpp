#pragma once
#include "competitive/std/std.hpp"
#include "competitive/graph/graph.hpp"
template "class Cost" bool warshall_floyd(
    Graph<Cost> &G,
    vector<vector<Cost>> &min_cost,
    Cost inf=INF,
    Cost identity=0
) {
    min_cost = vector<vector<Cost>>(G.n, vector<Cost>(G.n, inf));
    rep(i, G.n) repe(e, G[i]) {
        min_cost[i][e.to] = e.cost;
    }
    rep(i, G.n) chmin(min_cost[i][i], identity);
    rep(k, G.n) {
        rep(i, G.n) {
            rep(j, G.n) {
                if (min_cost[i][k] == inf || min_cost[k][j] == inf) continue;
                if (min_cost[i][j] == inf) {
                    min_cost[i][j] = min_cost[i][k] + min_cost[k][j];
                } else {
                    chmin(min_cost[i][j], min_cost[i][k] + min_cost[k][j]);
                }
            }
        }
    }
    rep(i, G.n) {
        if (min_cost[i][i] < identity) return false;
    }
    return true;
}
/**
 * @brief warshall_floyd.hpp
 * @docs docs/graph/warshall_floyd.md
 */
