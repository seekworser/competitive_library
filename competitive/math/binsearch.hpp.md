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
  bundledCode: "#line 1 \"competitive/math/binsearch.hpp\"\n\n\n#include <functional>\n\
    //s~e\u3067le(ans) = true\u3068\u306A\u308B\u6700\u5927\u306Eans\u3092\u8FD4\u3059\
    \ntemplate <class T, class F> T binsearch(T s, T e, F le) {\n    T cmin = s;\n\
    \    T cmax = e;\n    while (cmin != cmax) {\n        T p = (cmin + cmax + 1)\
    \ / 2;\n        if (le(p)) cmin = p;\n        else cmax = p - 1;\n    }\n    return\
    \ cmin;\n}\n//s~e\u3067le(ans) = true\u3068\u306A\u308B\u6700\u5927\u306Eans\u3092\
    \u8FD4\u3059\ntemplate <class F> double binsearch_double(double s, double e, F\
    \ le, double eps=1e-10) {\n    double cmin = s;\n    double cmax = e;\n    while\
    \ (abs(cmax - cmin) > eps) {\n        double p = (cmin + cmax) / 2;\n        if\
    \ (le(p)) cmin = p;\n        else cmax = p;\n    }\n    return cmin;\n}\n//s~e\u3067\
    \u9AD8\u30051\u3064\u3057\u304B\u6975\u5024\u3092\u6301\u305F\u306A\u3044f\u306B\
    \u3064\u3044\u3066\u6975\u5024\u3092\u4E0E\u3048\u308B\u70B9\u3092\u8FD4\u3059\
    \ntemplate <class T, class F> T ternary_search(T s, T e, F f, double eps=1e-10)\
    \ {\n    T cmin = s;\n    T cmax = e;\n    while (cmax - cmin > (T)3) {\n    \
    \    T p1 = cmin + max<T>(1, (cmax - cmin) / 3);\n        T p2 = cmax - max<T>(1,\
    \ (cmax - cmin) / 3);\n        if (f(p1) > f(p2)) cmin = p1;\n        else cmax\
    \ = p2;\n    }\n    T rev = cmin;\n    auto val = f(cmin);\n    rep(i, 4) {\n\
    \        if (chmin<T>(val, f(cmin+i))) rev = cmin + i;\n    }\n    return rev;\n\
    }\n//s~e\u3067\u9AD8\u30051\u3064\u3057\u304B\u6975\u5024\u3092\u6301\u305F\u306A\
    \u3044f\u306B\u3064\u3044\u3066\u6975\u5024\u3092\u4E0E\u3048\u308B\u70B9\u3092\
    \u8FD4\u3059\ntemplate <class F> double ternary_search_double(double s, double\
    \ e, F f, double eps=1e-10) {\n    double cmin = s;\n    double  cmax = e;\n \
    \   while (abs(cmax - cmin) > eps) {\n        double p1 = cmin + (cmax - cmin)\
    \ / 3;\n        double p2 = cmax - (cmax - cmin) / 3;\n        if (f(p1) > f(p2))\
    \ cmin = p1;\n        else cmax = p2;\n    }\n    return cmin;\n}\n\n"
  code: "#ifndef COMPETITIVE_MATH_BINSERCH_HPP\n#define COMPETITIVE_MATH_BINSERCH_HPP\
    \ 1\n#include <functional>\n//s~e\u3067le(ans) = true\u3068\u306A\u308B\u6700\u5927\
    \u306Eans\u3092\u8FD4\u3059\ntemplate <class T, class F> T binsearch(T s, T e,\
    \ F le) {\n    T cmin = s;\n    T cmax = e;\n    while (cmin != cmax) {\n    \
    \    T p = (cmin + cmax + 1) / 2;\n        if (le(p)) cmin = p;\n        else\
    \ cmax = p - 1;\n    }\n    return cmin;\n}\n//s~e\u3067le(ans) = true\u3068\u306A\
    \u308B\u6700\u5927\u306Eans\u3092\u8FD4\u3059\ntemplate <class F> double binsearch_double(double\
    \ s, double e, F le, double eps=1e-10) {\n    double cmin = s;\n    double cmax\
    \ = e;\n    while (abs(cmax - cmin) > eps) {\n        double p = (cmin + cmax)\
    \ / 2;\n        if (le(p)) cmin = p;\n        else cmax = p;\n    }\n    return\
    \ cmin;\n}\n//s~e\u3067\u9AD8\u30051\u3064\u3057\u304B\u6975\u5024\u3092\u6301\
    \u305F\u306A\u3044f\u306B\u3064\u3044\u3066\u6975\u5024\u3092\u4E0E\u3048\u308B\
    \u70B9\u3092\u8FD4\u3059\ntemplate <class T, class F> T ternary_search(T s, T\
    \ e, F f, double eps=1e-10) {\n    T cmin = s;\n    T cmax = e;\n    while (cmax\
    \ - cmin > (T)3) {\n        T p1 = cmin + max<T>(1, (cmax - cmin) / 3);\n    \
    \    T p2 = cmax - max<T>(1, (cmax - cmin) / 3);\n        if (f(p1) > f(p2)) cmin\
    \ = p1;\n        else cmax = p2;\n    }\n    T rev = cmin;\n    auto val = f(cmin);\n\
    \    rep(i, 4) {\n        if (chmin<T>(val, f(cmin+i))) rev = cmin + i;\n    }\n\
    \    return rev;\n}\n//s~e\u3067\u9AD8\u30051\u3064\u3057\u304B\u6975\u5024\u3092\
    \u6301\u305F\u306A\u3044f\u306B\u3064\u3044\u3066\u6975\u5024\u3092\u4E0E\u3048\
    \u308B\u70B9\u3092\u8FD4\u3059\ntemplate <class F> double ternary_search_double(double\
    \ s, double e, F f, double eps=1e-10) {\n    double cmin = s;\n    double  cmax\
    \ = e;\n    while (abs(cmax - cmin) > eps) {\n        double p1 = cmin + (cmax\
    \ - cmin) / 3;\n        double p2 = cmax - (cmax - cmin) / 3;\n        if (f(p1)\
    \ > f(p2)) cmin = p1;\n        else cmax = p2;\n    }\n    return cmin;\n}\n#endif\
    \ // COMPETITIVE_MATH_BINSERCH_HPP"
  dependsOn: []
  isVerificationFile: false
  path: competitive/math/binsearch.hpp
  requiredBy: []
  timestamp: '2023-02-12 17:24:49+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: competitive/math/binsearch.hpp
layout: document
redirect_from:
- /library/competitive/math/binsearch.hpp
- /library/competitive/math/binsearch.hpp.html
title: competitive/math/binsearch.hpp
---
