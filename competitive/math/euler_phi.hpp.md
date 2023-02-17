---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: competitive/std/std.hpp
    title: competitive/std/std.hpp
  _extendedRequiredBy:
  - icon: ':warning:'
    path: online_test/AOJ/NTL_1_D.cpp
    title: online_test/AOJ/NTL_1_D.cpp
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"competitive/math/euler_phi.hpp\"\n\n\n#include <competitive/std/std.hpp>\n\
    /**\n * @brief\n * counts the positive integers up to a given integer n\n * O(sqrt(N))\n\
    \ */\nll euler_phi(ll n) {\n  ll ret = n;\n  for(ll i = 2; i * i <= n; i++) {\n\
    \    if(n % i == 0) {\n      ret -= ret / i;\n      while(n % i == 0) n /= i;\n\
    \    }\n  }\n  if(n > 1) ret -= ret / n;\n  return ret;\n}\n/**\n * @brief\n *\
    \ return minimul positive value y s.t. x*y = 1 (mod mod)\n */\nll inv(ll x, ll\
    \ mod) {\n    return powm(x, euler_phi(mod)-1, mod);\n}\n\n"
  code: "#ifndef COMPETITIVE_MATH_EULERPHI_HPP\n#define COMPETITIVE_MATH_EULERPHI_HPP\
    \ 1\n#include <competitive/std/std.hpp>\n/**\n * @brief\n * counts the positive\
    \ integers up to a given integer n\n * O(sqrt(N))\n */\nll euler_phi(ll n) {\n\
    \  ll ret = n;\n  for(ll i = 2; i * i <= n; i++) {\n    if(n % i == 0) {\n   \
    \   ret -= ret / i;\n      while(n % i == 0) n /= i;\n    }\n  }\n  if(n > 1)\
    \ ret -= ret / n;\n  return ret;\n}\n/**\n * @brief\n * return minimul positive\
    \ value y s.t. x*y = 1 (mod mod)\n */\nll inv(ll x, ll mod) {\n    return powm(x,\
    \ euler_phi(mod)-1, mod);\n}\n#endif // COMPETITIVE_MATH_EULERPHI_HPP\n"
  dependsOn:
  - competitive/std/std.hpp
  isVerificationFile: false
  path: competitive/math/euler_phi.hpp
  requiredBy:
  - online_test/AOJ/NTL_1_D.cpp
  timestamp: '2023-02-14 09:29:01+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: competitive/math/euler_phi.hpp
layout: document
redirect_from:
- /library/competitive/math/euler_phi.hpp
- /library/competitive/math/euler_phi.hpp.html
title: competitive/math/euler_phi.hpp
---
