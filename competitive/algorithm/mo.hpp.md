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
    _deprecated_at_docs: docs/algorithm/mo.md
    document_title: mo.hpp
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
    \ docs/std/std.md\n */\n#line 3 \"competitive/algorithm/mo.hpp\"\ntemplate<typename\
    \ Rev_t> struct Mo {\n    int range_min, range_max;\n    using query_t = tuple<int,\
    \ int, int>;\n    vector<query_t> query;\n    Mo() {};\n    Mo(const vector<pii>&\
    \ lr) : range_min(INF), range_max(-INF) {\n        rep(i, sz(lr)) {\n        \
    \    assert(lr[i].first <= lr[i].second);\n            query.emplace_back(lr[i].first,\
    \ lr[i].second, i);\n            chmin((*this).range_min, lr[i].first);\n    \
    \        chmax((*this).range_max, lr[i].second);\n        }\n    }\n    Mo(const\
    \ vi& l, const vi& r) : range_min(INF), range_max(-INF) {\n        assert(sz(l)\
    \ == sz(r));\n        rep(i, sz(l)) {\n            assert(l[i] <= r[i]);\n   \
    \         query.emplace_back(l[i], r[i], i);\n            chmin((*this).range_min,\
    \ l[i]);\n            chmax((*this).range_max, r[i]);\n        }\n    }\n    void\
    \ add_query(int l, int r) {\n        (*this).query.emplace_back(l, r, sz((*this).query));\n\
    \    }\n    template<typename AL, typename AR, typename DL, typename DR, typename\
    \ GET>\n    vector<Rev_t> answer(\n        const AL& add_left,\n        const\
    \ AR& add_right,\n        const DL& delete_left,\n        const DR& delete_right,\n\
    \        const GET& get,\n        int init_l = 0,\n        int init_r = 0\n  \
    \  ) {\n        assert(range_max >= range_min);\n        int q = sz(query);\n\
    \        int range = range_max - range_min;\n        int width = max<int>(1, 1.0\
    \ * range / max<double>(1.0, sqrt(q * 2.0 / 3.0)));\n        sort(all((*this).query),\
    \ [&](query_t a, query_t b) {\n            auto [la, ra, ida] = a;\n         \
    \   auto [lb, rb, idb] = b;\n            int ablock = la / width, bblock = lb\
    \ / width;\n            if (ablock != bblock) return ablock < bblock;\n      \
    \      if (ablock & 1) return ra < rb;\n            return ra > rb;\n        });\n\
    \        vector<Rev_t> rev(q);\n        int cl(init_l), cr(init_r);\n        rep(i,\
    \ q) {\n            auto [l, r, id] = query[i];\n            while (cl > l) {\
    \ cl--; add_left(cl); }\n            while (cr < r) { add_right(cr); cr++;}\n\
    \            while (cl < l) { delete_left(cl); cl++; }\n            while (cr\
    \ > r) { cr--; delete_right(cr); }\n            rev[id] = get();\n        }\n\
    \        return rev;\n    };\n    template<typename A, typename D, typename GET>\n\
    \    vector<Rev_t> answer(\n        const A& add,\n        const D& del,\n   \
    \     const GET& get,\n        int init_l = 0,\n        int init_r = 0\n    )\
    \ {\n        return (*this).answer(add, add, del, del, get, init_l, init_r);\n\
    \    }\n};\n/**\n * @brief mo.hpp\n * @docs docs/algorithm/mo.md\n */\n"
  code: "#pragma once\n#include \"competitive/std/std.hpp\"\ntemplate<typename Rev_t>\
    \ struct Mo {\n    int range_min, range_max;\n    using query_t = tuple<int, int,\
    \ int>;\n    vector<query_t> query;\n    Mo() {};\n    Mo(const vector<pii>& lr)\
    \ : range_min(INF), range_max(-INF) {\n        rep(i, sz(lr)) {\n            assert(lr[i].first\
    \ <= lr[i].second);\n            query.emplace_back(lr[i].first, lr[i].second,\
    \ i);\n            chmin((*this).range_min, lr[i].first);\n            chmax((*this).range_max,\
    \ lr[i].second);\n        }\n    }\n    Mo(const vi& l, const vi& r) : range_min(INF),\
    \ range_max(-INF) {\n        assert(sz(l) == sz(r));\n        rep(i, sz(l)) {\n\
    \            assert(l[i] <= r[i]);\n            query.emplace_back(l[i], r[i],\
    \ i);\n            chmin((*this).range_min, l[i]);\n            chmax((*this).range_max,\
    \ r[i]);\n        }\n    }\n    void add_query(int l, int r) {\n        (*this).query.emplace_back(l,\
    \ r, sz((*this).query));\n    }\n    template<typename AL, typename AR, typename\
    \ DL, typename DR, typename GET>\n    vector<Rev_t> answer(\n        const AL&\
    \ add_left,\n        const AR& add_right,\n        const DL& delete_left,\n  \
    \      const DR& delete_right,\n        const GET& get,\n        int init_l =\
    \ 0,\n        int init_r = 0\n    ) {\n        assert(range_max >= range_min);\n\
    \        int q = sz(query);\n        int range = range_max - range_min;\n    \
    \    int width = max<int>(1, 1.0 * range / max<double>(1.0, sqrt(q * 2.0 / 3.0)));\n\
    \        sort(all((*this).query), [&](query_t a, query_t b) {\n            auto\
    \ [la, ra, ida] = a;\n            auto [lb, rb, idb] = b;\n            int ablock\
    \ = la / width, bblock = lb / width;\n            if (ablock != bblock) return\
    \ ablock < bblock;\n            if (ablock & 1) return ra < rb;\n            return\
    \ ra > rb;\n        });\n        vector<Rev_t> rev(q);\n        int cl(init_l),\
    \ cr(init_r);\n        rep(i, q) {\n            auto [l, r, id] = query[i];\n\
    \            while (cl > l) { cl--; add_left(cl); }\n            while (cr < r)\
    \ { add_right(cr); cr++;}\n            while (cl < l) { delete_left(cl); cl++;\
    \ }\n            while (cr > r) { cr--; delete_right(cr); }\n            rev[id]\
    \ = get();\n        }\n        return rev;\n    };\n    template<typename A, typename\
    \ D, typename GET>\n    vector<Rev_t> answer(\n        const A& add,\n       \
    \ const D& del,\n        const GET& get,\n        int init_l = 0,\n        int\
    \ init_r = 0\n    ) {\n        return (*this).answer(add, add, del, del, get,\
    \ init_l, init_r);\n    }\n};\n/**\n * @brief mo.hpp\n * @docs docs/algorithm/mo.md\n\
    \ */\n"
  dependsOn:
  - competitive/std/std.hpp
  isVerificationFile: false
  path: competitive/algorithm/mo.hpp
  requiredBy: []
  timestamp: '2023-02-28 16:59:41+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: competitive/algorithm/mo.hpp
layout: document
redirect_from:
- /library/competitive/algorithm/mo.hpp
- /library/competitive/algorithm/mo.hpp.html
title: mo.hpp
---
うしさんだよーもーもー