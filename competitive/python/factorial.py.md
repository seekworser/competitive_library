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
  code: "def cmb_init(N, p):\n    fact = [1, 1]\n    factinv = [1, 1]\n    inv = [0,\
    \ 1]\n\n    for i in range(2, N + 1):\n        fact.append((fact[-1] * i) % p)\n\
    \        inv.append((-inv[p % i] * (p // i)) % p)\n        factinv.append((factinv[-1]\
    \ * inv[-1]) % p)\n    return [fact, factinv, p]\n\ndef cmb(n, r, f):\n    if\
    \ n < r:\n        return 0\n    return f[0][n] * f[1][r] * f[1][n-r] % f[2]\n\n\
    p = 10 ** 9 + 7\nf = cmb_init(10 ** 5, p)\nprint(cmb(99999, 50000, f))\n"
  dependsOn: []
  isVerificationFile: false
  path: competitive/python/factorial.py
  requiredBy: []
  timestamp: '2023-02-16 23:48:21+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: competitive/python/factorial.py
layout: document
redirect_from:
- /library/competitive/python/factorial.py
- /library/competitive/python/factorial.py.html
title: competitive/python/factorial.py
---
