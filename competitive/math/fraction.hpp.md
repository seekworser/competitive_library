---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: competitive/std/std.hpp
    title: std.hpp
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
    _deprecated_at_docs: docs/math/fraction.md
    document_title: fraction.hpp
    links: []
  bundledCode: "#line 2 \"competitive/std/std.hpp\"\n#include <bits/stdc++.h>\n#ifndef\
    \ LOCAL_TEST\n#pragma GCC target (\"avx\")\n#pragma GCC optimize(\"O3\")\n#pragma\
    \ GCC optimize(\"unroll-loops\")\n#pragma GCC target(\"sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native\"\
    )\n#endif // LOCAL_TEST\nusing namespace std;\n// \u578B\u540D\u306E\u77ED\u7E2E\
    \nusing ll = long long;\nusing pii = pair<int, int>; using pll = pair<ll, ll>;\n\
    using vi = vector<int>;  using vvi = vector<vi>; using vvvi = vector<vvi>;\nusing\
    \ vl = vector<ll>;  using vvl = vector<vl>; using vvvl = vector<vvl>;\nusing vb\
    \ = vector<bool>; using vvb = vector<vb>; using vvvb = vector<vvb>;\nusing vc\
    \ = vector<char>; using vvc = vector<vc>; using vvvc = vector<vvc>;\nusing vd\
    \ = vector<double>; using vvd = vector<vd>; using vvvd = vector<vvd>;\nusing vs\
    \ = vector<string>; using vvs = vector<vector<string>>; using vvvs = vector<vector<vector<string>>>;\n\
    template <class T> using priority_queue_min = priority_queue<T, vector<T>, greater<T>>;\n\
    // \u5B9A\u6570\u306E\u5B9A\u7FA9\nconstexpr double PI = 3.14159265358979323;\n\
    constexpr int INF = 100100111; constexpr ll INFL = 3300300300300300491LL;\nfloat\
    \ EPS = 1e-8; double EPSL = 1e-16;\nbool eq(const double x, const double y) {\
    \ return abs(x - y) < EPSL; }\nbool eq(const float x, const float y) { return\
    \ abs(x - y) < EPS; }\ntemplate<typename T> bool eq(const T x, const T y) { return\
    \ x == y; }\ntemplate<typename T> bool neq(const T x, const T y) { return !(eq(x,\
    \ y)); }\ntemplate<typename T> bool ge(const T x, const T y) { return eq(x, y)\
    \ || (x > y); }\ntemplate<typename T> bool le(const T x, const T y) { return eq(x,\
    \ y) || (x < y); }\ntemplate<typename T> bool gt(const T x, const T y) { return\
    \ !(le(x, y)); }\ntemplate<typename T> bool lt(const T x, const T y) { return\
    \ !(ge(x, y)); }\nconstexpr int MODINT998244353 = 998244353;\nconstexpr int MODINT1000000007\
    \ = 1000000007;\n// \u5165\u51FA\u529B\u9AD8\u901F\u5316\nstruct Nyan { Nyan()\
    \ { cin.tie(nullptr); ios::sync_with_stdio(false); cout << fixed << setprecision(18);\
    \ } } nyan;\n// \u6C4E\u7528\u30DE\u30AF\u30ED\u306E\u5B9A\u7FA9\n#define all(a)\
    \ (a).begin(), (a).end()\n#define sz(x) ((int)(x).size())\n#define rep(i, n) for(ll\
    \ i = 0, i##_len = ll(n); i < i##_len; ++i) // 0 \u304B\u3089 n-1 \u307E\u3067\
    \u6607\u9806\n#define repi(i, s, t) for(ll i = ll(s), i##_end = ll(t); i < i##_end;\
    \ ++i) // s \u304B\u3089 t \u307E\u3067\u6607\u9806\n#define repis(i, s, t, step)\
    \ for(ll i = ll(s), i##_end = ll(t); i < i##_end; i+=step) // s \u304B\u3089 t\
    \ \u307E\u3067 step\u305A\u3064\n#define repir(i, s, t, step) for(ll i = ll(s),\
    \ i##_end = ll(t); i > i##_end; i+=step) // s \u304B\u3089 t \u307E\u3067 step\u305A\
    \u3064\n#define repe(a, v) for(auto& a : (v)) // v \u306E\u5168\u8981\u7D20\uFF08\
    \u5909\u66F4\u53EF\u80FD\uFF09\n#define smod(n, m) ((((n) % (m)) + (m)) % (m))\
    \ // \u975E\u8CA0mod\n#define sdiv(n, m) (((n) - smod(n, m)) / (m)) // \u975E\u8CA0\
    div\n#define uniq(a) {sort(all(a)); (a).erase(unique(all(a)), (a).end());} //\
    \ \u91CD\u8907\u9664\u53BB\nvoid Yes(bool b) { cout << (b ? \"Yes\\n\" : \"No\\\
    n\"); return; };\nvoid YES(bool b) { cout << (b ? \"YES\\n\" : \"NO\\n\"); return;\
    \ };\ntemplate<typename T, size_t N> T max(array<T, N>& a) { return *max_element(all(a));\
    \ };\ntemplate<typename T, size_t N> T min(array<T, N>& a) { return *min_element(all(a));\
    \ };\ntemplate<typename T> T max(vector<T>& a) { return *max_element(all(a));\
    \ };\ntemplate<typename T> T min(vector<T>& a) { return *min_element(all(a));\
    \ };\ntemplate<typename T> T sum(vector<T>& a, T zero = T(0)) { T rev = zero;\
    \ rep(i, sz(a)) rev += a[i]; return rev; };\n\n// mod\u3067\u306Epow\nll powm(ll\
    \ a, ll n, ll mod=INFL) {\n    ll res = 1;\n    while (n > 0) {\n        if (n\
    \ & 1) res = (res * a) % mod;\n        if (n > 1) a = (a * a) % mod;\n       \
    \ n >>= 1;\n    }\n    return res;\n}\n// \u6574\u6570Sqrt\nll sqrtll(ll x) {\n\
    \    assert(x >= 0);\n    ll hi(x), lo(0);\n    while (hi != lo) {\n        ll\
    \ y = (hi + lo + 1) / 2;\n        if (y <= x/y) lo = y;\n        else hi = y -\
    \ 1;\n    }\n    return lo;\n}\ntemplate <class T> inline bool chmax(T& M, const\
    \ T& x) { if (M < x) { M = x; return true; } return false; } // \u6700\u5927\u5024\
    \u3092\u66F4\u65B0\uFF08\u66F4\u65B0\u3055\u308C\u305F\u3089 true \u3092\u8FD4\
    \u3059\uFF09\ntemplate <class T> inline bool chmin(T& m, const T& x) { if (m >\
    \ x) { m = x; return true; } return false; } // \u6700\u5C0F\u5024\u3092\u66F4\
    \u65B0\uFF08\u66F4\u65B0\u3055\u308C\u305F\u3089 true \u3092\u8FD4\u3059\uFF09\
    \nint digit(ll x, int d=10) { int rev=0; while (x > 0) { rev++; x /= d;}; return\
    \ rev; } // x\u306Ed\u9032\u6570\u6841\u6570\n/**\n * @brief std.hpp\n * @docs\
    \ docs/std/std.md\n */\n#line 3 \"competitive/math/fraction.hpp\"\nstruct Frac\
    \ {\n    ll num;\n    ll den;\n    Frac (ll _num, ll _den, bool reduce = true)\
    \ : num(_num), den(_den) {\n        if (reduce) (*this).reduce();\n    }\n   \
    \ Frac (ll _num) : Frac(_num, 1) {}\n    static ll redcue_limit;\n\n    Frac inv()\
    \ const { return Frac((*this).den, (*this).num); }\n    Frac &operator+=(const\
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
    \ (rev.den * rev.num < 0) return -rev;\n    return rev;\n}\n/**\n * @brief fraction.hpp\n\
    \ * @docs docs/math/fraction.md\n */\n"
  code: "#pragma once\n#include \"competitive/std/std.hpp\"\nstruct Frac {\n    ll\
    \ num;\n    ll den;\n    Frac (ll _num, ll _den, bool reduce = true) : num(_num),\
    \ den(_den) {\n        if (reduce) (*this).reduce();\n    }\n    Frac (ll _num)\
    \ : Frac(_num, 1) {}\n    static ll redcue_limit;\n\n    Frac inv() const { return\
    \ Frac((*this).den, (*this).num); }\n    Frac &operator+=(const Frac &x) {\n \
    \       (*this).num = (*this).num * x.den + x.num * (*this).den;\n        (*this).den\
    \ = (*this).den * x.den;\n        if ((*this).den > redcue_limit || (*this).num\
    \ > redcue_limit) (*this).reduce();\n        return (*this);\n    }\n    Frac\
    \ &operator-=(const Frac &x) {\n        (*this).num = (*this).num * x.den - x.num\
    \ * (*this).den;\n        (*this).den = (*this).den * x.den;\n        if ((*this).den\
    \ > redcue_limit || (*this).num > redcue_limit) (*this).reduce();\n        return\
    \ (*this);\n    }\n    Frac &operator*=(const Frac &x) {\n        (*this).num\
    \ = (*this).num * x.num;\n        (*this).den = (*this).den * x.den;\n       \
    \ if ((*this).den > redcue_limit || (*this).num > redcue_limit) (*this).reduce();\n\
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
    \ (rev.den * rev.num < 0) return -rev;\n    return rev;\n}\n/**\n * @brief fraction.hpp\n\
    \ * @docs docs/math/fraction.md\n */\n"
  dependsOn:
  - competitive/std/std.hpp
  isVerificationFile: false
  path: competitive/math/fraction.hpp
  requiredBy: []
  timestamp: '2023-02-28 16:59:41+09:00'
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
title: fraction.hpp
---
