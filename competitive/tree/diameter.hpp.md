---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: competitive/graph/graph.hpp
    title: competitive/graph/graph.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/std/std.hpp
    title: competitive/std/std.hpp
  - icon: ':warning:'
    path: competitive/tree/depth.hpp
    title: competitive/tree/depth.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"competitive/tree/diameter.hpp\"\n\n\n#include <competitive/std/std.hpp>\n\
    #include <competitive/tree/depth.hpp>\n// return {diam, u, v} where diam: diameter,\
    \ u, v: endpoints.\ntemplate<class Cost> tuple<Cost, int, int> diameter(const\
    \ Graph<Cost>& tree){\n    auto [_, u] = depth(tree, 0);\n    auto [diam, v] =\
    \ depth(tree, u);\n    if (u > v) swap(u, v);\n    return {diam, u, v};\n}\n\n"
  code: "#ifndef COMPETITIVE_TREE_DIAMETER_HPP\n#define COMPETITIVE_TREE_DIAMETER_HPP\
    \ 1\n#include <competitive/std/std.hpp>\n#include <competitive/tree/depth.hpp>\n\
    // return {diam, u, v} where diam: diameter, u, v: endpoints.\ntemplate<class\
    \ Cost> tuple<Cost, int, int> diameter(const Graph<Cost>& tree){\n    auto [_,\
    \ u] = depth(tree, 0);\n    auto [diam, v] = depth(tree, u);\n    if (u > v) swap(u,\
    \ v);\n    return {diam, u, v};\n}\n#endif // COMPETITIVE_TREE_DIAMETER_HPP"
  dependsOn:
  - competitive/std/std.hpp
  - competitive/tree/depth.hpp
  - competitive/graph/graph.hpp
  isVerificationFile: false
  path: competitive/tree/diameter.hpp
  requiredBy: []
  timestamp: '2023-02-17 21:43:12+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: competitive/tree/diameter.hpp
layout: document
redirect_from:
- /library/competitive/tree/diameter.hpp
- /library/competitive/tree/diameter.hpp.html
title: competitive/tree/diameter.hpp
---
