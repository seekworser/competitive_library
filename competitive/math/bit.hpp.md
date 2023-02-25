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
  bundledCode: "#line 1 \"competitive/math/bit.hpp\"\n/**\n * all functions are in\
    \ namespace bit;\n */\n#ifndef COMPETITIVE_MATH_BIT_HPP\n#define COMPETITIVE_MATH_BIT_HPP\
    \ 1\n#include <competitive/std/std.hpp>\nnamespace bit{\n    bool lb(ll x) { return\
    \ (x & 1); }\n    bool get(ll x, int n) { return ((x >> n) & 1); }\n    ll update(ll\
    \ x, int n, bool b) { return (x & ~(1LL << n)) + (b << n); }\n    ll lsb(ll x)\
    \ { return -x & x; }\n    int digit(ll x) { int rev=0; while(x) { rev++; x >>=\
    \ 1; } return rev; }\n    ll msb(ll x) { if (x==0) return 0; return 1LL << (digit(x)\
    \ - 1); }\n    int lsbd(ll x) {return digit(lsb(x)); }\n    int count(ll x) {\
    \ int rev=0; while(x) { if (lb(x)) rev++; x >>= 1; } return rev; }\n    string\
    \ to_string(ll x, bool rev=true) { stringstream ss; while (x) { ss << lb(x); x\
    \ >>= 1;} string s(ss.str()); if (rev) reverse(all(s)); return s; }\n}\n#endif\
    \ // COMPETITIVE_MATH_BIT_HPP\n"
  code: "/**\n * all functions are in namespace bit;\n */\n#ifndef COMPETITIVE_MATH_BIT_HPP\n\
    #define COMPETITIVE_MATH_BIT_HPP 1\n#include <competitive/std/std.hpp>\nnamespace\
    \ bit{\n    bool lb(ll x) { return (x & 1); }\n    bool get(ll x, int n) { return\
    \ ((x >> n) & 1); }\n    ll update(ll x, int n, bool b) { return (x & ~(1LL <<\
    \ n)) + (b << n); }\n    ll lsb(ll x) { return -x & x; }\n    int digit(ll x)\
    \ { int rev=0; while(x) { rev++; x >>= 1; } return rev; }\n    ll msb(ll x) {\
    \ if (x==0) return 0; return 1LL << (digit(x) - 1); }\n    int lsbd(ll x) {return\
    \ digit(lsb(x)); }\n    int count(ll x) { int rev=0; while(x) { if (lb(x)) rev++;\
    \ x >>= 1; } return rev; }\n    string to_string(ll x, bool rev=true) { stringstream\
    \ ss; while (x) { ss << lb(x); x >>= 1;} string s(ss.str()); if (rev) reverse(all(s));\
    \ return s; }\n}\n#endif // COMPETITIVE_MATH_BIT_HPP"
  dependsOn:
  - competitive/std/std.hpp
  isVerificationFile: false
  path: competitive/math/bit.hpp
  requiredBy: []
  timestamp: '2023-02-26 03:11:42+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: competitive/math/bit.hpp
layout: document
redirect_from:
- /library/competitive/math/bit.hpp
- /library/competitive/math/bit.hpp.html
title: competitive/math/bit.hpp
---
