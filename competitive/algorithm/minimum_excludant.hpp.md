---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: competitive/std/std.hpp
    title: std.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    _deprecated_at_docs: docs/algorithm/minimum_excludant.md
    document_title: minimum_excludant.hpp
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
    \ * @docs docs/std/std.md\n */\n#line 3 \"competitive/algorithm/minimum_excludant.hpp\"\
    \n// return index_of a for longest common subsequence\ntemplate <class T> struct\
    \ Mex {\nprivate:\n    set<pair<T, T>> s;\n\npublic:\n    Mex(T inf=INF) {\n \
    \       s.emplace(-inf, -inf);\n        s.emplace(inf, inf);\n    }\n\n    bool\
    \ contains(T x) const {\n        auto it = prev(s.lower_bound(make_pair(x+1, x+1)));\n\
    \        auto [l, u] = *it;\n        return l <= x && x <= u;\n    }\n\n    bool\
    \ insert(T x) {\n        auto nit = s.lower_bound(make_pair(x+1, x+1));\n    \
    \    auto it = prev(nit);\n        auto [l, u] = *it;\n        auto [nl, nu] =\
    \ *nit;\n        if (l <= x && x <= u) return false;\n        if (u == x-1) {\n\
    \            if (nl == x+1) {\n                s.erase(it);\n                s.erase(nit);\n\
    \                s.emplace(l, nu);\n            } else {\n                s.erase(it);\n\
    \                s.emplace(l, x);\n            }\n        } else {\n         \
    \   if (nl == x+1) {\n                s.erase(nit);\n                s.emplace(x,\
    \ nu);\n            } else {\n                s.emplace(x, x);\n            }\n\
    \        }\n        return true;\n    }\n\n    bool erase(T x) {\n        auto\
    \ nit = s.lower_bound(make_pair(x+1, x+1));\n        auto it = prev(nit);\n  \
    \      auto [l, u] = *it;\n        if (x < l || u < x) return false;\n       \
    \ if (l == x) {\n            if (u == x) {\n                s.erase(it);\n   \
    \         } else {\n                s.erase(it);\n                s.emplace(l+1,\
    \ u);\n            }\n            return true;\n        }\n        if (u == x)\
    \ {\n            s.erase(it);\n            s.emplace(l, u-1);\n            return\
    \ true;\n        }\n        s.erase(it);\n        s.emplace(l, x-1);\n       \
    \ s.emplace(x+1, u);\n        return true;\n    }\n\n    T mex(T x = 0) const\
    \ {\n        auto [l, u] = *prev(s.lower_bound(make_pair(x+1, x+1)));\n      \
    \  if (l <= x && x <= u) {\n            return u+1;\n        } else {\n      \
    \      return x;\n        }\n    }\n};\n/**\n * @brief minimum_excludant.hpp\n\
    \ * @docs docs/algorithm/minimum_excludant.md\n */\n"
  code: "#pragma once\n#include \"competitive/std/std.hpp\"\n// return index_of a\
    \ for longest common subsequence\ntemplate <class T> struct Mex {\nprivate:\n\
    \    set<pair<T, T>> s;\n\npublic:\n    Mex(T inf=INF) {\n        s.emplace(-inf,\
    \ -inf);\n        s.emplace(inf, inf);\n    }\n\n    bool contains(T x) const\
    \ {\n        auto it = prev(s.lower_bound(make_pair(x+1, x+1)));\n        auto\
    \ [l, u] = *it;\n        return l <= x && x <= u;\n    }\n\n    bool insert(T\
    \ x) {\n        auto nit = s.lower_bound(make_pair(x+1, x+1));\n        auto it\
    \ = prev(nit);\n        auto [l, u] = *it;\n        auto [nl, nu] = *nit;\n  \
    \      if (l <= x && x <= u) return false;\n        if (u == x-1) {\n        \
    \    if (nl == x+1) {\n                s.erase(it);\n                s.erase(nit);\n\
    \                s.emplace(l, nu);\n            } else {\n                s.erase(it);\n\
    \                s.emplace(l, x);\n            }\n        } else {\n         \
    \   if (nl == x+1) {\n                s.erase(nit);\n                s.emplace(x,\
    \ nu);\n            } else {\n                s.emplace(x, x);\n            }\n\
    \        }\n        return true;\n    }\n\n    bool erase(T x) {\n        auto\
    \ nit = s.lower_bound(make_pair(x+1, x+1));\n        auto it = prev(nit);\n  \
    \      auto [l, u] = *it;\n        if (x < l || u < x) return false;\n       \
    \ if (l == x) {\n            if (u == x) {\n                s.erase(it);\n   \
    \         } else {\n                s.erase(it);\n                s.emplace(l+1,\
    \ u);\n            }\n            return true;\n        }\n        if (u == x)\
    \ {\n            s.erase(it);\n            s.emplace(l, u-1);\n            return\
    \ true;\n        }\n        s.erase(it);\n        s.emplace(l, x-1);\n       \
    \ s.emplace(x+1, u);\n        return true;\n    }\n\n    T mex(T x = 0) const\
    \ {\n        auto [l, u] = *prev(s.lower_bound(make_pair(x+1, x+1)));\n      \
    \  if (l <= x && x <= u) {\n            return u+1;\n        } else {\n      \
    \      return x;\n        }\n    }\n};\n/**\n * @brief minimum_excludant.hpp\n\
    \ * @docs docs/algorithm/minimum_excludant.md\n */\n"
  dependsOn:
  - competitive/std/std.hpp
  isVerificationFile: false
  path: competitive/algorithm/minimum_excludant.hpp
  requiredBy: []
  timestamp: '2023-04-02 18:31:43+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: competitive/algorithm/minimum_excludant.hpp
layout: document
redirect_from:
- /library/competitive/algorithm/minimum_excludant.hpp
- /library/competitive/algorithm/minimum_excludant.hpp.html
title: minimum_excludant.hpp
---