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
    PROBLEM: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A
    links:
    - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A
  bundledCode: "#line 1 \"online_test/AOJ/GRL_1_A.test.cpp\"\n#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A\"\
    \n#include <competitive/std/std.hpp>\n#include <competitive/graph/dijkstra.hpp>\n\
    #include <competitive/std/io.hpp>\n\nint main() {\n    int n,m,r;\n    cin >>\
    \ n >> m >> r;\n    vi from(m), to(m); vl cost(m);\n    rep(i, m) cin >> from[i]\
    \ >> to[i] >> cost[i];\n    Graph g(n, from, to, cost);\n    vi prev; vl ans;\n\
    \    dijkstra(g, r, ans, prev, INFL);\n    rep(i, n) {\n        if (ans[i] ==\
    \ INFL) cout << \"INF\\n\";\n        else cout << ans[i] << \"\\n\";\n    }\n\
    }\n"
  code: "#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A\"\
    \n#include <competitive/std/std.hpp>\n#include <competitive/graph/dijkstra.hpp>\n\
    #include <competitive/std/io.hpp>\n\nint main() {\n    int n,m,r;\n    cin >>\
    \ n >> m >> r;\n    vi from(m), to(m); vl cost(m);\n    rep(i, m) cin >> from[i]\
    \ >> to[i] >> cost[i];\n    Graph g(n, from, to, cost);\n    vi prev; vl ans;\n\
    \    dijkstra(g, r, ans, prev, INFL);\n    rep(i, n) {\n        if (ans[i] ==\
    \ INFL) cout << \"INF\\n\";\n        else cout << ans[i] << \"\\n\";\n    }\n\
    }\n"
  dependsOn:
  - competitive/std/std.hpp
  - competitive/graph/dijkstra.hpp
  - competitive/graph/graph.hpp
  - competitive/std/io.hpp
  isVerificationFile: true
  path: online_test/AOJ/GRL_1_A.test.cpp
  requiredBy: []
  timestamp: '2023-02-17 21:43:12+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: online_test/AOJ/GRL_1_A.test.cpp
layout: document
redirect_from:
- /verify/online_test/AOJ/GRL_1_A.test.cpp
- /verify/online_test/AOJ/GRL_1_A.test.cpp.html
title: online_test/AOJ/GRL_1_A.test.cpp
---
