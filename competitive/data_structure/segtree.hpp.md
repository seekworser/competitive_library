---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: atcoder/internal_bit.hpp
    title: atcoder/internal_bit.hpp
  - icon: ':warning:'
    path: atcoder/segtree.hpp
    title: atcoder/segtree.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/std/std.hpp
    title: std.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    _deprecated_at_docs: docs/data_structure/segtree.md
    document_title: segtree.hpp
    links: []
  bundledCode: "#line 2 \"atcoder/segtree.hpp\"\n#include <algorithm>\n#include <cassert>\n\
    #include <vector>\n\n#line 2 \"atcoder/internal_bit.hpp\"\n#ifdef _MSC_VER\n#include\
    \ <intrin.h>\n#endif\n\nnamespace atcoder {\n\nnamespace internal {\n\n// @param\
    \ n `0 <= n`\n// @return minimum non-negative `x` s.t. `n <= 2**x`\nint ceil_pow2(int\
    \ n) {\n    int x = 0;\n    while ((1U << x) < (unsigned int)(n)) x++;\n    return\
    \ x;\n}\n\n// @param n `1 <= n`\n// @return minimum non-negative `x` s.t. `(n\
    \ & (1 << x)) != 0`\nconstexpr int bsf_constexpr(unsigned int n) {\n    int x\
    \ = 0;\n    while (!(n & (1 << x))) x++;\n    return x;\n}\n\n// @param n `1 <=\
    \ n`\n// @return minimum non-negative `x` s.t. `(n & (1 << x)) != 0`\nint bsf(unsigned\
    \ int n) {\n#ifdef _MSC_VER\n    unsigned long index;\n    _BitScanForward(&index,\
    \ n);\n    return index;\n#else\n    return __builtin_ctz(n);\n#endif\n}\n\n}\
    \  // namespace internal\n\n}  // namespace atcoder\n#line 7 \"atcoder/segtree.hpp\"\
    \n\nnamespace atcoder {\n\ntemplate <class S, S (*op)(S, S), S (*e)()> struct\
    \ segtree {\n  public:\n    segtree() : segtree(0) {}\n    explicit segtree(int\
    \ n) : segtree(std::vector<S>(n, e())) {}\n    explicit segtree(const std::vector<S>&\
    \ v) : _n(int(v.size())) {\n        log = internal::ceil_pow2(_n);\n        size\
    \ = 1 << log;\n        d = std::vector<S>(2 * size, e());\n        for (int i\
    \ = 0; i < _n; i++) d[size + i] = v[i];\n        for (int i = size - 1; i >= 1;\
    \ i--) {\n            update(i);\n        }\n    }\n\n    void set(int p, S x)\
    \ {\n        assert(0 <= p && p < _n);\n        p += size;\n        d[p] = x;\n\
    \        for (int i = 1; i <= log; i++) update(p >> i);\n    }\n\n    void add(int\
    \ p, S x) {\n        assert(0 <= p && p < _n);\n        (*this).set(p, (*this).get(p)\
    \ + x);\n    }\n\n    S get(int p) const {\n        assert(0 <= p && p < _n);\n\
    \        return d[p + size];\n    }\n\n    S prod(int l, int r) const {\n    \
    \    assert(0 <= l && l <= r && r <= _n);\n        S sml = e(), smr = e();\n \
    \       l += size;\n        r += size;\n\n        while (l < r) {\n          \
    \  if (l & 1) sml = op(sml, d[l++]);\n            if (r & 1) smr = op(d[--r],\
    \ smr);\n            l >>= 1;\n            r >>= 1;\n        }\n        return\
    \ op(sml, smr);\n    }\n\n    S all_prod() const { return d[1]; }\n\n    template\
    \ <bool (*f)(S)> int max_right(int l) const {\n        return max_right(l, [](S\
    \ x) { return f(x); });\n    }\n    template <class F> int max_right(int l, F\
    \ f) const {\n        assert(0 <= l && l <= _n);\n        assert(f(e()));\n  \
    \      if (l == _n) return _n;\n        l += size;\n        S sm = e();\n    \
    \    do {\n            while (l % 2 == 0) l >>= 1;\n            if (!f(op(sm,\
    \ d[l]))) {\n                while (l < size) {\n                    l = (2 *\
    \ l);\n                    if (f(op(sm, d[l]))) {\n                        sm\
    \ = op(sm, d[l]);\n                        l++;\n                    }\n     \
    \           }\n                return l - size;\n            }\n            sm\
    \ = op(sm, d[l]);\n            l++;\n        } while ((l & -l) != l);\n      \
    \  return _n;\n    }\n\n    template <bool (*f)(S)> int min_left(int r) const\
    \ {\n        return min_left(r, [](S x) { return f(x); });\n    }\n    template\
    \ <class F> int min_left(int r, F f) const {\n        assert(0 <= r && r <= _n);\n\
    \        assert(f(e()));\n        if (r == 0) return 0;\n        r += size;\n\
    \        S sm = e();\n        do {\n            r--;\n            while (r > 1\
    \ && (r % 2)) r >>= 1;\n            if (!f(op(d[r], sm))) {\n                while\
    \ (r < size) {\n                    r = (2 * r + 1);\n                    if (f(op(d[r],\
    \ sm))) {\n                        sm = op(d[r], sm);\n                      \
    \  r--;\n                    }\n                }\n                return r +\
    \ 1 - size;\n            }\n            sm = op(d[r], sm);\n        } while ((r\
    \ & -r) != r);\n        return 0;\n    }\n\n    int n() {return (*this)._n;}\n\
    \n  private:\n    int _n, size, log;\n    std::vector<S> d;\n\n    void update(int\
    \ k) { d[k] = op(d[2 * k], d[2 * k + 1]); }\n};\n\n}  // namespace atcoder\n#line\
    \ 2 \"competitive/std/std.hpp\"\n#include <bits/stdc++.h>\n#ifndef LOCAL_TEST\n\
    #pragma GCC target (\"avx\")\n#pragma GCC optimize(\"O3\")\n#pragma GCC optimize(\"\
    unroll-loops\")\n#pragma GCC target(\"sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native\"\
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
    \ x == y; }\ntemplate<typename T> bool neq(const T x, const T y) { return !(eq<T>(x,\
    \ y)); }\ntemplate<typename T> bool ge(const T x, const T y) { return (eq<T>(x,\
    \ y) || (x > y)); }\ntemplate<typename T> bool le(const T x, const T y) { return\
    \ (eq<T>(x, y) || (x < y)); }\ntemplate<typename T> bool gt(const T x, const T\
    \ y) { return !(le<T>(x, y)); }\ntemplate<typename T> bool lt(const T x, const\
    \ T y) { return !(ge<T>(x, y)); }\nconstexpr int MODINT998244353 = 998244353;\n\
    constexpr int MODINT1000000007 = 1000000007;\n// \u5165\u51FA\u529B\u9AD8\u901F\
    \u5316\nstruct Nyan { Nyan() { cin.tie(nullptr); ios::sync_with_stdio(false);\
    \ cout << fixed << setprecision(18); } } nyan;\n// \u6C4E\u7528\u30DE\u30AF\u30ED\
    \u306E\u5B9A\u7FA9\n#define all(a) (a).begin(), (a).end()\n#define sz(x) ((int)(x).size())\n\
    #define rep1(n) for(ll i = 0LL; i < n; ++i) // 0 \u304B\u3089 n-1 \u307E\u3067\
    \u6607\u9806\n#define rep2(i, n) for(ll i = 0LL, i##_counter = 0LL; i##_counter\
    \ < ll(n); ++(i##_counter), (i) = i##_counter) // 0 \u304B\u3089 n-1 \u307E\u3067\
    \u6607\u9806\n#define rep3(i, s, t) for(ll i = ll(s), i##_counter = ll(s); i##_counter\
    \ < ll(t); ++(i##_counter), (i) = (i##_counter)) // s \u304B\u3089 t \u307E\u3067\
    \u6607\u9806\n#define rep4(i, s, t, step) for(ll i##_counter = step > 0 ? ll(s)\
    \ : -ll(s), i##_end = step > 0 ? ll(t) : -ll(t), i##_step = abs(step), i = ll(s);\
    \ i##_counter < i##_end; i##_counter += i##_step, i = step > 0 ? i##_counter :\
    \ -i##_counter) // s \u304B\u3089 t \u307E\u3067 step\u305A\u3064\n#define overload4(a,\
    \ b, c, d, e, ...) e\n#define rep(...) overload4(__VA_ARGS__, rep4, rep3, rep2,\
    \ rep1)(__VA_ARGS__)\n#define repe(a, v) for(auto& a : (v)) // v \u306E\u5168\u8981\
    \u7D20\uFF08\u5909\u66F4\u53EF\u80FD\uFF09\n#define smod(n, m) ((((n) % (m)) +\
    \ (m)) % (m)) // \u975E\u8CA0mod\n#define sdiv(n, m) (((n) - smod(n, m)) / (m))\
    \ // \u975E\u8CA0div\n#define uniq(a) {sort(all(a)); (a).erase(unique(all(a)),\
    \ (a).end());} // \u91CD\u8907\u9664\u53BB\nvoid Yes(bool b) { cout << (b ? \"\
    Yes\\n\" : \"No\\n\"); return; };\nvoid YES(bool b) { cout << (b ? \"YES\\n\"\
    \ : \"NO\\n\"); return; };\ntemplate<typename T, size_t N> T max(array<T, N>&\
    \ a) { return *max_element(all(a)); };\ntemplate<typename T, size_t N> T min(array<T,\
    \ N>& a) { return *min_element(all(a)); };\ntemplate<typename T> T max(vector<T>&\
    \ a) { return *max_element(all(a)); };\ntemplate<typename T> T min(vector<T>&\
    \ a) { return *min_element(all(a)); };\ntemplate<typename T> T sum(vector<T>&\
    \ a, T zero = T(0)) { T rev = zero; rep(i, sz(a)) rev += a[i]; return rev; };\n\
    \ntemplate <class T> inline vector<T>& operator--(vector<T>& v) { repe(x, v) --x;\
    \ return v; }\ntemplate <class T> inline vector<T>& operator++(vector<T>& v) {\
    \ repe(x, v) ++x; return v; }\n\n// mod\u3067\u306Epow\nll powm(ll a, ll n, ll\
    \ mod=INFL) {\n    ll res = 1;\n    while (n > 0) {\n        if (n & 1) res =\
    \ (res * a) % mod;\n        if (n > 1) a = (a * a) % mod;\n        n >>= 1;\n\
    \    }\n    return res;\n}\n// \u6574\u6570Sqrt\nll sqrtll(ll x) {\n    assert(x\
    \ >= 0);\n    ll hi(x), lo(0);\n    while (hi != lo) {\n        ll y = (hi + lo\
    \ + 1) / 2;\n        if (y <= x/y) lo = y;\n        else hi = y - 1;\n    }\n\
    \    return lo;\n}\ntemplate <class T> inline bool chmax(T& M, const T& x) { if\
    \ (M < x) { M = x; return true; } return false; } // \u6700\u5927\u5024\u3092\u66F4\
    \u65B0\uFF08\u66F4\u65B0\u3055\u308C\u305F\u3089 true \u3092\u8FD4\u3059\uFF09\
    \ntemplate <class T> inline bool chmin(T& m, const T& x) { if (m > x) { m = x;\
    \ return true; } return false; } // \u6700\u5C0F\u5024\u3092\u66F4\u65B0\uFF08\
    \u66F4\u65B0\u3055\u308C\u305F\u3089 true \u3092\u8FD4\u3059\uFF09\nint digit(ll\
    \ x, int d=10) { int rev=0; while (x > 0) { rev++; x /= d;}; return rev; } //\
    \ x\u306Ed\u9032\u6570\u6841\u6570\n/**\n * @brief std.hpp\n * @docs docs/std/std.md\n\
    \ */\n#line 4 \"competitive/data_structure/segtree.hpp\"\ntemplate <class S, S\
    \ (*op)(S, S), S (*e)()> std::ostream& operator<<(std::ostream& os, const atcoder::segtree<S,\
    \ op, e> seg) {\n    int n = seg.n();\n    rep(i, n) { os << seg.get(i); if (i\
    \ != n-1) os << \" \"; }\n    return os;\n};\ntemplate<typename T> T op_max(T\
    \ x, T y) { return x > y? x : y; }\ntemplate<typename T> T op_min(T x, T y) {\
    \ return x < y? x : y; }\ntemplate<typename T> T op_add(T x, T y) { return x +\
    \ y; }\n\nint e_max() { return -INF; }\ntemplate<typename T> T e_max() { return\
    \ -INFL; }\nint e_min() { return INF; }\ntemplate<typename T> T e_min() { return\
    \ INFL; }\ntemplate<typename T> T e_add() { return 0; }\n\ntemplate<typename T>\
    \ using seg_add = atcoder::segtree<T, op_add<T>, e_add<T>>;\ntemplate<typename\
    \ T> using seg_max = atcoder::segtree<T, op_max<T>, e_max<T>>;\ntemplate<typename\
    \ T> using seg_min = atcoder::segtree<T, op_min<T>, e_min<T>>;\n/**\n * @brief\
    \ segtree.hpp\n * @docs docs/data_structure/segtree.md\n */\n"
  code: "#pragma once\n#include \"atcoder/segtree.hpp\"\n#include \"competitive/std/std.hpp\"\
    \ntemplate <class S, S (*op)(S, S), S (*e)()> std::ostream& operator<<(std::ostream&\
    \ os, const atcoder::segtree<S, op, e> seg) {\n    int n = seg.n();\n    rep(i,\
    \ n) { os << seg.get(i); if (i != n-1) os << \" \"; }\n    return os;\n};\ntemplate<typename\
    \ T> T op_max(T x, T y) { return x > y? x : y; }\ntemplate<typename T> T op_min(T\
    \ x, T y) { return x < y? x : y; }\ntemplate<typename T> T op_add(T x, T y) {\
    \ return x + y; }\n\nint e_max() { return -INF; }\ntemplate<typename T> T e_max()\
    \ { return -INFL; }\nint e_min() { return INF; }\ntemplate<typename T> T e_min()\
    \ { return INFL; }\ntemplate<typename T> T e_add() { return 0; }\n\ntemplate<typename\
    \ T> using seg_add = atcoder::segtree<T, op_add<T>, e_add<T>>;\ntemplate<typename\
    \ T> using seg_max = atcoder::segtree<T, op_max<T>, e_max<T>>;\ntemplate<typename\
    \ T> using seg_min = atcoder::segtree<T, op_min<T>, e_min<T>>;\n/**\n * @brief\
    \ segtree.hpp\n * @docs docs/data_structure/segtree.md\n */\n"
  dependsOn:
  - atcoder/segtree.hpp
  - atcoder/internal_bit.hpp
  - competitive/std/std.hpp
  isVerificationFile: false
  path: competitive/data_structure/segtree.hpp
  requiredBy: []
  timestamp: '2023-03-13 19:28:31+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: competitive/data_structure/segtree.hpp
layout: document
redirect_from:
- /library/competitive/data_structure/segtree.hpp
- /library/competitive/data_structure/segtree.hpp.html
title: segtree.hpp
---
