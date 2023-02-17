---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: atcoder/dsu.hpp
    title: atcoder/dsu.hpp
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
  bundledCode: "#line 1 \"competitive/tree/kruskal.hpp\"\n\n\n#include <atcoder/dsu.hpp>\n\
    #include <competitive/std/std.hpp>\n#include <competitive/graph/graph.hpp>\n//\
    \ return minimul spanning tree\ntemplate<class Cost> Graph<Cost> kruskal(const\
    \ Graph<Cost>& G){\n    atcoder::dsu uf(G.n);\n    priority_queue<tuple<Cost,\
    \ int, int>, vector<tuple<Cost, int, int>>, greater<tuple<Cost, int, int>>> que;\n\
    \    rep(i, G.n) repe(e, G[i]) { que.emplace(e.cost, i, e.to); }\n    int count\
    \ = 0;\n    vi from,to;\n    vector<Cost> cost;\n    while(que.size() && count\
    \ < G.n - 1 ){\n        auto [c, u, v] = que.top();\n        que.pop();\n    \
    \    if (!uf.same(u, v)) {\n            uf.merge(u, v);\n            from.push_back(u);\n\
    \            to.push_back(v);\n            cost.push_back(c);\n            count++;\n\
    \        }\n    }\n    if (count != G.n - 1) return Graph<Cost>(0);\n    return\
    \ Graph<Cost>(G.n, from, to, cost, true);\n}\n\n"
  code: "#ifndef COMPETITIVE_TREE_KRUSKAL_HPP\n#define COMPETITIVE_TREE_KRUSKAL_HPP\
    \ 1\n#include <atcoder/dsu.hpp>\n#include <competitive/std/std.hpp>\n#include\
    \ <competitive/graph/graph.hpp>\n// return minimul spanning tree\ntemplate<class\
    \ Cost> Graph<Cost> kruskal(const Graph<Cost>& G){\n    atcoder::dsu uf(G.n);\n\
    \    priority_queue<tuple<Cost, int, int>, vector<tuple<Cost, int, int>>, greater<tuple<Cost,\
    \ int, int>>> que;\n    rep(i, G.n) repe(e, G[i]) { que.emplace(e.cost, i, e.to);\
    \ }\n    int count = 0;\n    vi from,to;\n    vector<Cost> cost;\n    while(que.size()\
    \ && count < G.n - 1 ){\n        auto [c, u, v] = que.top();\n        que.pop();\n\
    \        if (!uf.same(u, v)) {\n            uf.merge(u, v);\n            from.push_back(u);\n\
    \            to.push_back(v);\n            cost.push_back(c);\n            count++;\n\
    \        }\n    }\n    if (count != G.n - 1) return Graph<Cost>(0);\n    return\
    \ Graph<Cost>(G.n, from, to, cost, true);\n}\n#endif // COMPETITIVE_TREE_KRUSKAL_HPP"
  dependsOn:
  - atcoder/dsu.hpp
  - competitive/std/std.hpp
  - competitive/graph/graph.hpp
  isVerificationFile: false
  path: competitive/tree/kruskal.hpp
  requiredBy: []
  timestamp: '2023-02-16 22:26:28+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: competitive/tree/kruskal.hpp
layout: document
redirect_from:
- /library/competitive/tree/kruskal.hpp
- /library/competitive/tree/kruskal.hpp.html
title: competitive/tree/kruskal.hpp
---
