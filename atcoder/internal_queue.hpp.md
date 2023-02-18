---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: atcoder/maxflow.hpp
    title: atcoder/maxflow.hpp
  - icon: ':warning:'
    path: atcoder/mincostflow.hpp
    title: atcoder/mincostflow.hpp
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"atcoder/internal_queue.hpp\"\n\n\n\n#include <vector>\n\n\
    namespace atcoder {\n\nnamespace internal {\n\ntemplate <class T> struct simple_queue\
    \ {\n    std::vector<T> payload;\n    int pos = 0;\n    void reserve(int n) {\
    \ payload.reserve(n); }\n    int size() const { return int(payload.size()) - pos;\
    \ }\n    bool empty() const { return pos == int(payload.size()); }\n    void push(const\
    \ T& t) { payload.push_back(t); }\n    T& front() { return payload[pos]; }\n \
    \   void clear() {\n        payload.clear();\n        pos = 0;\n    }\n    void\
    \ pop() { pos++; }\n};\n\n}  // namespace internal\n\n}  // namespace atcoder\n\
    \n\n"
  code: "#ifndef ATCODER_INTERNAL_QUEUE_HPP\n#define ATCODER_INTERNAL_QUEUE_HPP 1\n\
    \n#include <vector>\n\nnamespace atcoder {\n\nnamespace internal {\n\ntemplate\
    \ <class T> struct simple_queue {\n    std::vector<T> payload;\n    int pos =\
    \ 0;\n    void reserve(int n) { payload.reserve(n); }\n    int size() const {\
    \ return int(payload.size()) - pos; }\n    bool empty() const { return pos ==\
    \ int(payload.size()); }\n    void push(const T& t) { payload.push_back(t); }\n\
    \    T& front() { return payload[pos]; }\n    void clear() {\n        payload.clear();\n\
    \        pos = 0;\n    }\n    void pop() { pos++; }\n};\n\n}  // namespace internal\n\
    \n}  // namespace atcoder\n\n#endif  // ATCODER_INTERNAL_QUEUE_HPP\n"
  dependsOn: []
  isVerificationFile: false
  path: atcoder/internal_queue.hpp
  requiredBy:
  - atcoder/maxflow.hpp
  - atcoder/mincostflow.hpp
  timestamp: '2023-02-16 22:26:28+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: atcoder/internal_queue.hpp
layout: document
redirect_from:
- /library/atcoder/internal_queue.hpp
- /library/atcoder/internal_queue.hpp.html
title: atcoder/internal_queue.hpp
---
