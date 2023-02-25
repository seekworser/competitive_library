---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: competitive/graph/dijkstra.hpp
    title: competitive/graph/dijkstra.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/graph/graph.hpp
    title: competitive/graph/graph.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/std/io.hpp
    title: competitive/std/io.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/std/std.hpp
    title: competitive/std/std.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/shortest_path
    links:
    - https://judge.yosupo.jp/problem/shortest_path
  bundledCode: "#line 1 \"online_test/library-checker/shortest_path_dijkstra.test.cpp\"\
    \n#define PROBLEM \"https://judge.yosupo.jp/problem/shortest_path\"\n#include\
    \ <competitive/std/std.hpp>\n#include <competitive/graph/dijkstra.hpp>\n#include\
    \ <competitive/std/io.hpp>\nint main() {\n    int n,m,s,t;\n    cin >> n >> m\
    \ >> s >> t;\n    vi from(m), to(m); vl cost(m);\n    rep(i, m) cin >> from[i]\
    \ >> to[i] >> cost[i];\n    Graph g(n, from, to, cost);\n    vl min_cost; vi prev;\n\
    \    dijkstra(g, s, min_cost, prev, INFL);\n    if (min_cost[t] == INFL) {\n \
    \       cout << -1 << endl;\n        return 0;\n    }\n    vi path;\n    int pos\
    \ = t;\n    while (pos != s) {\n        path.push_back(pos);\n        pos = prev[pos];\n\
    \    }\n    path.push_back(s);\n    reverse(all(path));\n    cout << min_cost[t]\
    \ << \" \" << sz(path)-1 << endl;\n    rep(i, sz(path)-1) {\n        cout << path[i]\
    \ << \" \" << path[i+1] << endl;\n    }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/shortest_path\"\n#include\
    \ <competitive/std/std.hpp>\n#include <competitive/graph/dijkstra.hpp>\n#include\
    \ <competitive/std/io.hpp>\nint main() {\n    int n,m,s,t;\n    cin >> n >> m\
    \ >> s >> t;\n    vi from(m), to(m); vl cost(m);\n    rep(i, m) cin >> from[i]\
    \ >> to[i] >> cost[i];\n    Graph g(n, from, to, cost);\n    vl min_cost; vi prev;\n\
    \    dijkstra(g, s, min_cost, prev, INFL);\n    if (min_cost[t] == INFL) {\n \
    \       cout << -1 << endl;\n        return 0;\n    }\n    vi path;\n    int pos\
    \ = t;\n    while (pos != s) {\n        path.push_back(pos);\n        pos = prev[pos];\n\
    \    }\n    path.push_back(s);\n    reverse(all(path));\n    cout << min_cost[t]\
    \ << \" \" << sz(path)-1 << endl;\n    rep(i, sz(path)-1) {\n        cout << path[i]\
    \ << \" \" << path[i+1] << endl;\n    }\n}"
  dependsOn:
  - competitive/std/std.hpp
  - competitive/graph/dijkstra.hpp
  - competitive/graph/graph.hpp
  - competitive/std/io.hpp
  isVerificationFile: true
  path: online_test/library-checker/shortest_path_dijkstra.test.cpp
  requiredBy: []
  timestamp: '2023-02-26 03:11:42+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: online_test/library-checker/shortest_path_dijkstra.test.cpp
layout: document
redirect_from:
- /verify/online_test/library-checker/shortest_path_dijkstra.test.cpp
- /verify/online_test/library-checker/shortest_path_dijkstra.test.cpp.html
title: online_test/library-checker/shortest_path_dijkstra.test.cpp
---
