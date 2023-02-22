---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: competitive/graph/graph.hpp
    title: competitive/graph/graph.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/std/std.hpp
    title: competitive/std/std.hpp
  _extendedRequiredBy:
  - icon: ':warning:'
    path: competitive/tree/diameter.hpp
    title: competitive/tree/diameter.hpp
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"competitive/tree/depth.hpp\"\n\n\n#include <competitive/std/std.hpp>\n\
    #include <competitive/graph/graph.hpp>\n// return depth of the tree and deepest\
    \ node number\ntemplate<class Cost> pair<Cost, int> depth(const Graph<Cost>& tree,\
    \ int root, Cost identity=0) {\n    vb seen(tree.n, false);\n    Cost rev_d =\
    \ identity;\n    int rev_x = root;\n    auto dfs = [&] (auto self, int x, int\
    \ d) {\n        if (seen[x]) return;\n        seen[x] = true;\n        repe(e,\
    \ tree[x]) {\n            self(self, e.to, d + e.cost);\n        }\n        if\
    \ (chmax(rev_d, d)) rev_x = x;\n        return;\n    };\n    dfs(dfs, root, 0);\n\
    \    return {rev_d, rev_x};\n}\n\n"
  code: "#ifndef COMPETITIVE_TREE_DEPTH_HPP\n#define COMPETITIVE_TREE_DEPTH_HPP 1\n\
    #include <competitive/std/std.hpp>\n#include <competitive/graph/graph.hpp>\n//\
    \ return depth of the tree and deepest node number\ntemplate<class Cost> pair<Cost,\
    \ int> depth(const Graph<Cost>& tree, int root, Cost identity=0) {\n    vb seen(tree.n,\
    \ false);\n    Cost rev_d = identity;\n    int rev_x = root;\n    auto dfs = [&]\
    \ (auto self, int x, int d) {\n        if (seen[x]) return;\n        seen[x] =\
    \ true;\n        repe(e, tree[x]) {\n            self(self, e.to, d + e.cost);\n\
    \        }\n        if (chmax(rev_d, d)) rev_x = x;\n        return;\n    };\n\
    \    dfs(dfs, root, 0);\n    return {rev_d, rev_x};\n}\n#endif // COMPETITIVE_TREE_DEPTH_HPP"
  dependsOn:
  - competitive/std/std.hpp
  - competitive/graph/graph.hpp
  isVerificationFile: false
  path: competitive/tree/depth.hpp
  requiredBy:
  - competitive/tree/diameter.hpp
  timestamp: '2023-02-22 09:47:28+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: competitive/tree/depth.hpp
layout: document
redirect_from:
- /library/competitive/tree/depth.hpp
- /library/competitive/tree/depth.hpp.html
title: competitive/tree/depth.hpp
---
