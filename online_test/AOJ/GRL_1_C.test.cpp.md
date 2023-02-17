---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: competitive/graph/graph.hpp
    title: competitive/graph/graph.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/graph/warshall_floyd.hpp
    title: competitive/graph/warshall_floyd.hpp
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
    PROBLEM: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_C
    links:
    - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_C
  bundledCode: "#line 1 \"online_test/AOJ/GRL_1_C.test.cpp\"\n#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_C\"\
    \n#include <competitive/std/std.hpp>\n#include <competitive/graph/warshall_floyd.hpp>\n\
    #include <competitive/std/io.hpp>\n\nint main() {\n    int V, E;\n    cin >> V\
    \ >> E;\n    vi from(E), to(E);\n    vl cost(E);\n    rep(i, E) {\n        cin\
    \ >> from[i] >> to[i] >> cost[i];\n    }\n    Graph g(V, from, to, cost);\n  \
    \  vvl min_cost;\n    bool valid = warshall_floyd(g, min_cost, INFL);\n    if\
    \ (!valid) {\n        cout << \"NEGATIVE CYCLE\" << endl;\n        return 0;\n\
    \    }\n    rep(i, V) rep(j, V) {\n        if (min_cost[i][j] != INFL) cout <<\
    \ min_cost[i][j];\n        else cout << \"INF\";\n        if (j == V - 1) cout\
    \ << \"\\n\";\n        else cout << \" \";\n    }\n}\n"
  code: "#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_C\"\
    \n#include <competitive/std/std.hpp>\n#include <competitive/graph/warshall_floyd.hpp>\n\
    #include <competitive/std/io.hpp>\n\nint main() {\n    int V, E;\n    cin >> V\
    \ >> E;\n    vi from(E), to(E);\n    vl cost(E);\n    rep(i, E) {\n        cin\
    \ >> from[i] >> to[i] >> cost[i];\n    }\n    Graph g(V, from, to, cost);\n  \
    \  vvl min_cost;\n    bool valid = warshall_floyd(g, min_cost, INFL);\n    if\
    \ (!valid) {\n        cout << \"NEGATIVE CYCLE\" << endl;\n        return 0;\n\
    \    }\n    rep(i, V) rep(j, V) {\n        if (min_cost[i][j] != INFL) cout <<\
    \ min_cost[i][j];\n        else cout << \"INF\";\n        if (j == V - 1) cout\
    \ << \"\\n\";\n        else cout << \" \";\n    }\n}"
  dependsOn:
  - competitive/std/std.hpp
  - competitive/graph/warshall_floyd.hpp
  - competitive/graph/graph.hpp
  - competitive/std/io.hpp
  isVerificationFile: true
  path: online_test/AOJ/GRL_1_C.test.cpp
  requiredBy: []
  timestamp: '2023-02-17 21:43:12+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: online_test/AOJ/GRL_1_C.test.cpp
layout: document
redirect_from:
- /verify/online_test/AOJ/GRL_1_C.test.cpp
- /verify/online_test/AOJ/GRL_1_C.test.cpp.html
title: online_test/AOJ/GRL_1_C.test.cpp
---
