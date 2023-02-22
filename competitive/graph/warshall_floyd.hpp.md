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
    path: online_test/AOJ/GRL_1_C.test.cpp
    title: online_test/AOJ/GRL_1_C.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"competitive/graph/warshall_floyd.hpp\"\n\n\n#include <competitive/std/std.hpp>\n\
    #include <competitive/graph/graph.hpp>\ntemplate <class Cost> bool warshall_floyd(\n\
    \    Graph<Cost> &G,\n    vector<vector<Cost>> &min_cost,\n    Cost inf=INF,\n\
    \    Cost identity=0\n) {\n    min_cost = vector<vector<Cost>>(G.n, vector<Cost>(G.n,\
    \ inf));\n    rep(i, G.n) repe(e, G[i]) {\n        min_cost[i][e.to] = e.cost;\n\
    \    }\n    rep(i, G.n) chmin(min_cost[i][i], identity);\n    rep(k, G.n) {\n\
    \        rep(i, G.n) {\n            rep(j, G.n) {\n                if (min_cost[i][k]\
    \ == inf || min_cost[k][j] == inf) continue;\n                if (min_cost[i][j]\
    \ == inf) {\n                    min_cost[i][j] = min_cost[i][k] + min_cost[k][j];\n\
    \                } else {\n                    chmin(min_cost[i][j], min_cost[i][k]\
    \ + min_cost[k][j]);\n                }\n            }\n        }\n    }\n   \
    \ rep(i, G.n) {\n        if (min_cost[i][i] < identity) return false;\n    }\n\
    \    return true;\n}\n\n"
  code: "#ifndef COMPETITIVE_GRAPH_WARSHALLFLOYD_HPP\n#define COMPETITIVE_GRAPH_WARSHALLFLOYD_HPP\
    \ 1\n#include <competitive/std/std.hpp>\n#include <competitive/graph/graph.hpp>\n\
    template <class Cost> bool warshall_floyd(\n    Graph<Cost> &G,\n    vector<vector<Cost>>\
    \ &min_cost,\n    Cost inf=INF,\n    Cost identity=0\n) {\n    min_cost = vector<vector<Cost>>(G.n,\
    \ vector<Cost>(G.n, inf));\n    rep(i, G.n) repe(e, G[i]) {\n        min_cost[i][e.to]\
    \ = e.cost;\n    }\n    rep(i, G.n) chmin(min_cost[i][i], identity);\n    rep(k,\
    \ G.n) {\n        rep(i, G.n) {\n            rep(j, G.n) {\n                if\
    \ (min_cost[i][k] == inf || min_cost[k][j] == inf) continue;\n               \
    \ if (min_cost[i][j] == inf) {\n                    min_cost[i][j] = min_cost[i][k]\
    \ + min_cost[k][j];\n                } else {\n                    chmin(min_cost[i][j],\
    \ min_cost[i][k] + min_cost[k][j]);\n                }\n            }\n      \
    \  }\n    }\n    rep(i, G.n) {\n        if (min_cost[i][i] < identity) return\
    \ false;\n    }\n    return true;\n}\n#endif // COMPETITIVE_GRAPH_WARSHALLFLOYD_HPP"
  dependsOn:
  - competitive/std/std.hpp
  - competitive/graph/graph.hpp
  isVerificationFile: false
  path: competitive/graph/warshall_floyd.hpp
  requiredBy: []
  timestamp: '2023-02-22 09:47:28+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - online_test/AOJ/GRL_1_C.test.cpp
documentation_of: competitive/graph/warshall_floyd.hpp
layout: document
redirect_from:
- /library/competitive/graph/warshall_floyd.hpp
- /library/competitive/graph/warshall_floyd.hpp.html
title: competitive/graph/warshall_floyd.hpp
---
