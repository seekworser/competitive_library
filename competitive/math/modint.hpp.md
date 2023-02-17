---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: atcoder/internal_math.hpp
    title: atcoder/internal_math.hpp
  - icon: ':warning:'
    path: atcoder/internal_type_traits.hpp
    title: atcoder/internal_type_traits.hpp
  - icon: ':warning:'
    path: atcoder/modint.hpp
    title: atcoder/modint.hpp
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
  bundledCode: '#line 1 "competitive/math/modint.hpp"



    #include <competitive/std/std.hpp>

    #include <atcoder/modint.hpp>

    // istream in not working...

    inline std::istream& operator>>(std::istream& is, atcoder::modint& x);

    inline std::istream& operator>>(std::istream& is, atcoder::modint998244353& x);

    inline std::istream& operator>>(std::istream& is, atcoder::modint1000000007& x);

    inline std::ostream& operator<<(std::ostream& os, const atcoder::modint& x);

    inline std::ostream& operator<<(std::ostream& os, const atcoder::modint998244353&
    x);

    inline std::ostream& operator<<(std::ostream& os, const atcoder::modint1000000007&
    x);

    inline std::istream& operator>>(std::istream& is, atcoder::modint& x) {ll a; is
    >> a; x = a; return is; }

    inline std::istream& operator>>(std::istream& is, atcoder::modint998244353& x)
    {ll a; is >> a; x = a; return is; }

    inline std::istream& operator>>(std::istream& is, atcoder::modint1000000007& x)
    {ll a; is >> a; x = a; return is; }

    inline std::ostream& operator<<(std::ostream& os, const atcoder::modint& x) {
    os << x.val(); return os; }

    inline std::ostream& operator<<(std::ostream& os, const atcoder::modint998244353&
    x) { os << x.val(); return os; }

    inline std::ostream& operator<<(std::ostream& os, const atcoder::modint1000000007&
    x) { os << x.val(); return os; }

    using modint998244353 = atcoder::modint998244353;

    using modint1000000007 = atcoder::modint1000000007;

    using modint = atcoder::modint;


    '
  code: '#ifndef COMPETITIVE_MATH_MODINT_HPP

    #define COMPETITIVE_MATH_MODINT_HPP 1

    #include <competitive/std/std.hpp>

    #include <atcoder/modint.hpp>

    // istream in not working...

    inline std::istream& operator>>(std::istream& is, atcoder::modint& x);

    inline std::istream& operator>>(std::istream& is, atcoder::modint998244353& x);

    inline std::istream& operator>>(std::istream& is, atcoder::modint1000000007& x);

    inline std::ostream& operator<<(std::ostream& os, const atcoder::modint& x);

    inline std::ostream& operator<<(std::ostream& os, const atcoder::modint998244353&
    x);

    inline std::ostream& operator<<(std::ostream& os, const atcoder::modint1000000007&
    x);

    inline std::istream& operator>>(std::istream& is, atcoder::modint& x) {ll a; is
    >> a; x = a; return is; }

    inline std::istream& operator>>(std::istream& is, atcoder::modint998244353& x)
    {ll a; is >> a; x = a; return is; }

    inline std::istream& operator>>(std::istream& is, atcoder::modint1000000007& x)
    {ll a; is >> a; x = a; return is; }

    inline std::ostream& operator<<(std::ostream& os, const atcoder::modint& x) {
    os << x.val(); return os; }

    inline std::ostream& operator<<(std::ostream& os, const atcoder::modint998244353&
    x) { os << x.val(); return os; }

    inline std::ostream& operator<<(std::ostream& os, const atcoder::modint1000000007&
    x) { os << x.val(); return os; }

    using modint998244353 = atcoder::modint998244353;

    using modint1000000007 = atcoder::modint1000000007;

    using modint = atcoder::modint;

    #endif // COMPETITIVE_MATH_MODINT_HPP'
  dependsOn:
  - competitive/std/std.hpp
  - atcoder/modint.hpp
  - atcoder/internal_math.hpp
  - atcoder/internal_type_traits.hpp
  isVerificationFile: false
  path: competitive/math/modint.hpp
  requiredBy: []
  timestamp: '2023-02-17 21:43:12+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: competitive/math/modint.hpp
layout: document
redirect_from:
- /library/competitive/math/modint.hpp
- /library/competitive/math/modint.hpp.html
title: competitive/math/modint.hpp
---
