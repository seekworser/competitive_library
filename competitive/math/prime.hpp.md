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
  bundledCode: "#line 1 \"competitive/math/prime.hpp\"\n\n\n#include <competitive/std/std.hpp>\n\
    template <class T> bool is_prime(T n) {\n    if (n == 1) return false;\n    for\
    \ (T i=2; i <= (T)std::sqrt(n); i++) {\n        if (n % i == 0) return false;\n\
    \    }\n    return true;\n};\n//return all devisor\ntemplate <class T> vector<T>\
    \ divisor(T n, bool sorted=true) {\n    vector<T> ans(0);\n    for (T i = 1; i\
    \ <= (T)std::sqrt(n); i++) {\n        if (n % i == 0) {\n            ans.push_back(i);\n\
    \            if (i * i != n) ans.push_back(n / i);\n        }\n    }\n    if (sorted)\
    \ sort(ans.begin(), ans.end());\n    return ans;\n};\ntemplate <class T> vector<T>\
    \ prime_factor(T n) {\n    vector<T> ans(0);\n    for (T i = 2; i <= (T)std::sqrt(n);\
    \ i++) {\n        while (n % i == 0) {\n            ans.push_back(i);\n      \
    \      n /= i;\n        }\n    }\n    if (n != 1) ans.push_back(n);\n    return\
    \ ans;\n};\ntemplate <class T> map<T, T> prime_factor_c(T n) {\n    map<T, T>\
    \ ans;\n    for (T i = 2; i <= (T)std::sqrt(n); i++) {\n        while (n % i ==\
    \ 0) {\n            ans[i] += 1;\n            n /= i;\n        }\n    }\n    if\
    \ (n != 1) ans[n] += 1;\n    return ans;\n};\ntemplate <class T> vector<T> primes(T\
    \ n) {\n    vector<T> ans(0);\n    if (n < 2) return ans;\n    vector<bool> is_primev(n+1,\
    \ true);\n    is_primev.at(0) = is_primev.at(1) = false;\n    for (T i = 2; i\
    \ <= (T)std::sqrt(n); i++) {\n        if (!is_primev.at(i)) continue;\n      \
    \  for (T j = i*2; j <= n; j+=i) is_primev.at(j) = false;\n    }\n    for (T i\
    \ = 2; i <= n; i++) {\n        if (is_primev.at(i)) ans.push_back(i);\n    }\n\
    \    return ans;\n};\ntemplate <class T> vector<T> segment_seive(T s, T t) {\n\
    \    vector<T> ans(0);\n    if (t < 2 || s < 0 || s >= t) return ans;\n    vector<bool>\
    \ is_prime_small((T)std::sqrt(t)+1, true);\n    vector<bool> is_prime_large(t-s,\
    \ true);\n    for (T i = 2; i <= (T)std::sqrt(t); i++) {\n        if (!is_prime_small.at(i))\
    \ continue;\n        for (T j = i*2; j*j < t; j+=i) is_prime_small.at(j) = false;\n\
    \        for (T j = max(2*i, ((s+i-1)/i)*i); j < t; j+=i) is_prime_large.at(j-s)\
    \ = false;\n    }\n    for (T i=0; i < t-s; i++) {\n        if (is_prime_large.at(i)\
    \ && s+i != 1) ans.push_back(s+i);\n    }\n    return ans;\n};\n\n"
  code: "#ifndef COMPETITIVE_MATH_PRIME_HPP\n#define COMPETITIVE_MATH_PRIME_HPP 1\n\
    #include <competitive/std/std.hpp>\ntemplate <class T> bool is_prime(T n) {\n\
    \    if (n == 1) return false;\n    for (T i=2; i <= (T)std::sqrt(n); i++) {\n\
    \        if (n % i == 0) return false;\n    }\n    return true;\n};\n//return\
    \ all devisor\ntemplate <class T> vector<T> divisor(T n, bool sorted=true) {\n\
    \    vector<T> ans(0);\n    for (T i = 1; i <= (T)std::sqrt(n); i++) {\n     \
    \   if (n % i == 0) {\n            ans.push_back(i);\n            if (i * i !=\
    \ n) ans.push_back(n / i);\n        }\n    }\n    if (sorted) sort(ans.begin(),\
    \ ans.end());\n    return ans;\n};\ntemplate <class T> vector<T> prime_factor(T\
    \ n) {\n    vector<T> ans(0);\n    for (T i = 2; i <= (T)std::sqrt(n); i++) {\n\
    \        while (n % i == 0) {\n            ans.push_back(i);\n            n /=\
    \ i;\n        }\n    }\n    if (n != 1) ans.push_back(n);\n    return ans;\n};\n\
    template <class T> map<T, T> prime_factor_c(T n) {\n    map<T, T> ans;\n    for\
    \ (T i = 2; i <= (T)std::sqrt(n); i++) {\n        while (n % i == 0) {\n     \
    \       ans[i] += 1;\n            n /= i;\n        }\n    }\n    if (n != 1) ans[n]\
    \ += 1;\n    return ans;\n};\ntemplate <class T> vector<T> primes(T n) {\n   \
    \ vector<T> ans(0);\n    if (n < 2) return ans;\n    vector<bool> is_primev(n+1,\
    \ true);\n    is_primev.at(0) = is_primev.at(1) = false;\n    for (T i = 2; i\
    \ <= (T)std::sqrt(n); i++) {\n        if (!is_primev.at(i)) continue;\n      \
    \  for (T j = i*2; j <= n; j+=i) is_primev.at(j) = false;\n    }\n    for (T i\
    \ = 2; i <= n; i++) {\n        if (is_primev.at(i)) ans.push_back(i);\n    }\n\
    \    return ans;\n};\ntemplate <class T> vector<T> segment_seive(T s, T t) {\n\
    \    vector<T> ans(0);\n    if (t < 2 || s < 0 || s >= t) return ans;\n    vector<bool>\
    \ is_prime_small((T)std::sqrt(t)+1, true);\n    vector<bool> is_prime_large(t-s,\
    \ true);\n    for (T i = 2; i <= (T)std::sqrt(t); i++) {\n        if (!is_prime_small.at(i))\
    \ continue;\n        for (T j = i*2; j*j < t; j+=i) is_prime_small.at(j) = false;\n\
    \        for (T j = max(2*i, ((s+i-1)/i)*i); j < t; j+=i) is_prime_large.at(j-s)\
    \ = false;\n    }\n    for (T i=0; i < t-s; i++) {\n        if (is_prime_large.at(i)\
    \ && s+i != 1) ans.push_back(s+i);\n    }\n    return ans;\n};\n#endif // COMPETITIVE_MATH_PRIME_HPP"
  dependsOn:
  - competitive/std/std.hpp
  isVerificationFile: false
  path: competitive/math/prime.hpp
  requiredBy: []
  timestamp: '2023-02-17 21:43:12+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: competitive/math/prime.hpp
layout: document
redirect_from:
- /library/competitive/math/prime.hpp
- /library/competitive/math/prime.hpp.html
title: competitive/math/prime.hpp
---
