---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"competitive/math/gcp.hpp\"\nint gcd(int a, int b) {\n  \
    \  if(b == 0) return a;\n    return gcd(b, a % b);\n}\n"
  code: "int gcd(int a, int b) {\n    if(b == 0) return a;\n    return gcd(b, a %\
    \ b);\n}"
  dependsOn: []
  isVerificationFile: false
  path: competitive/math/gcp.hpp
  requiredBy: []
  timestamp: '2022-09-03 19:07:13+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: competitive/math/gcp.hpp
layout: document
redirect_from:
- /library/competitive/math/gcp.hpp
- /library/competitive/math/gcp.hpp.html
title: competitive/math/gcp.hpp
---
