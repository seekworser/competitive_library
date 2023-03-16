---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: atcoder/internal_scc.hpp
    title: atcoder/internal_scc.hpp
  - icon: ':warning:'
    path: atcoder/mincostflow.hpp
    title: atcoder/mincostflow.hpp
  - icon: ':warning:'
    path: atcoder/scc.hpp
    title: atcoder/scc.hpp
  - icon: ':warning:'
    path: atcoder/twosat.hpp
    title: atcoder/twosat.hpp
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"atcoder/internal_csr.hpp\"\n#include <algorithm>\n#include\
    \ <utility>\n#include <vector>\n\nnamespace atcoder {\nnamespace internal {\n\n\
    template <class E> struct csr {\n    std::vector<int> start;\n    std::vector<E>\
    \ elist;\n    explicit csr(int n, const std::vector<std::pair<int, E>>& edges)\n\
    \        : start(n + 1), elist(edges.size()) {\n        for (auto e : edges) {\n\
    \            start[e.first + 1]++;\n        }\n        for (int i = 1; i <= n;\
    \ i++) {\n            start[i] += start[i - 1];\n        }\n        auto counter\
    \ = start;\n        for (auto e : edges) {\n            elist[counter[e.first]++]\
    \ = e.second;\n        }\n    }\n};\n\n}  // namespace internal\n\n}  // namespace\
    \ atcoder\n"
  code: "#pragma once\n#include <algorithm>\n#include <utility>\n#include <vector>\n\
    \nnamespace atcoder {\nnamespace internal {\n\ntemplate <class E> struct csr {\n\
    \    std::vector<int> start;\n    std::vector<E> elist;\n    explicit csr(int\
    \ n, const std::vector<std::pair<int, E>>& edges)\n        : start(n + 1), elist(edges.size())\
    \ {\n        for (auto e : edges) {\n            start[e.first + 1]++;\n     \
    \   }\n        for (int i = 1; i <= n; i++) {\n            start[i] += start[i\
    \ - 1];\n        }\n        auto counter = start;\n        for (auto e : edges)\
    \ {\n            elist[counter[e.first]++] = e.second;\n        }\n    }\n};\n\
    \n}  // namespace internal\n\n}  // namespace atcoder\n"
  dependsOn: []
  isVerificationFile: false
  path: atcoder/internal_csr.hpp
  requiredBy:
  - atcoder/internal_scc.hpp
  - atcoder/twosat.hpp
  - atcoder/scc.hpp
  - atcoder/mincostflow.hpp
  timestamp: '2023-02-28 16:59:41+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: atcoder/internal_csr.hpp
layout: document
redirect_from:
- /library/atcoder/internal_csr.hpp
- /library/atcoder/internal_csr.hpp.html
title: atcoder/internal_csr.hpp
---
