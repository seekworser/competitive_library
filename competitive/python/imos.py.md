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
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.11.3/x64/lib/python3.11/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n          \
    \         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\
    \  File \"/opt/hostedtoolcache/Python/3.11.3/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/python.py\"\
    , line 96, in bundle\n    raise NotImplementedError\nNotImplementedError\n"
  code: "from itertools import accumulate, product\n\n\nclass Imos:\n    def __init__(self,\
    \ N) -> None:\n        self.edges = [0] * N\n        self.N = N\n        return\n\
    \n    def add(self, start: int, end: int) -> None:\n        self.edges[start]\
    \ += 1\n        if end != self.N - 1:\n            self.edges[end+1] -= 1\n  \
    \      return\n\n    def accumulate(self) -> list:\n        return list(accumulate(self.edges))\n\
    \nclass Imos_2:\n    def __init__(self, H, W) -> None:\n        self.H = H\n \
    \       self.W = W\n        self.edges = [[0] * self.W for _ in range(self.H)]\n\
    \        return\n\n    def add(self, start, end) -> None:\n        self.edges[start[0]][start[1]]\
    \ += 1\n        if end[0] != self.H - 1:\n            self.edges[end[0]+1][start[1]]\
    \ -= 1\n        if end[1] != self.W - 1:\n            self.edges[start[0]][end[1]+1]\
    \ -= 1\n        if end[0] != self.H - 1 and end[1] != self.W - 1:\n          \
    \  self.edges[end[0]+1][end[1]+1] += 1\n        return\n\n    def accumulate(self)\
    \ -> list:\n        accum = [list(accumulate(l)) for l in self.edges]\n      \
    \  for i, j in product(range(1, self.H), range(self.W)):\n                accum[i][j]\
    \ += accum[i-1][j]\n        return accum"
  dependsOn: []
  isVerificationFile: false
  path: competitive/python/imos.py
  requiredBy: []
  timestamp: '2023-02-16 23:48:21+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: competitive/python/imos.py
layout: document
redirect_from:
- /library/competitive/python/imos.py
- /library/competitive/python/imos.py.html
title: competitive/python/imos.py
---
