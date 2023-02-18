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
  code: "from heapq import heappush, heappop\nfrom math import inf\n\nN, M = map(int,\
    \ input().split())\n\nG = [[] for _ in range(N)]\nfor _ in range(M):\n  a, b,\
    \ c = map(int, input().split())\n  G[a-1].append((b-1, c))\n  G[b-1].append((a-1,\
    \ c))\n\nf_to = [inf for _ in range(N)]\nto_N = [inf for _ in range(N)]\n\nh =\
    \ [(0, 0)]\nf_to[0] = 0\nwhile h:\n  c, n = heappop(h)\n  for nn, cn in G[n]:\n\
    \    if f_to[nn] > c + cn:\n      f_to[nn] = c + cn\n      heappush(h, (c + cn,\
    \ nn))\n\nh = [(0, N-1)]\nto_N[N-1] = 0\nwhile h:\n  c, n = heappop(h)\n  for\
    \ nn, cn in G[n]:\n    if to_N[nn] > c + cn:\n      to_N[nn] = c + cn\n      heappush(h,\
    \ (c + cn, nn))\n\nfor i in range(N):\n  print(f_to[i] + to_N[i])"
  dependsOn: []
  isVerificationFile: false
  path: competitive/python/dijkstra.py
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: competitive/python/dijkstra.py
layout: document
redirect_from:
- /library/competitive/python/dijkstra.py
- /library/competitive/python/dijkstra.py.html
title: competitive/python/dijkstra.py
---
