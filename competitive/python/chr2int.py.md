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
  code: "def chr2int(s):\n    return ord(s) - 97\n\ndef int2chr(i):\n    return chr(i\
    \ + 97)\n\ndef uchr2int(s):\n    return ord(s) - 65\n\ndef uint2chr(i):\n    return\
    \ chr(i + 65)\n\nprint(chr2int(\"a\"))\nprint(chr2int(\"z\"))\nprint(uchr2int(\"\
    A\"))\nprint(uchr2int(\"Z\"))\nprint(int2chr(0))\nprint(int2chr(25))\nprint(uint2chr(0))\n\
    print(uint2chr(25))"
  dependsOn: []
  isVerificationFile: false
  path: competitive/python/chr2int.py
  requiredBy: []
  timestamp: '2023-02-16 23:48:21+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: competitive/python/chr2int.py
layout: document
redirect_from:
- /library/competitive/python/chr2int.py
- /library/competitive/python/chr2int.py.html
title: competitive/python/chr2int.py
---
