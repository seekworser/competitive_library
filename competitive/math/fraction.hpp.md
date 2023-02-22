---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: competitive/std/std.hpp
    title: competitive/std/std.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/CGL_1_A.test.cpp
    title: online_test/AOJ/CGL_1_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/CGL_1_B.test.cpp
    title: online_test/AOJ/CGL_1_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/CGL_1_C.test.cpp
    title: online_test/AOJ/CGL_1_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/CGL_2_A.test.cpp
    title: online_test/AOJ/CGL_2_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/CGL_2_B.test.cpp
    title: online_test/AOJ/CGL_2_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/CGL_2_C.test.cpp
    title: online_test/AOJ/CGL_2_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/CGL_3_B.test.cpp
    title: online_test/AOJ/CGL_3_B.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"competitive/math/fraction.hpp\"\n\n\n#include <competitive/std/std.hpp>\n\
    struct Frac {\n    ll num;\n    ll den;\n    Frac (ll _num, ll _den, bool reduce\
    \ = true) : num(_num), den(_den) {\n        if (reduce) (*this).reduce();\n  \
    \  }\n    Frac (ll _num) : Frac(_num, 1) {}\n    static ll redcue_limit;\n\n \
    \   Frac inv() const { return Frac((*this).den, (*this).num); }\n    Frac &operator+=(const\
    \ Frac &x) {\n        (*this).num = (*this).num * x.den + x.num * (*this).den;\n\
    \        (*this).den = (*this).den * x.den;\n        if ((*this).den > redcue_limit\
    \ || (*this).num > redcue_limit) (*this).reduce();\n        return (*this);\n\
    \    }\n    Frac &operator-=(const Frac &x) {\n        (*this).num = (*this).num\
    \ * x.den - x.num * (*this).den;\n        (*this).den = (*this).den * x.den;\n\
    \        if ((*this).den > redcue_limit || (*this).num > redcue_limit) (*this).reduce();\n\
    \        return (*this);\n    }\n    Frac &operator*=(const Frac &x) {\n     \
    \   (*this).num = (*this).num * x.num;\n        (*this).den = (*this).den * x.den;\n\
    \        if ((*this).den > redcue_limit || (*this).num > redcue_limit) (*this).reduce();\n\
    \        return (*this);\n    }\n    Frac &operator/=(const Frac &x) {\n     \
    \   (*this) *= x.inv();\n        if ((*this).den > redcue_limit || (*this).num\
    \ > redcue_limit) (*this).reduce();\n        return (*this);\n    }\n    Frac\
    \ operator+(const Frac &x) const { return (Frac(*this) += x); }\n    Frac operator-(const\
    \ Frac &x) const { return (Frac(*this) -= x); }\n    Frac operator*(const Frac\
    \ &x) const { return (Frac(*this) *= x); }\n    Frac operator/(const Frac &x)\
    \ const { return (Frac(*this) /= x); }\n\n    Frac operator+() const { return\
    \ *this; }\n    Frac operator-() const { Frac x(-(*this).num, (*this).den); return\
    \ x; }\n    friend bool operator==(const Frac& lhs, const Frac& rhs) {\n     \
    \   return lhs.num * rhs.den == lhs.den * rhs.num;\n    }\n    friend bool operator!=(const\
    \ Frac& lhs, const Frac& rhs) {\n        return lhs.num * rhs.den != lhs.den *\
    \ rhs.num;\n    }\n    friend bool operator>=(const Frac& lhs, const Frac& rhs)\
    \ {\n        return lhs.num * rhs.den >= lhs.den * rhs.num;\n    }\n    friend\
    \ bool operator<=(const Frac& lhs, const Frac& rhs) {\n        return lhs.num\
    \ * rhs.den <= lhs.den * rhs.num;\n    }\n    friend bool operator>(const Frac&\
    \ lhs, const Frac& rhs) {\n        return lhs.num * rhs.den > lhs.den * rhs.num;\n\
    \    }\n    friend bool operator<(const Frac& lhs, const Frac& rhs) {\n      \
    \  return lhs.num * rhs.den < lhs.den * rhs.num;\n    }\n\n    double val() const\
    \ {return (double)((*this).num) / (double)((*this).den); }\n    friend ostream&\
    \ operator<<(ostream& os, const Frac &x) { os << x.val(); return os; }\n    void\
    \ reduce() {\n        assert((*this).den != 0 || (*this).num != 0);\n        if\
    \ ((*this).den == 0) { (*this).num = 1; return; }\n        if ((*this).num ==\
    \ 0) { (*this).den = 1; return; }\n        ll g = gcd((*this).num, (*this).den);\n\
    \        (*this).num /= g;\n        (*this).den /= g;\n        if ((*this).den\
    \ < 0) {\n            (*this).num *= -1;\n            (*this).den *= -1;\n   \
    \     }\n        return;\n    }\n};\nll Frac::redcue_limit = 1000000000;\nFrac\
    \ pow(const Frac &a, ll n) {\n    Frac res(1); Frac cur(a);\n    while (n > 0)\
    \ {\n        if (n & 1) res *= cur;\n        cur *= cur;\n        n >>= 1;\n \
    \   }\n    return res;\n}\nFrac abs(const Frac &f) {\n    Frac rev(f);\n    if\
    \ (rev.den * rev.num < 0) return -rev;\n    return rev;\n}\n\n"
  code: "#ifndef COMPETITIVE_MATH_FRACTION_HPP\n#define COMPETITIVE_MATH_FRACTION_HPP\
    \ 1\n#include <competitive/std/std.hpp>\nstruct Frac {\n    ll num;\n    ll den;\n\
    \    Frac (ll _num, ll _den, bool reduce = true) : num(_num), den(_den) {\n  \
    \      if (reduce) (*this).reduce();\n    }\n    Frac (ll _num) : Frac(_num, 1)\
    \ {}\n    static ll redcue_limit;\n\n    Frac inv() const { return Frac((*this).den,\
    \ (*this).num); }\n    Frac &operator+=(const Frac &x) {\n        (*this).num\
    \ = (*this).num * x.den + x.num * (*this).den;\n        (*this).den = (*this).den\
    \ * x.den;\n        if ((*this).den > redcue_limit || (*this).num > redcue_limit)\
    \ (*this).reduce();\n        return (*this);\n    }\n    Frac &operator-=(const\
    \ Frac &x) {\n        (*this).num = (*this).num * x.den - x.num * (*this).den;\n\
    \        (*this).den = (*this).den * x.den;\n        if ((*this).den > redcue_limit\
    \ || (*this).num > redcue_limit) (*this).reduce();\n        return (*this);\n\
    \    }\n    Frac &operator*=(const Frac &x) {\n        (*this).num = (*this).num\
    \ * x.num;\n        (*this).den = (*this).den * x.den;\n        if ((*this).den\
    \ > redcue_limit || (*this).num > redcue_limit) (*this).reduce();\n        return\
    \ (*this);\n    }\n    Frac &operator/=(const Frac &x) {\n        (*this) *= x.inv();\n\
    \        if ((*this).den > redcue_limit || (*this).num > redcue_limit) (*this).reduce();\n\
    \        return (*this);\n    }\n    Frac operator+(const Frac &x) const { return\
    \ (Frac(*this) += x); }\n    Frac operator-(const Frac &x) const { return (Frac(*this)\
    \ -= x); }\n    Frac operator*(const Frac &x) const { return (Frac(*this) *= x);\
    \ }\n    Frac operator/(const Frac &x) const { return (Frac(*this) /= x); }\n\n\
    \    Frac operator+() const { return *this; }\n    Frac operator-() const { Frac\
    \ x(-(*this).num, (*this).den); return x; }\n    friend bool operator==(const\
    \ Frac& lhs, const Frac& rhs) {\n        return lhs.num * rhs.den == lhs.den *\
    \ rhs.num;\n    }\n    friend bool operator!=(const Frac& lhs, const Frac& rhs)\
    \ {\n        return lhs.num * rhs.den != lhs.den * rhs.num;\n    }\n    friend\
    \ bool operator>=(const Frac& lhs, const Frac& rhs) {\n        return lhs.num\
    \ * rhs.den >= lhs.den * rhs.num;\n    }\n    friend bool operator<=(const Frac&\
    \ lhs, const Frac& rhs) {\n        return lhs.num * rhs.den <= lhs.den * rhs.num;\n\
    \    }\n    friend bool operator>(const Frac& lhs, const Frac& rhs) {\n      \
    \  return lhs.num * rhs.den > lhs.den * rhs.num;\n    }\n    friend bool operator<(const\
    \ Frac& lhs, const Frac& rhs) {\n        return lhs.num * rhs.den < lhs.den *\
    \ rhs.num;\n    }\n\n    double val() const {return (double)((*this).num) / (double)((*this).den);\
    \ }\n    friend ostream& operator<<(ostream& os, const Frac &x) { os << x.val();\
    \ return os; }\n    void reduce() {\n        assert((*this).den != 0 || (*this).num\
    \ != 0);\n        if ((*this).den == 0) { (*this).num = 1; return; }\n       \
    \ if ((*this).num == 0) { (*this).den = 1; return; }\n        ll g = gcd((*this).num,\
    \ (*this).den);\n        (*this).num /= g;\n        (*this).den /= g;\n      \
    \  if ((*this).den < 0) {\n            (*this).num *= -1;\n            (*this).den\
    \ *= -1;\n        }\n        return;\n    }\n};\nll Frac::redcue_limit = 1000000000;\n\
    Frac pow(const Frac &a, ll n) {\n    Frac res(1); Frac cur(a);\n    while (n >\
    \ 0) {\n        if (n & 1) res *= cur;\n        cur *= cur;\n        n >>= 1;\n\
    \    }\n    return res;\n}\nFrac abs(const Frac &f) {\n    Frac rev(f);\n    if\
    \ (rev.den * rev.num < 0) return -rev;\n    return rev;\n}\n#endif // COMPETITIVE_MATH_FRACTION_HPP"
  dependsOn:
  - competitive/std/std.hpp
  isVerificationFile: false
  path: competitive/math/fraction.hpp
  requiredBy: []
  timestamp: '2023-02-22 09:47:28+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - online_test/AOJ/CGL_2_C.test.cpp
  - online_test/AOJ/CGL_2_B.test.cpp
  - online_test/AOJ/CGL_1_A.test.cpp
  - online_test/AOJ/CGL_2_A.test.cpp
  - online_test/AOJ/CGL_1_B.test.cpp
  - online_test/AOJ/CGL_1_C.test.cpp
  - online_test/AOJ/CGL_3_B.test.cpp
documentation_of: competitive/math/fraction.hpp
layout: document
redirect_from:
- /library/competitive/math/fraction.hpp
- /library/competitive/math/fraction.hpp.html
title: competitive/math/fraction.hpp
---
