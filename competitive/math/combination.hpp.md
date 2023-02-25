---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: competitive/std/std.hpp
    title: competitive/std/std.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"competitive/math/combination.hpp\"\n\n\n\n#include <competitive/std/std.hpp>\n\
    \nstruct Combination {\n    ll pm;\n    vl fact, fact_inv;\n    Combination(int\
    \ n = 1000003, ll p = 998244353) : fact(n), fact_inv(n){\n        vl inv(n);\n\
    \        pm = p;\n        fact[0] = fact[1] = 1;\n        fact_inv[0] = fact_inv[1]\
    \ = 1;\n        inv[0] = 0;\n        inv[1] = 1;\n        for (int i = 2; i <\
    \ n; i++) {\n            fact[i] = fact[i - 1] * i % p;\n            inv[i] =\
    \ p - inv[p % i] * (p / i) % p;\n            fact_inv[i] = fact_inv[i - 1] * inv[i]\
    \ % p;\n        }\n    }\n    ll operator()(int n, int r) {\n        if (r < 0\
    \ || n < r) return 0;\n        return fact[n] * (fact_inv[r] * fact_inv[n - r]\
    \ % pm) % pm;\n    }\n};\n\n\n"
  code: "#ifndef COMPETITIVE_MATH_COMBINATION_HPP\n#define COMPETITIVE_MATH_COMBINATION_HPP\
    \ 1\n\n#include <competitive/std/std.hpp>\n\nstruct Combination {\n    ll pm;\n\
    \    vl fact, fact_inv;\n    Combination(int n = 1000003, ll p = 998244353) :\
    \ fact(n), fact_inv(n){\n        vl inv(n);\n        pm = p;\n        fact[0]\
    \ = fact[1] = 1;\n        fact_inv[0] = fact_inv[1] = 1;\n        inv[0] = 0;\n\
    \        inv[1] = 1;\n        for (int i = 2; i < n; i++) {\n            fact[i]\
    \ = fact[i - 1] * i % p;\n            inv[i] = p - inv[p % i] * (p / i) % p;\n\
    \            fact_inv[i] = fact_inv[i - 1] * inv[i] % p;\n        }\n    }\n \
    \   ll operator()(int n, int r) {\n        if (r < 0 || n < r) return 0;\n   \
    \     return fact[n] * (fact_inv[r] * fact_inv[n - r] % pm) % pm;\n    }\n};\n\
    \n#endif // COMPETITIVE_MATH_COMBINATION_HPP"
  dependsOn:
  - competitive/std/std.hpp
  isVerificationFile: false
  path: competitive/math/combination.hpp
  requiredBy: []
  timestamp: '2023-02-26 03:11:42+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: competitive/math/combination.hpp
layout: document
redirect_from:
- /library/competitive/math/combination.hpp
- /library/competitive/math/combination.hpp.html
title: competitive/math/combination.hpp
---
