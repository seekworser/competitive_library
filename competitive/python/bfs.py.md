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
  code: "from collections import deque\n\n\ndef bfs(n, G):\n    # return max length\
    \ path from node n\n    # G = [[[n0, d0], [n1, d1]], [[n2, d2], ...], ...]\n \
    \   dist = [None] * len(G)\n    que = deque([n])\n    dist[n] = 0\n    while que:\n\
    \        v = que.popleft()\n        d = dist[v]\n        for w in G[v]:\n    \
    \        if dist[w[0]] is not None:\n                continue\n            dist[w[0]]\
    \ = d + w[1]\n            que.append(w[0])\n    d = max(dist)\n    return dist.index(d),\
    \ d\n\nN = int(input())\nG = [[] for _ in range(N)]\nfor _ in range(N - 1):\n\
    \    A, B = [int(i) for i in input().split(\" \")]\n    G[A - 1].append([B - 1,\
    \ 1])\n    G[B - 1].append([A - 1, 1])\n\nu, _ = bfs(0, G)\n_, d = bfs(u, G)\n\
    print(d + 1)"
  dependsOn: []
  isVerificationFile: false
  path: competitive/python/bfs.py
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: competitive/python/bfs.py
layout: document
redirect_from:
- /library/competitive/python/bfs.py
- /library/competitive/python/bfs.py.html
title: competitive/python/bfs.py
---
