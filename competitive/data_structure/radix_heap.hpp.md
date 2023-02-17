---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: competitive/graph/fast_dijkstra.hpp
    title: competitive/graph/fast_dijkstra.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: online_test/library-checker/shortest_path_fast_dijkstra.test.cpp
    title: online_test/library-checker/shortest_path_fast_dijkstra.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"competitive/data_structure/radix_heap.hpp\"\n\n\ntemplate\
    \ <typename Key, typename Val>\nstruct RadixHeap {\n  using uint = typename make_unsigned<Key>::type;\n\
    \  static constexpr int bit = sizeof(Key) * 8;\n  array<vector<pair<uint, Val>\
    \ >, bit + 1> vs;\n  array<uint, bit + 1> ms;\n\n  int s;\n  uint last;\n\n  RadixHeap()\
    \ : s(0), last(0) { fill(begin(ms), end(ms), uint(-1)); }\n\n  bool empty() const\
    \ { return s == 0; }\n\n  int size() const { return s; }\n\n  inline uint64_t\
    \ getbit(uint a) const {\n    return 64 - __builtin_clzll(a);\n  }\n\n  void push(const\
    \ uint &key, const Val &val) {\n    s++;\n    uint64_t b = getbit(key ^ last);\n\
    \    vs[b].emplace_back(key, val);\n    ms[b] = min(key, ms[b]);\n  }\n\n  pair<uint,\
    \ Val> pop() {\n    if (ms[0] == uint(-1)) {\n      int idx = 1;\n      while\
    \ (ms[idx] == uint(-1)) idx++;\n      last = ms[idx];\n      for (auto &p : vs[idx])\
    \ {\n        uint64_t b = getbit(p.first ^ last);\n        vs[b].emplace_back(p);\n\
    \        ms[b] = min(p.first, ms[b]);\n      }\n      vs[idx].clear();\n     \
    \ ms[idx] = uint(-1);\n    }\n    --s;\n    auto res = vs[0].back();\n    vs[0].pop_back();\n\
    \    if (vs[0].empty()) ms[0] = uint(-1);\n    return res;\n  }\n};\n\n\n"
  code: "#ifndef COMPETITIVE_DATASTRUCTURE_REDIXHEAP_HPP\n#define COMPETITIVE_DATASTRUCTURE_REDIXHEAP_HPP\
    \ 1\ntemplate <typename Key, typename Val>\nstruct RadixHeap {\n  using uint =\
    \ typename make_unsigned<Key>::type;\n  static constexpr int bit = sizeof(Key)\
    \ * 8;\n  array<vector<pair<uint, Val> >, bit + 1> vs;\n  array<uint, bit + 1>\
    \ ms;\n\n  int s;\n  uint last;\n\n  RadixHeap() : s(0), last(0) { fill(begin(ms),\
    \ end(ms), uint(-1)); }\n\n  bool empty() const { return s == 0; }\n\n  int size()\
    \ const { return s; }\n\n  inline uint64_t getbit(uint a) const {\n    return\
    \ 64 - __builtin_clzll(a);\n  }\n\n  void push(const uint &key, const Val &val)\
    \ {\n    s++;\n    uint64_t b = getbit(key ^ last);\n    vs[b].emplace_back(key,\
    \ val);\n    ms[b] = min(key, ms[b]);\n  }\n\n  pair<uint, Val> pop() {\n    if\
    \ (ms[0] == uint(-1)) {\n      int idx = 1;\n      while (ms[idx] == uint(-1))\
    \ idx++;\n      last = ms[idx];\n      for (auto &p : vs[idx]) {\n        uint64_t\
    \ b = getbit(p.first ^ last);\n        vs[b].emplace_back(p);\n        ms[b] =\
    \ min(p.first, ms[b]);\n      }\n      vs[idx].clear();\n      ms[idx] = uint(-1);\n\
    \    }\n    --s;\n    auto res = vs[0].back();\n    vs[0].pop_back();\n    if\
    \ (vs[0].empty()) ms[0] = uint(-1);\n    return res;\n  }\n};\n\n#endif // COMPETITIVE_DATASTRUCTURE_REDIXHEAP_HPP"
  dependsOn: []
  isVerificationFile: false
  path: competitive/data_structure/radix_heap.hpp
  requiredBy:
  - competitive/graph/fast_dijkstra.hpp
  timestamp: '2022-09-17 03:34:14+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - online_test/library-checker/shortest_path_fast_dijkstra.test.cpp
documentation_of: competitive/data_structure/radix_heap.hpp
layout: document
redirect_from:
- /library/competitive/data_structure/radix_heap.hpp
- /library/competitive/data_structure/radix_heap.hpp.html
title: competitive/data_structure/radix_heap.hpp
---
