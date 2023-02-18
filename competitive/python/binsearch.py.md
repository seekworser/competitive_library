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
  code: "def binsearch_int(s, e, f):\n    \"\"\"\n    Parameters\n    ----------\n\
    \    s : int\n    e : int\n    f : callable\n        f(a) returns True if a <=\
    \ a_max else returns False\n    \"\"\"\n    c_min = s\n    c_max = e\n    while\
    \ c_min != c_max:\n        p = (c_min + c_max + 1) // 2\n        result = f(p)\n\
    \        if result:\n            c_min = p\n        else:\n            c_max =\
    \ p - 1\n    return c_min\n\ndef f(X):\n    return X <= 1000\n\nprint(binsearch_int(0,\
    \ 10000, f))"
  dependsOn: []
  isVerificationFile: false
  path: competitive/python/binsearch.py
  requiredBy: []
  timestamp: '2023-02-16 23:48:21+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: competitive/python/binsearch.py
layout: document
redirect_from:
- /library/competitive/python/binsearch.py
- /library/competitive/python/binsearch.py.html
title: competitive/python/binsearch.py
---
