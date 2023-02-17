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
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.11.1/x64/lib/python3.11/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n          \
    \         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\
    \  File \"/opt/hostedtoolcache/Python/3.11.1/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/python.py\"\
    , line 96, in bundle\n    raise NotImplementedError\nNotImplementedError\n"
  code: "\ndef scc(N, G, RG):\n    order = []\n    used = [0]*N\n    group = [None]*N\n\
    \    def dfs(s):\n        used[s] = 1\n        for t in G[s]:\n            if\
    \ not used[t]:\n                dfs(t)\n        order.append(s)\n    def rdfs(s,\
    \ col):\n        group[s] = col\n        used[s] = 1\n        for t in RG[s]:\n\
    \            if not used[t]:\n                rdfs(t, col)\n    for i in range(N):\n\
    \        if not used[i]:\n            dfs(i)\n    used = [0]*N\n    label = 0\n\
    \    for s in reversed(order):\n        if not used[s]:\n            rdfs(s, label)\n\
    \            label += 1\n    return label, group\n\n# \u7E2E\u7D04\u5F8C\u306E\
    \u30B0\u30E9\u30D5\u3092\u69CB\u7BC9\ndef construct(N, G, label, group):\n   \
    \ G0 = [set() for i in range(label)]\n    GP = [[] for i in range(label)]\n  \
    \  for v in range(N):\n        lbs = group[v]\n        for w in G[v]:\n      \
    \      lbt = group[w]\n            if lbs == lbt:\n                continue\n\
    \            G0[lbs].add(lbt)\n        GP[lbs].append(v)\n    return G0, GP"
  dependsOn: []
  isVerificationFile: false
  path: competitive/python/scc.py
  requiredBy: []
  timestamp: '2023-02-16 23:48:21+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: competitive/python/scc.py
layout: document
redirect_from:
- /library/competitive/python/scc.py
- /library/competitive/python/scc.py.html
title: competitive/python/scc.py
---
