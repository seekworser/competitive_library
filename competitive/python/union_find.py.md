---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: py
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.11.2/x64/lib/python3.11/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n          \
    \         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\
    \  File \"/opt/hostedtoolcache/Python/3.11.2/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/python.py\"\
    , line 96, in bundle\n    raise NotImplementedError\nNotImplementedError\n"
  code: "class UnionFindTree:\n    def __init__(self, N):\n        self.parents =\
    \ [-1] * N\n        return\n\n    def flush(self):\n        tree = [(i, self.parents[i])\
    \ for i in range(len(self.parents))]\n        print(*tree)\n\n    def root(self,\
    \ x):\n        r = x\n        while self.parents[r] >= 0:\n            r = self.parents[r]\n\
    \        return r\n\n    def same(self, x, y):\n        return self.root(x) ==\
    \ self.root(y)\n\n    def merge(self, x, y):\n        rx = self.root(x)\n    \
    \    ry = self.root(y)\n        if rx == ry:\n            return\n        if self.parents[rx]\
    \ > self.parents[ry]:\n            rx, ry = ry, rx\n        self.parents[rx] +=\
    \ self.parents[ry]\n        self.parents[ry] = rx\n        return\n"
  dependsOn: []
  isVerificationFile: false
  path: competitive/python/union_find.py
  requiredBy: []
  timestamp: '2023-02-16 23:48:21+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: competitive/python/union_find.py
layout: document
redirect_from:
- /library/competitive/python/union_find.py
- /library/competitive/python/union_find.py.html
title: competitive/python/union_find.py
---
