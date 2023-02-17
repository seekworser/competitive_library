---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: competitive/std/std.hpp
    title: competitive/std/std.hpp
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: competitive/graph/dijkstra.hpp
    title: competitive/graph/dijkstra.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/graph/fast_dijkstra.hpp
    title: competitive/graph/fast_dijkstra.hpp
  - icon: ':warning:'
    path: competitive/graph/max_k_dijkstra.hpp
    title: competitive/graph/max_k_dijkstra.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/graph/warshall_floyd.hpp
    title: competitive/graph/warshall_floyd.hpp
  - icon: ':warning:'
    path: competitive/tree/depth.hpp
    title: competitive/tree/depth.hpp
  - icon: ':warning:'
    path: competitive/tree/diameter.hpp
    title: competitive/tree/diameter.hpp
  - icon: ':warning:'
    path: competitive/tree/kruskal.hpp
    title: competitive/tree/kruskal.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/GRL_1_A.test.cpp
    title: online_test/AOJ/GRL_1_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/GRL_1_C.test.cpp
    title: online_test/AOJ/GRL_1_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/library-checker/shortest_path_dijkstra.test.cpp
    title: online_test/library-checker/shortest_path_dijkstra.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/library-checker/shortest_path_fast_dijkstra.test.cpp
    title: online_test/library-checker/shortest_path_fast_dijkstra.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"competitive/graph/graph.hpp\"\n\n\n#include <competitive/std/std.hpp>\n\
    template <class Cost> struct Graph{\npublic:\n    struct Edge {\n        int to;\n\
    \        Cost cost;\n        Edge() {};\n        Edge(int _to, Cost _cost) : to(_to),\
    \ cost(_cost) {};\n    };\n    struct AdjacencyListRange{\n        using iterator\
    \ = typename std::vector<Edge>::const_iterator;\n        iterator begi, endi;\n\
    \        iterator begin() const { return begi; }\n        iterator end() const\
    \ { return endi; }\n        int size() const { return (int)distance(begi, endi);\
    \ }\n        const Edge& operator[](int i) const { return begi[i]; }\n    };\n\
    private:\npublic:\n    vector<Edge> E;\n    vector<int> I;\n    int n;\n    Graph()\
    \ : n(0) {}\n    Graph(int _n) : n(_n) {}\n    Graph(int _n, const vector<int>&\
    \ from, vector<int>& to, vector<Cost>& cost, bool rev = false) : n(_n) {\n   \
    \     vector<int> buf(n+1, 0);\n        for(int i=0; i<(int)from.size(); i++){\n\
    \            ++buf[from[i]];\n            if (rev) ++buf[to[i]];\n        }\n\
    \        for(int i=1; i<=_n; i++) buf[i] += buf[i-1];\n        E.resize(buf[n]);\n\
    \        for(int i=(int)from.size()-1; i>=0; i--){\n            int u = from[i];\n\
    \            int v = to[i];\n            Cost c = cost[i];\n            E[--buf[u]]\
    \ = Edge(v, c);\n            if(rev) E[--buf[v]] = Edge(u, c);\n        }\n  \
    \      I = move(buf);\n    }\n    AdjacencyListRange operator[](int u) const {\n\
    \        return AdjacencyListRange{ E.begin() + I[u], E.begin() + I[u+1] };\n\
    \    }\n    int num_vertices() const { return n; }\n    int size() const { return\
    \ num_vertices(); }\n    int num_edges() const { return E.size(); }\n    // Graph\
    \ reversed_edges() const {\n    //     Graph res;\n    //     int _n = res.n =\
    \ n;\n    //     std::vector<int> buf(n+1, 0);\n    //     for(int v : E) ++buf[v];\n\
    \    //     for(int i=1; i<=n; i++) buf[i] += buf[i-1];\n    //     res.E.resize(buf[n]);\n\
    \    //     for(int u=0; u<n; u++) for(int v : operator[](u)) res.E[--buf[v]]\
    \ = u;\n    //     res.I = std::move(buf);\n    //     return res;\n    // }\n\
    };\ntemplate <class T> ostream& operator<<(ostream& os, Graph<T> g) {\n    bool\
    \ first = true;\n    rep(i, g.n) repe(e, g[i]) {\n        if (first) first = false;\n\
    \        else os << endl;\n        os << i << \"->\" << e.to << \": \" << e.cost;\n\
    \    }\n    return os;\n}\n\n"
  code: "#ifndef COMPETITIVE_GRAPH_GRAPH_HPP\n#define COMPETITIVE_GRAPH_GRAPH_HPP\
    \ 1\n#include <competitive/std/std.hpp>\ntemplate <class Cost> struct Graph{\n\
    public:\n    struct Edge {\n        int to;\n        Cost cost;\n        Edge()\
    \ {};\n        Edge(int _to, Cost _cost) : to(_to), cost(_cost) {};\n    };\n\
    \    struct AdjacencyListRange{\n        using iterator = typename std::vector<Edge>::const_iterator;\n\
    \        iterator begi, endi;\n        iterator begin() const { return begi; }\n\
    \        iterator end() const { return endi; }\n        int size() const { return\
    \ (int)distance(begi, endi); }\n        const Edge& operator[](int i) const {\
    \ return begi[i]; }\n    };\nprivate:\npublic:\n    vector<Edge> E;\n    vector<int>\
    \ I;\n    int n;\n    Graph() : n(0) {}\n    Graph(int _n) : n(_n) {}\n    Graph(int\
    \ _n, const vector<int>& from, vector<int>& to, vector<Cost>& cost, bool rev =\
    \ false) : n(_n) {\n        vector<int> buf(n+1, 0);\n        for(int i=0; i<(int)from.size();\
    \ i++){\n            ++buf[from[i]];\n            if (rev) ++buf[to[i]];\n   \
    \     }\n        for(int i=1; i<=_n; i++) buf[i] += buf[i-1];\n        E.resize(buf[n]);\n\
    \        for(int i=(int)from.size()-1; i>=0; i--){\n            int u = from[i];\n\
    \            int v = to[i];\n            Cost c = cost[i];\n            E[--buf[u]]\
    \ = Edge(v, c);\n            if(rev) E[--buf[v]] = Edge(u, c);\n        }\n  \
    \      I = move(buf);\n    }\n    AdjacencyListRange operator[](int u) const {\n\
    \        return AdjacencyListRange{ E.begin() + I[u], E.begin() + I[u+1] };\n\
    \    }\n    int num_vertices() const { return n; }\n    int size() const { return\
    \ num_vertices(); }\n    int num_edges() const { return E.size(); }\n    // Graph\
    \ reversed_edges() const {\n    //     Graph res;\n    //     int _n = res.n =\
    \ n;\n    //     std::vector<int> buf(n+1, 0);\n    //     for(int v : E) ++buf[v];\n\
    \    //     for(int i=1; i<=n; i++) buf[i] += buf[i-1];\n    //     res.E.resize(buf[n]);\n\
    \    //     for(int u=0; u<n; u++) for(int v : operator[](u)) res.E[--buf[v]]\
    \ = u;\n    //     res.I = std::move(buf);\n    //     return res;\n    // }\n\
    };\ntemplate <class T> ostream& operator<<(ostream& os, Graph<T> g) {\n    bool\
    \ first = true;\n    rep(i, g.n) repe(e, g[i]) {\n        if (first) first = false;\n\
    \        else os << endl;\n        os << i << \"->\" << e.to << \": \" << e.cost;\n\
    \    }\n    return os;\n}\n#endif //COMPETITIVE_GRAPH_STATICGRAPH_HPP"
  dependsOn:
  - competitive/std/std.hpp
  isVerificationFile: false
  path: competitive/graph/graph.hpp
  requiredBy:
  - competitive/graph/warshall_floyd.hpp
  - competitive/graph/dijkstra.hpp
  - competitive/graph/max_k_dijkstra.hpp
  - competitive/graph/fast_dijkstra.hpp
  - competitive/tree/depth.hpp
  - competitive/tree/kruskal.hpp
  - competitive/tree/diameter.hpp
  timestamp: '2023-02-14 09:29:01+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - online_test/AOJ/GRL_1_C.test.cpp
  - online_test/AOJ/GRL_1_A.test.cpp
  - online_test/library-checker/shortest_path_fast_dijkstra.test.cpp
  - online_test/library-checker/shortest_path_dijkstra.test.cpp
documentation_of: competitive/graph/graph.hpp
layout: document
redirect_from:
- /library/competitive/graph/graph.hpp
- /library/competitive/graph/graph.hpp.html
title: competitive/graph/graph.hpp
---
