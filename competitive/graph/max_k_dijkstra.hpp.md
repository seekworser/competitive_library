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
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"competitive/graph/max_k_dijkstra.hpp\"\n\n\n#include <competitive/std/std.hpp>\n\
    #include <competitive/graph/graph.hpp>\ntemplate<class Cost> void max_k_dijkstra(const\
    \ Graph<Cost>& G, int start, int k, vector<Cost> &min_cost, vector<int> &prev,\
    \ Cost inf=INF, Cost identity=0){\n    vvi que(k+1, vi(0));\n    min_cost = vector<Cost>(G.n,\
    \ inf);\n    min_cost[start] = identity;\n    prev = vector<int>(G.n);\n    que[0].push_back(start);\n\
    \    int current = 0;\n    while(true) {\n        bool all_empty = true;\n   \
    \     for (int i=0; i<k+1; i++) {\n            if (!que[i].empty()) {\n      \
    \          all_empty = false;\n                break;\n            }\n       \
    \ }\n        if (all_empty) break;\n        while (que[current].size()) {\n  \
    \          int u = que[current].back();\n            Cost d = min_cost[u];\n \
    \           que[current].pop_back();\n            for(auto e : G[u]){\n      \
    \          int v = e.to;\n                Cost cost_to = d + e.cost;\n       \
    \         if(min_cost[v] > cost_to) {\n                    min_cost[v] = cost_to;\n\
    \                    que[cost_to % (k+1)].push_back(v);\n                    prev[v]\
    \ = u;\n                }\n            }\n        }\n        current += 1;\n \
    \       current %= k+1;\n    }\n    return;\n}\n\n"
  code: "#ifndef COMPETITIVE_GRAPH_MAXKDIJKSTRA_HPP\n#define COMPETITIVE_GRAPH_MAXKDIJKSTRA_HPP\
    \ 1\n#include <competitive/std/std.hpp>\n#include <competitive/graph/graph.hpp>\n\
    template<class Cost> void max_k_dijkstra(const Graph<Cost>& G, int start, int\
    \ k, vector<Cost> &min_cost, vector<int> &prev, Cost inf=INF, Cost identity=0){\n\
    \    vvi que(k+1, vi(0));\n    min_cost = vector<Cost>(G.n, inf);\n    min_cost[start]\
    \ = identity;\n    prev = vector<int>(G.n);\n    que[0].push_back(start);\n  \
    \  int current = 0;\n    while(true) {\n        bool all_empty = true;\n     \
    \   for (int i=0; i<k+1; i++) {\n            if (!que[i].empty()) {\n        \
    \        all_empty = false;\n                break;\n            }\n        }\n\
    \        if (all_empty) break;\n        while (que[current].size()) {\n      \
    \      int u = que[current].back();\n            Cost d = min_cost[u];\n     \
    \       que[current].pop_back();\n            for(auto e : G[u]){\n          \
    \      int v = e.to;\n                Cost cost_to = d + e.cost;\n           \
    \     if(min_cost[v] > cost_to) {\n                    min_cost[v] = cost_to;\n\
    \                    que[cost_to % (k+1)].push_back(v);\n                    prev[v]\
    \ = u;\n                }\n            }\n        }\n        current += 1;\n \
    \       current %= k+1;\n    }\n    return;\n}\n#endif // COMPETITIVE_GRAPH_MAXKDIJKSTRA_HPP"
  dependsOn:
  - competitive/std/std.hpp
  - competitive/graph/graph.hpp
  isVerificationFile: false
  path: competitive/graph/max_k_dijkstra.hpp
  requiredBy: []
  timestamp: '2023-02-14 09:29:01+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: competitive/graph/max_k_dijkstra.hpp
layout: document
redirect_from:
- /library/competitive/graph/max_k_dijkstra.hpp
- /library/competitive/graph/max_k_dijkstra.hpp.html
title: competitive/graph/max_k_dijkstra.hpp
---
