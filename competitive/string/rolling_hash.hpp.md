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
  bundledCode: "#line 1 \"competitive/string/rolling_hash.hpp\"\n\n\n#include <competitive/std/std.hpp>\n\
    using hash_t = unsigned long long;\nusing hash_vector_t = vector<hash_t>;\nconstexpr\
    \ hash_t RHMOD = (1UL << 61) - 1;\nconstexpr hash_t RHR = 37;\n\nnamespace internal\
    \ {\n    const hash_t MASK30 = (1UL << 30) - 1;\n    const hash_t MASK31 = (1UL\
    \ << 31) - 1;\n    const hash_t MASK61 = RHMOD;\n\n    //mod 2^61-1\u3092\u8A08\
    \u7B97\u3059\u308B\u95A2\u6570\n    hash_t CalcMod(hash_t x) {\n        hash_t\
    \ xu = x >> 61;\n        hash_t xd = x & MASK61;\n        hash_t res = xu + xd;\n\
    \        if (res >= RHMOD) res -= RHMOD;\n        return res;\n    }\n\n    //a*b\
    \ mod 2^61-1\u3092\u8FD4\u3059\u95A2\u6570(\u6700\u5F8C\u306BMod\u3092\u53D6\u308B\
    )\n    hash_t Mul(hash_t a, hash_t b) {\n        hash_t au = a >> 31;\n      \
    \  hash_t ad = a & MASK31;\n        hash_t bu = b >> 31;\n        hash_t bd =\
    \ b & MASK31;\n        hash_t mid = ad * bu + au * bd;\n        hash_t midu =\
    \ mid >> 30;\n        hash_t midd = mid & MASK30;\n        return CalcMod(au *\
    \ bu * 2 + midu + (midd << 31) + ad * bd);\n    }\n\n    hash_t Pow(hash_t a,\
    \ hash_t n) {\n        hash_t res = 1;\n        while (n > 0) {\n            if\
    \ (n & 1) res = Mul(res, a);\n            a = Mul(a, a);\n            n >>= 1;\n\
    \        }\n        return res;\n    }\n}\n\nstruct RollingHash {\n    int hash_size;\n\
    \    ll maxa;\n    vector<hash_t> base;\n    RollingHash(int hash_size=3, ll maxa=1e9)\
    \ : hash_size(hash_size), maxa(maxa), base() {\n        random_device seed_gen;\n\
    \        mt19937 engine(seed_gen());\n        while (sz(base) < hash_size) {\n\
    \            hash_t k = 0;\n            hash_t b = internal::Pow(RHR, k);\n  \
    \          while (b <= maxa || gcd(RHMOD-1, b) != 1) {\n                k = engine();\n\
    \                b = internal::Pow(RHR, k);\n            }\n            base.push_back(b);\n\
    \        }\n        return;\n    };\n\n    template <class T> vector<hash_vector_t>\
    \ calc_hash(vector<T> const &a, int k){\n        assert(sz(a) >= k);\n       \
    \ vector<hash_vector_t> res(sz(a) - k + 1, vector<hash_t>(hash_size));\n     \
    \   vector<hash_t> base_pow(hash_size);\n        rep(i, hash_size) base_pow[i]\
    \ = internal::Pow(this->base[i], k);\n\n        rep(i, hash_size) {\n        \
    \    // \u5148\u982D\u306E\u30CF\u30C3\u30B7\u30E5\u8A08\u7B97\n            hash_t\
    \ b = this->base[i];\n            hash_t sh = 0;\n            rep(j, k){ sh =\
    \ internal::CalcMod(internal::Mul(sh, b) + a[j]); }\n            res[0][i] = sh;\n\
    \n            // s\u3092\u305A\u3089\u3057\u3066\u30CF\u30C3\u30B7\u30E5\u5024\
    \u3092\u66F4\u65B0\n            rep(j, sz(a) - k){\n                sh = internal::CalcMod(internal::Mul(sh,\
    \ b) + a[j+k] + RHMOD - internal::Mul(a[j], base_pow[i]));\n                res[j+1][i]\
    \ = sh;\n            }\n        }\n        return res;\n    }\n\n    vector<hash_vector_t>\
    \ calc_hash(string const &a, int k) {\n        vector<char> _a(a.begin(), a.end());\n\
    \        return calc_hash(_a, k);\n    };\n};\n\n"
  code: "#ifndef COMPETITIVE_STRING_ROLLINGHASH_HPP\n#define COMPETITIVE_STRING_ROLLINGHASH_HPP\
    \ 1\n#include <competitive/std/std.hpp>\nusing hash_t = unsigned long long;\n\
    using hash_vector_t = vector<hash_t>;\nconstexpr hash_t RHMOD = (1UL << 61) -\
    \ 1;\nconstexpr hash_t RHR = 37;\n\nnamespace internal {\n    const hash_t MASK30\
    \ = (1UL << 30) - 1;\n    const hash_t MASK31 = (1UL << 31) - 1;\n    const hash_t\
    \ MASK61 = RHMOD;\n\n    //mod 2^61-1\u3092\u8A08\u7B97\u3059\u308B\u95A2\u6570\
    \n    hash_t CalcMod(hash_t x) {\n        hash_t xu = x >> 61;\n        hash_t\
    \ xd = x & MASK61;\n        hash_t res = xu + xd;\n        if (res >= RHMOD) res\
    \ -= RHMOD;\n        return res;\n    }\n\n    //a*b mod 2^61-1\u3092\u8FD4\u3059\
    \u95A2\u6570(\u6700\u5F8C\u306BMod\u3092\u53D6\u308B)\n    hash_t Mul(hash_t a,\
    \ hash_t b) {\n        hash_t au = a >> 31;\n        hash_t ad = a & MASK31;\n\
    \        hash_t bu = b >> 31;\n        hash_t bd = b & MASK31;\n        hash_t\
    \ mid = ad * bu + au * bd;\n        hash_t midu = mid >> 30;\n        hash_t midd\
    \ = mid & MASK30;\n        return CalcMod(au * bu * 2 + midu + (midd << 31) +\
    \ ad * bd);\n    }\n\n    hash_t Pow(hash_t a, hash_t n) {\n        hash_t res\
    \ = 1;\n        while (n > 0) {\n            if (n & 1) res = Mul(res, a);\n \
    \           a = Mul(a, a);\n            n >>= 1;\n        }\n        return res;\n\
    \    }\n}\n\nstruct RollingHash {\n    int hash_size;\n    ll maxa;\n    vector<hash_t>\
    \ base;\n    RollingHash(int hash_size=3, ll maxa=1e9) : hash_size(hash_size),\
    \ maxa(maxa), base() {\n        random_device seed_gen;\n        mt19937 engine(seed_gen());\n\
    \        while (sz(base) < hash_size) {\n            hash_t k = 0;\n         \
    \   hash_t b = internal::Pow(RHR, k);\n            while (b <= maxa || gcd(RHMOD-1,\
    \ b) != 1) {\n                k = engine();\n                b = internal::Pow(RHR,\
    \ k);\n            }\n            base.push_back(b);\n        }\n        return;\n\
    \    };\n\n    template <class T> vector<hash_vector_t> calc_hash(vector<T> const\
    \ &a, int k){\n        assert(sz(a) >= k);\n        vector<hash_vector_t> res(sz(a)\
    \ - k + 1, vector<hash_t>(hash_size));\n        vector<hash_t> base_pow(hash_size);\n\
    \        rep(i, hash_size) base_pow[i] = internal::Pow(this->base[i], k);\n\n\
    \        rep(i, hash_size) {\n            // \u5148\u982D\u306E\u30CF\u30C3\u30B7\
    \u30E5\u8A08\u7B97\n            hash_t b = this->base[i];\n            hash_t\
    \ sh = 0;\n            rep(j, k){ sh = internal::CalcMod(internal::Mul(sh, b)\
    \ + a[j]); }\n            res[0][i] = sh;\n\n            // s\u3092\u305A\u3089\
    \u3057\u3066\u30CF\u30C3\u30B7\u30E5\u5024\u3092\u66F4\u65B0\n            rep(j,\
    \ sz(a) - k){\n                sh = internal::CalcMod(internal::Mul(sh, b) + a[j+k]\
    \ + RHMOD - internal::Mul(a[j], base_pow[i]));\n                res[j+1][i] =\
    \ sh;\n            }\n        }\n        return res;\n    }\n\n    vector<hash_vector_t>\
    \ calc_hash(string const &a, int k) {\n        vector<char> _a(a.begin(), a.end());\n\
    \        return calc_hash(_a, k);\n    };\n};\n#endif // COMPETITIVE_STRING_ROLLINGHASH_HPP"
  dependsOn:
  - competitive/std/std.hpp
  isVerificationFile: false
  path: competitive/string/rolling_hash.hpp
  requiredBy: []
  timestamp: '2023-02-22 09:47:28+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: competitive/string/rolling_hash.hpp
layout: document
redirect_from:
- /library/competitive/string/rolling_hash.hpp
- /library/competitive/string/rolling_hash.hpp.html
title: competitive/string/rolling_hash.hpp
---
