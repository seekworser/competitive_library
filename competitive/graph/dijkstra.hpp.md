---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: competitive/graph/graph.hpp
    title: competitive/graph/graph.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/std/std.hpp
    title: competitive/std/std.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/GRL_1_A.test.cpp
    title: online_test/AOJ/GRL_1_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/library-checker/shortest_path_dijkstra.test.cpp
    title: online_test/library-checker/shortest_path_dijkstra.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"competitive/graph/dijkstra.hpp\"\n\n\n#include <competitive/std/std.hpp>\n\
    #include <competitive/graph/graph.hpp>\ntemplate<class Cost> void dijkstra(const\
    \ Graph<Cost>& G, int start, vector<Cost> &min_cost, vector<int> &prev, Cost inf=INF,\
    \ Cost identity=0){\n    priority_queue<pair<Cost, int>, vector<pair<Cost, int>>,\
    \ greater<pair<Cost, int>>> que;\n    min_cost = vector<Cost>(G.n, inf);\n   \
    \ min_cost[start] = identity;\n    prev = vector<int>(G.n);\n    que.emplace(identity,\
    \ start);\n    while(que.size()){\n        Cost d = que.top().first;\n       \
    \ int u = que.top().second;\n        que.pop();\n        if (min_cost[u] < d)\
    \ continue;\n        for(auto e : G[u]){\n            int v = e.to;\n        \
    \    Cost cost_to = d + e.cost;\n            if(min_cost[v] > cost_to) {\n   \
    \             min_cost[v] = cost_to;\n                que.emplace(cost_to, v);\n\
    \                prev[v] = u;\n            }\n        }\n    }\n    return;\n\
    }\n\n"
  code: "#ifndef COMPETITIVE_GRAPH_DIJKSTRA_HPP\n#define COMPETITIVE_GRAPH_DIJKSTRA_HPP\
    \ 1\n#include <competitive/std/std.hpp>\n#include <competitive/graph/graph.hpp>\n\
    template<class Cost> void dijkstra(const Graph<Cost>& G, int start, vector<Cost>\
    \ &min_cost, vector<int> &prev, Cost inf=INF, Cost identity=0){\n    priority_queue<pair<Cost,\
    \ int>, vector<pair<Cost, int>>, greater<pair<Cost, int>>> que;\n    min_cost\
    \ = vector<Cost>(G.n, inf);\n    min_cost[start] = identity;\n    prev = vector<int>(G.n);\n\
    \    que.emplace(identity, start);\n    while(que.size()){\n        Cost d = que.top().first;\n\
    \        int u = que.top().second;\n        que.pop();\n        if (min_cost[u]\
    \ < d) continue;\n        for(auto e : G[u]){\n            int v = e.to;\n   \
    \         Cost cost_to = d + e.cost;\n            if(min_cost[v] > cost_to) {\n\
    \                min_cost[v] = cost_to;\n                que.emplace(cost_to,\
    \ v);\n                prev[v] = u;\n            }\n        }\n    }\n    return;\n\
    }\n#endif // COMPETITIVE_GRAPH_DIJKSTRA_HPP"
  dependsOn:
  - competitive/std/std.hpp
  - competitive/graph/graph.hpp
  isVerificationFile: false
  path: competitive/graph/dijkstra.hpp
  requiredBy: []
  timestamp: '2023-02-22 09:47:28+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - online_test/library-checker/shortest_path_dijkstra.test.cpp
  - online_test/AOJ/GRL_1_A.test.cpp
documentation_of: competitive/graph/dijkstra.hpp
layout: document
redirect_from:
- /library/competitive/graph/dijkstra.hpp
- /library/competitive/graph/dijkstra.hpp.html
title: competitive/graph/dijkstra.hpp
---
