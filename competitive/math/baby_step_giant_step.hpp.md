---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: competitive/math/euler_phi.hpp
    title: euler_phi.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/std/std.hpp
    title: std.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    _deprecated_at_docs: docs/math/baby_step_giant_step.md
    document_title: Baby Step Giant Step
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
    template<typename T> vector<vector<T>> vv(int h, int w, T val = T()) { return\
    \ vector(h, vector<T>(w, val)); }\ntemplate<typename T> vector<vector<vector<T>>>\
    \ vvv(int h1, int h2, int h3, T val = T()) { return vector(h1, vector(h2, vector<T>(h3,\
    \ val))); }\ntemplate<typename T> vector<vector<vector<vector<T>>>> vvvv(int h1,\
    \ int h2, int h3, int h4, T val = T()) { return vector(h1, vector(h2, vector(h3,\
    \ vector<T>(h4, val)))); }\ntemplate <class T> using priority_queue_min = priority_queue<T,\
    \ vector<T>, greater<T>>;\n// \u5B9A\u6570\u306E\u5B9A\u7FA9\nconstexpr double\
    \ PI = 3.14159265358979323;\nconstexpr int INF = 100100111; constexpr ll INFL\
    \ = 3300300300300300491LL;\nfloat EPS = 1e-8; double EPSL = 1e-16;\nbool eq(const\
    \ double x, const double y) { return abs(x - y) < EPSL; }\nbool eq(const float\
    \ x, const float y) { return abs(x - y) < EPS; }\ntemplate<typename T> bool eq(const\
    \ T x, const T y) { return x == y; }\ntemplate<typename T> bool neq(const T x,\
    \ const T y) { return !(eq<T>(x, y)); }\ntemplate<typename T> bool ge(const T\
    \ x, const T y) { return (eq<T>(x, y) || (x > y)); }\ntemplate<typename T> bool\
    \ le(const T x, const T y) { return (eq<T>(x, y) || (x < y)); }\ntemplate<typename\
    \ T> bool gt(const T x, const T y) { return !(le<T>(x, y)); }\ntemplate<typename\
    \ T> bool lt(const T x, const T y) { return !(ge<T>(x, y)); }\nconstexpr int MODINT998244353\
    \ = 998244353;\nconstexpr int MODINT1000000007 = 1000000007;\n// \u5165\u51FA\u529B\
    \u9AD8\u901F\u5316\nstruct Nyan { Nyan() { cin.tie(nullptr); ios::sync_with_stdio(false);\
    \ cout << fixed << setprecision(18); } } nyan;\n// \u6C4E\u7528\u30DE\u30AF\u30ED\
    \u306E\u5B9A\u7FA9\n#define all(a) (a).begin(), (a).end()\n#define sz(x) ((ll)(x).size())\n\
    #define rep1(n) for(ll dummy_iter = 0LL; dummy_iter < n; ++dummy_iter) // 0 \u304B\
    \u3089 n-1 \u307E\u3067\u6607\u9806\n#define rep2(i, n) for(ll i = 0LL, i##_counter\
    \ = 0LL; i##_counter < ll(n); ++(i##_counter), (i) = i##_counter) // 0 \u304B\u3089\
    \ n-1 \u307E\u3067\u6607\u9806\n#define rep3(i, s, t) for(ll i = ll(s), i##_counter\
    \ = ll(s); i##_counter < ll(t); ++(i##_counter), (i) = (i##_counter)) // s \u304B\
    \u3089 t \u307E\u3067\u6607\u9806\n#define rep4(i, s, t, step) for(ll i##_counter\
    \ = step > 0 ? ll(s) : -ll(s), i##_end = step > 0 ? ll(t) : -ll(t), i##_step =\
    \ abs(step), i = ll(s); i##_counter < i##_end; i##_counter += i##_step, i = step\
    \ > 0 ? i##_counter : -i##_counter) // s \u304B\u3089 t \u307E\u3067 step\u305A\
    \u3064\n#define overload4(a, b, c, d, e, ...) e\n#define rep(...) overload4(__VA_ARGS__,\
    \ rep4, rep3, rep2, rep1)(__VA_ARGS__)\n#define repe(a, v) for(auto& a : (v))\
    \ // v \u306E\u5168\u8981\u7D20\uFF08\u5909\u66F4\u53EF\u80FD\uFF09\n#define smod(n,\
    \ m) ((((n) % (m)) + (m)) % (m)) // \u975E\u8CA0mod\n#define sdiv(n, m) (((n)\
    \ - smod(n, m)) / (m)) // \u975E\u8CA0div\n#define uniq(a) {sort(all(a)); (a).erase(unique(all(a)),\
    \ (a).end());} // \u91CD\u8907\u9664\u53BB\nvoid Yes(bool b) { cout << (b ? \"\
    Yes\\n\" : \"No\\n\"); return; };\nvoid YES(bool b) { cout << (b ? \"YES\\n\"\
    \ : \"NO\\n\"); return; };\ntemplate<typename T, size_t N> T max(array<T, N>&\
    \ a) { return *max_element(all(a)); };\ntemplate<typename T, size_t N> T min(array<T,\
    \ N>& a) { return *min_element(all(a)); };\ntemplate<typename T> T max(vector<T>&\
    \ a) { return *max_element(all(a)); };\ntemplate<typename T> T min(vector<T>&\
    \ a) { return *min_element(all(a)); };\ntemplate<typename T> T sum(vector<T>&\
    \ a, T zero = T(0)) { T rev = zero; rep(i, sz(a)) rev += a[i]; return rev; };\n\
    template<typename T> bool in_range(const T& val, const T& s, const T& t) { return\
    \ s <= val && val < t; };\n\ntemplate <class T> inline vector<T>& operator--(vector<T>&\
    \ v) { repe(x, v) --x; return v; }\ntemplate <class T> inline vector<T>& operator++(vector<T>&\
    \ v) { repe(x, v) ++x; return v; }\n\n// mod\u3067\u306Epow\nll powm(ll a, ll\
    \ n, ll mod=INFL) {\n    ll res = 1;\n    while (n > 0) {\n        if (n & 1)\
    \ res = (res * a) % mod;\n        if (n > 1) a = (a * a) % mod;\n        n >>=\
    \ 1;\n    }\n    return res;\n}\n// \u6574\u6570Sqrt\nll sqrtll(ll x) {\n    assert(x\
    \ >= 0);\n    ll rev = sqrt(x);\n    while(rev * rev > x) --rev;\n    while((rev+1)\
    \ * (rev+1)<=x) ++rev;\n    return rev;\n}\ntemplate <class T> inline bool chmax(T&\
    \ M, const T& x) { if (M < x) { M = x; return true; } return false; } // \u6700\
    \u5927\u5024\u3092\u66F4\u65B0\uFF08\u66F4\u65B0\u3055\u308C\u305F\u3089 true\
    \ \u3092\u8FD4\u3059\uFF09\ntemplate <class T> inline bool chmin(T& m, const T&\
    \ x) { if (m > x) { m = x; return true; } return false; } // \u6700\u5C0F\u5024\
    \u3092\u66F4\u65B0\uFF08\u66F4\u65B0\u3055\u308C\u305F\u3089 true \u3092\u8FD4\
    \u3059\uFF09\nint digit(ll x, int d=10) { int rev=0; while (x > 0) { rev++; x\
    \ /= d;}; return rev; } // x\u306Ed\u9032\u6570\u6841\u6570\n/**\n * @brief std.hpp\n\
    \ * @docs docs/std/std.md\n */\n#line 3 \"competitive/math/euler_phi.hpp\"\nll\
    \ euler_phi(ll n) {\n    ll ret = n;\n    for(ll i = 2; i * i <= n; i++) {\n \
    \       if(n % i == 0) {\n            ret -= ret / i;\n            while(n % i\
    \ == 0) n /= i;\n        }\n    }\n    if(n > 1) ret -= ret / n;\n    return ret;\n\
    }\nll inv(ll x, ll mod) {\n    return powm(x, euler_phi(mod)-1, mod);\n}\nvector<ll>\
    \ euler_phi_table(ll n) {\n    vector<ll> euler(n + 1);\n    rep(i, n+1) {\n \
    \       euler[i] = i;\n    }\n    rep(i, 2, n+1) {\n        if(euler[i] == i)\
    \ {\n            rep(j, i, n+1, i) {\n                euler[j] /= i;\n       \
    \         euler[j] *= (i - 1);\n            }\n        }\n    }\n    return euler;\n\
    }\n/**\n * @brief euler_phi.hpp\n * @docs docs/math/euler_phi.md\n */\n#line 4\
    \ \"competitive/math/baby_step_giant_step.hpp\"\n// Find k where x^k = y (mod\
    \ p)\nll baby_step_giant_step(ll x, ll y, ll p) {\n    assert(gcd(x, p) == 1);\n\
    \    ll m = sqrtll(p);\n    unordered_map<ll, int> xpow_pos;\n    ll r = 1;\n\
    \    int cnt = 0;\n    auto insert_xp = [&](){\n        if (!xpow_pos.count(r))\
    \ xpow_pos[r] = cnt++;\n        r = (r * x);\n        r %= p;\n    };\n    rep(i,\
    \ m) { insert_xp(); }\n    while (gcd(r, p) != 1) {\n        m++;\n        insert_xp();\n\
    \    }\n    r = powm(r, euler_phi(p)-1, p);\n    ll rp = y % p;\n    rep(i, m+1)\
    \ {\n        if (xpow_pos.count(rp)) return i * m + xpow_pos[rp];\n        rp\
    \ *= r;\n        rp %= p;\n    }\n    return -1;\n}\n/**\n * @brief Baby Step\
    \ Giant Step\n * @docs docs/math/baby_step_giant_step.md\n */\n"
  code: "#pragma once\n#include \"competitive/std/std.hpp\"\n#include \"competitive/math/euler_phi.hpp\"\
    \n// Find k where x^k = y (mod p)\nll baby_step_giant_step(ll x, ll y, ll p) {\n\
    \    assert(gcd(x, p) == 1);\n    ll m = sqrtll(p);\n    unordered_map<ll, int>\
    \ xpow_pos;\n    ll r = 1;\n    int cnt = 0;\n    auto insert_xp = [&](){\n  \
    \      if (!xpow_pos.count(r)) xpow_pos[r] = cnt++;\n        r = (r * x);\n  \
    \      r %= p;\n    };\n    rep(i, m) { insert_xp(); }\n    while (gcd(r, p) !=\
    \ 1) {\n        m++;\n        insert_xp();\n    }\n    r = powm(r, euler_phi(p)-1,\
    \ p);\n    ll rp = y % p;\n    rep(i, m+1) {\n        if (xpow_pos.count(rp))\
    \ return i * m + xpow_pos[rp];\n        rp *= r;\n        rp %= p;\n    }\n  \
    \  return -1;\n}\n/**\n * @brief Baby Step Giant Step\n * @docs docs/math/baby_step_giant_step.md\n\
    \ */\n"
  dependsOn:
  - competitive/std/std.hpp
  - competitive/math/euler_phi.hpp
  isVerificationFile: false
  path: competitive/math/baby_step_giant_step.hpp
  requiredBy: []
  timestamp: '2023-04-02 18:31:43+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: competitive/math/baby_step_giant_step.hpp
layout: document
redirect_from:
- /library/competitive/math/baby_step_giant_step.hpp
- /library/competitive/math/baby_step_giant_step.hpp.html
title: Baby Step Giant Step
---
以下の離散対数問題を解く。
 （計算量$\sqrt{p}$）

> $x^k \equiv y \ (\mod{p})$となる最小のkを求めよ

# アルゴリズムの概要

### 1. baby step
$m = \left\lceil \sqrt{\varphi (p)} \right\rceil$とする。
$x^0, x^1, \cdots x^{m-1}$を事前計算する。

### 2. giant step
$r = x^{-m}$を計算し、$y r^a$が事前計算した
$x^0, x^1, \cdots x^{m-1}$に現れるまでaを増やしていく。

### 3. 出力
$k = ma + b$を出力する。