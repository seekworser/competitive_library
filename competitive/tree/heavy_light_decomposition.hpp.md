---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: atcoder/internal_bit.hpp
    title: atcoder/internal_bit.hpp
  - icon: ':question:'
    path: atcoder/lazysegtree.hpp
    title: atcoder/lazysegtree.hpp
  - icon: ':question:'
    path: atcoder/segtree.hpp
    title: atcoder/segtree.hpp
  - icon: ':question:'
    path: competitive/data_structure/lazysegtree.hpp
    title: "\u9045\u5EF6\u30BB\u30B0\u30E1\u30F3\u30C8\u6728\uFF08\u30E9\u30C3\u30D1\
      \u30FC\uFF09"
  - icon: ':question:'
    path: competitive/data_structure/segtree.hpp
    title: "\u30BB\u30B0\u30E1\u30F3\u30C8\u6728\uFF08\u30E9\u30C3\u30D1\u30FC\uFF09"
  - icon: ':question:'
    path: competitive/graph/graph.hpp
    title: graph.hpp
  - icon: ':question:'
    path: competitive/std/std.hpp
    title: std.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: online_test/AOJ/GRL_5_C.test.cpp
    title: online_test/AOJ/GRL_5_C.test.cpp
  - icon: ':x:'
    path: online_test/library-checker/lca_hld.test.cpp
    title: online_test/library-checker/lca_hld.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/yukicoder/yuki-399.test.cpp
    title: online_test/yukicoder/yuki-399.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':question:'
  attributes:
    _deprecated_at_docs: docs/tree/heavy_light_decomposition.md
    document_title: "HL\u5206\u89E3 (Heavy Light Decomposition)"
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
    \ = 3300300300300300491LL;\nfloat EPS = 1e-8; double EPSL = 1e-16;\ntemplate<typename\
    \ T> bool eq(const T x, const T y) { return x == y; }\ntemplate<> bool eq<double>(const\
    \ double x, const double y) { return abs(x - y) < EPSL; }\ntemplate<> bool eq<float>(const\
    \ float x, const float y) { return abs(x - y) < EPS; }\ntemplate<typename T> bool\
    \ neq(const T x, const T y) { return !(eq<T>(x, y)); }\ntemplate<typename T> bool\
    \ ge(const T x, const T y) { return (eq<T>(x, y) || (x > y)); }\ntemplate<typename\
    \ T> bool le(const T x, const T y) { return (eq<T>(x, y) || (x < y)); }\ntemplate<typename\
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
    \ a) { return *min_element(all(a)); };\ntemplate<typename T> vector<T> vec_slice(const\
    \ vector<T>& a, int l, int r) { vector<T> rev; rep(i, l, r) rev.push_back(a[i]);\
    \ return rev; };\ntemplate<typename T> T sum(vector<T>& a, T zero = T(0)) { T\
    \ rev = zero; rep(i, sz(a)) rev += a[i]; return rev; };\ntemplate<typename T>\
    \ bool in_range(const T& val, const T& s, const T& t) { return s <= val && val\
    \ < t; };\n\ntemplate <class T> inline vector<T>& operator--(vector<T>& v) { repe(x,\
    \ v) --x; return v; }\ntemplate <class T> inline vector<T>& operator++(vector<T>&\
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
    \ * @docs docs/std/std.md\n */\n#line 3 \"competitive/graph/graph.hpp\"\ntemplate\
    \ <class Cost> struct Graph{\npublic:\n    struct Edge {\n        int to;\n  \
    \      Cost cost;\n        Edge() {};\n        Edge(int _to, Cost _cost) : to(_to),\
    \ cost(_cost) {};\n    };\n    struct AdjacencyListRange{\n        using iterator\
    \ = typename std::vector<Edge>::const_iterator;\n        iterator begi, endi;\n\
    \        iterator begin() const { return begi; }\n        iterator end() const\
    \ { return endi; }\n        int size() const { return (int)distance(begi, endi);\
    \ }\n        const Edge& operator[](int i) const { return begi[i]; }\n    };\n\
    private:\npublic:\n    vector<Edge> E;\n    vector<int> I;\n    int n;\n    Graph()\
    \ : n(0) {}\n    Graph(int _n) : n(_n) {}\n    Graph(int _n, const vector<int>&\
    \ from, vector<int>& to, vector<Cost>& cost, bool rev = false) : n(_n) {\n   \
    \     vector<int> buf(n+1, 0);\n        for(int i=0; i<(int)from.size(); i++){\n\
    \            ++buf[from[i]];\n            if (rev) ++buf[to[i]];\n        }\n\
    \        for(int i=1; i<=_n; i++) buf[i] += buf[i-1];\n        E.resize(buf[n]);\n\
    \        for(int i=(int)from.size()-1; i>=0; i--){\n            int u = from[i];\n\
    \            int v = to[i];\n            Cost c = cost[i];\n            E[--buf[u]]\
    \ = Edge(v, c);\n            if(rev) E[--buf[v]] = Edge(u, c);\n        }\n  \
    \      I = move(buf);\n    }\n    AdjacencyListRange operator[](int u) const {\n\
    \        return AdjacencyListRange{ E.begin() + I[u], E.begin() + I[u+1] };\n\
    \    }\n    int num_vertices() const { return n; }\n    int size() const { return\
    \ num_vertices(); }\n    int num_edges() const { return E.size(); }\n    Graph<Cost>\
    \ reversed_edges() const {\n        Graph<Cost> res;\n        int _n = res.n =\
    \ n;\n        vi buf(n+1, 0);\n        for(auto v : E) ++buf[v.to];\n        for(int\
    \ i=1; i<=n; i++) buf[i] += buf[i-1];\n        res.E.resize(buf[n]);\n       \
    \ for(int u=0; u<n; u++) for(auto v : operator[](u)) res.E[--buf[v.to]] = {u,\
    \ v.cost};\n        res.I = std::move(buf);\n        return res;\n    }\n};\n\
    template <class T> ostream& operator<<(ostream& os, Graph<T> g) {\n    bool first\
    \ = true;\n    rep(i, g.n) repe(e, g[i]) {\n        if (first) first = false;\n\
    \        else os << endl;\n        os << i << \"->\" << e.to << \": \" << e.cost;\n\
    \    }\n    return os;\n}\n/**\n * @brief graph.hpp\n * @docs docs/graph/graph.md\n\
    \ */\n#line 5 \"atcoder/segtree.hpp\"\n\n#line 2 \"atcoder/internal_bit.hpp\"\n\
    #ifdef _MSC_VER\n#include <intrin.h>\n#endif\n\nnamespace atcoder {\n\nnamespace\
    \ internal {\n\n// @param n `0 <= n`\n// @return minimum non-negative `x` s.t.\
    \ `n <= 2**x`\nint ceil_pow2(int n) {\n    int x = 0;\n    while ((1U << x) <\
    \ (unsigned int)(n)) x++;\n    return x;\n}\n\n// @param n `1 <= n`\n// @return\
    \ minimum non-negative `x` s.t. `(n & (1 << x)) != 0`\nconstexpr int bsf_constexpr(unsigned\
    \ int n) {\n    int x = 0;\n    while (!(n & (1 << x))) x++;\n    return x;\n\
    }\n\n// @param n `1 <= n`\n// @return minimum non-negative `x` s.t. `(n & (1 <<\
    \ x)) != 0`\nint bsf(unsigned int n) {\n#ifdef _MSC_VER\n    unsigned long index;\n\
    \    _BitScanForward(&index, n);\n    return index;\n#else\n    return __builtin_ctz(n);\n\
    #endif\n}\n\n}  // namespace internal\n\n}  // namespace atcoder\n#line 7 \"atcoder/segtree.hpp\"\
    \n\nnamespace atcoder {\n\ntemplate <class S, S (*_op)(S, S), S (*_e)()> struct\
    \ segtree {\n  public:\n    S (*op)(S, S) = _op;\n    S (*e)() = _e;\n    segtree()\
    \ : segtree(0) {}\n    explicit segtree(const std::vector<S>& v) : _n(int(v.size()))\
    \ {\n        log = internal::ceil_pow2(_n);\n        size = 1 << log;\n      \
    \  d = std::vector<S>(2 * size, e());\n        for (int i = 0; i < _n; i++) d[size\
    \ + i] = v[i];\n        for (int i = size - 1; i >= 1; i--) {\n            update(i);\n\
    \        }\n    }\n    explicit segtree(int n) : segtree(std::vector<S>(n, _e()))\
    \ {}\n\n    void set(int p, S x) {\n        assert(0 <= p && p < _n);\n      \
    \  p += size;\n        d[p] = x;\n        for (int i = 1; i <= log; i++) update(p\
    \ >> i);\n    }\n\n    void add(int p, S x) {\n        assert(0 <= p && p < _n);\n\
    \        (*this).set(p, (*this).get(p) + x);\n    }\n\n    S get(int p) const\
    \ {\n        assert(0 <= p && p < _n);\n        return d[p + size];\n    }\n\n\
    \    S prod(int l, int r) const {\n        assert(0 <= l && l <= r && r <= _n);\n\
    \        S sml = e(), smr = e();\n        l += size;\n        r += size;\n\n \
    \       while (l < r) {\n            if (l & 1) sml = op(sml, d[l++]);\n     \
    \       if (r & 1) smr = op(d[--r], smr);\n            l >>= 1;\n            r\
    \ >>= 1;\n        }\n        return op(sml, smr);\n    }\n\n    S all_prod() const\
    \ { return d[1]; }\n\n    template <bool (*f)(S)> int max_right(int l) const {\n\
    \        return max_right(l, [](S x) { return f(x); });\n    }\n    template <class\
    \ F> int max_right(int l, F f) const {\n        assert(0 <= l && l <= _n);\n \
    \       assert(f(e()));\n        if (l == _n) return _n;\n        l += size;\n\
    \        S sm = e();\n        do {\n            while (l % 2 == 0) l >>= 1;\n\
    \            if (!f(op(sm, d[l]))) {\n                while (l < size) {\n   \
    \                 l = (2 * l);\n                    if (f(op(sm, d[l]))) {\n \
    \                       sm = op(sm, d[l]);\n                        l++;\n   \
    \                 }\n                }\n                return l - size;\n   \
    \         }\n            sm = op(sm, d[l]);\n            l++;\n        } while\
    \ ((l & -l) != l);\n        return _n;\n    }\n\n    template <bool (*f)(S)> int\
    \ min_left(int r) const {\n        return min_left(r, [](S x) { return f(x); });\n\
    \    }\n    template <class F> int min_left(int r, F f) const {\n        assert(0\
    \ <= r && r <= _n);\n        assert(f(e()));\n        if (r == 0) return 0;\n\
    \        r += size;\n        S sm = e();\n        do {\n            r--;\n   \
    \         while (r > 1 && (r % 2)) r >>= 1;\n            if (!f(op(d[r], sm)))\
    \ {\n                while (r < size) {\n                    r = (2 * r + 1);\n\
    \                    if (f(op(d[r], sm))) {\n                        sm = op(d[r],\
    \ sm);\n                        r--;\n                    }\n                }\n\
    \                return r + 1 - size;\n            }\n            sm = op(d[r],\
    \ sm);\n        } while ((r & -r) != r);\n        return 0;\n    }\n\n    int\
    \ n() const {return (*this)._n;}\n\n  private:\n    int _n, size, log;\n    std::vector<S>\
    \ d;\n\n    void update(int k) { d[k] = op(d[2 * k], d[2 * k + 1]); }\n};\n\n\
    }  // namespace atcoder\n#line 4 \"competitive/data_structure/segtree.hpp\"\n\
    template <class S, S (*op)(S, S), S (*e)()> std::ostream& operator<<(std::ostream&\
    \ os, const atcoder::segtree<S, op, e> seg) {\n    int n = seg.n();\n    rep(i,\
    \ n) { os << seg.get(i); if (i != n-1) os << \" \"; }\n    return os;\n};\nnamespace\
    \ segtree {\n    template<typename T> T op_max(T x, T y) { return x > y? x : y;\
    \ }\n    template<typename T> T op_min(T x, T y) { return x < y? x : y; }\n  \
    \  template<typename T> T op_add(T x, T y) { return x + y; }\n\n    int e_max()\
    \ { return -INF; }\n    template<typename T> T e_max() { return -INFL; }\n   \
    \ int e_min() { return INF; }\n    template<typename T> T e_min() { return INFL;\
    \ }\n    template<typename T> T e_add() { return 0; }\n}\ntemplate<typename T>\
    \ using seg_add = atcoder::segtree<T, segtree::op_add, segtree::e_add>;\ntemplate<typename\
    \ T> using seg_max = atcoder::segtree<T, segtree::op_max, segtree::e_max>;\ntemplate<typename\
    \ T> using seg_min = atcoder::segtree<T, segtree::op_min, segtree::e_min>;\n/**\n\
    \ * @brief \u30BB\u30B0\u30E1\u30F3\u30C8\u6728\uFF08\u30E9\u30C3\u30D1\u30FC\uFF09\
    \n * @docs docs/data_structure/segtree.md\n */\n#line 6 \"atcoder/lazysegtree.hpp\"\
    \n\n#line 8 \"atcoder/lazysegtree.hpp\"\n\nnamespace atcoder {\n\ntemplate <class\
    \ S,\n          S (*_op)(S, S),\n          S (*_e)(),\n          class F,\n  \
    \        S (*_mapping)(F, S),\n          F (*_composition)(F, F),\n          F\
    \ (*_id)()>\nstruct lazy_segtree {\n  public:\n    S (*op)(S, S) = _op;\n    S\
    \ (*e)() = _e;\n    S (*mapping)(F, S) = _mapping;\n    F (*composition)(F, F)\
    \ = _composition;\n    F (*id)() = _id;\n    lazy_segtree() : lazy_segtree(0)\
    \ {}\n    explicit lazy_segtree(int n) : lazy_segtree(std::vector<S>(n, _e()))\
    \ {}\n    explicit lazy_segtree(const std::vector<S>& v) : _n(int(v.size())) {\n\
    \        log = internal::ceil_pow2(_n);\n        size = 1 << log;\n        d =\
    \ std::vector<S>(2 * size, e());\n        lz = std::vector<F>(size, id());\n \
    \       for (int i = 0; i < _n; i++) d[size + i] = v[i];\n        for (int i =\
    \ size - 1; i >= 1; i--) {\n            update(i);\n        }\n    }\n\n    void\
    \ set(int p, S x) {\n        assert(0 <= p && p < _n);\n        p += size;\n \
    \       for (int i = log; i >= 1; i--) push(p >> i);\n        d[p] = x;\n    \
    \    for (int i = 1; i <= log; i++) update(p >> i);\n    }\n\n    void add(int\
    \ p, S x) {\n        assert(0 <= p && p < _n);\n        (*this).set(p, (*this).get(p)\
    \ + x);\n    }\n\n    S get(int p) {\n        assert(0 <= p && p < _n);\n    \
    \    p += size;\n        for (int i = log; i >= 1; i--) push(p >> i);\n      \
    \  return d[p];\n    }\n\n    S prod(int l, int r) {\n        assert(0 <= l &&\
    \ l <= r && r <= _n);\n        if (l == r) return e();\n\n        l += size;\n\
    \        r += size;\n\n        for (int i = log; i >= 1; i--) {\n            if\
    \ (((l >> i) << i) != l) push(l >> i);\n            if (((r >> i) << i) != r)\
    \ push((r - 1) >> i);\n        }\n\n        S sml = e(), smr = e();\n        while\
    \ (l < r) {\n            if (l & 1) sml = op(sml, d[l++]);\n            if (r\
    \ & 1) smr = op(d[--r], smr);\n            l >>= 1;\n            r >>= 1;\n  \
    \      }\n\n        return op(sml, smr);\n    }\n\n    S all_prod() { return d[1];\
    \ }\n\n    void apply(int p, F f) {\n        assert(0 <= p && p < _n);\n     \
    \   p += size;\n        for (int i = log; i >= 1; i--) push(p >> i);\n       \
    \ d[p] = mapping(f, d[p]);\n        for (int i = 1; i <= log; i++) update(p >>\
    \ i);\n    }\n    void apply(int l, int r, F f) {\n        assert(0 <= l && l\
    \ <= r && r <= _n);\n        if (l == r) return;\n\n        l += size;\n     \
    \   r += size;\n\n        for (int i = log; i >= 1; i--) {\n            if (((l\
    \ >> i) << i) != l) push(l >> i);\n            if (((r >> i) << i) != r) push((r\
    \ - 1) >> i);\n        }\n\n        {\n            int l2 = l, r2 = r;\n     \
    \       while (l < r) {\n                if (l & 1) all_apply(l++, f);\n     \
    \           if (r & 1) all_apply(--r, f);\n                l >>= 1;\n        \
    \        r >>= 1;\n            }\n            l = l2;\n            r = r2;\n \
    \       }\n\n        for (int i = 1; i <= log; i++) {\n            if (((l >>\
    \ i) << i) != l) update(l >> i);\n            if (((r >> i) << i) != r) update((r\
    \ - 1) >> i);\n        }\n    }\n\n    template <bool (*g)(S)> int max_right(int\
    \ l) {\n        return max_right(l, [](S x) { return g(x); });\n    }\n    template\
    \ <class G> int max_right(int l, G g) {\n        assert(0 <= l && l <= _n);\n\
    \        assert(g(e()));\n        if (l == _n) return _n;\n        l += size;\n\
    \        for (int i = log; i >= 1; i--) push(l >> i);\n        S sm = e();\n \
    \       do {\n            while (l % 2 == 0) l >>= 1;\n            if (!g(op(sm,\
    \ d[l]))) {\n                while (l < size) {\n                    push(l);\n\
    \                    l = (2 * l);\n                    if (g(op(sm, d[l]))) {\n\
    \                        sm = op(sm, d[l]);\n                        l++;\n  \
    \                  }\n                }\n                return l - size;\n  \
    \          }\n            sm = op(sm, d[l]);\n            l++;\n        } while\
    \ ((l & -l) != l);\n        return _n;\n    }\n\n    template <bool (*g)(S)> int\
    \ min_left(int r) {\n        return min_left(r, [](S x) { return g(x); });\n \
    \   }\n    template <class G> int min_left(int r, G g) {\n        assert(0 <=\
    \ r && r <= _n);\n        assert(g(e()));\n        if (r == 0) return 0;\n   \
    \     r += size;\n        for (int i = log; i >= 1; i--) push((r - 1) >> i);\n\
    \        S sm = e();\n        do {\n            r--;\n            while (r > 1\
    \ && (r % 2)) r >>= 1;\n            if (!g(op(d[r], sm))) {\n                while\
    \ (r < size) {\n                    push(r);\n                    r = (2 * r +\
    \ 1);\n                    if (g(op(d[r], sm))) {\n                        sm\
    \ = op(d[r], sm);\n                        r--;\n                    }\n     \
    \           }\n                return r + 1 - size;\n            }\n         \
    \   sm = op(d[r], sm);\n        } while ((r & -r) != r);\n        return 0;\n\
    \    }\n\n    int n() {return (*this)._n;}\n\n  private:\n    int _n, size, log;\n\
    \    std::vector<S> d;\n    std::vector<F> lz;\n\n    void update(int k) { d[k]\
    \ = op(d[2 * k], d[2 * k + 1]); }\n    void all_apply(int k, F f) {\n        d[k]\
    \ = mapping(f, d[k]);\n        if (k < size) lz[k] = composition(f, lz[k]);\n\
    \    }\n    void push(int k) {\n        all_apply(2 * k, lz[k]);\n        all_apply(2\
    \ * k + 1, lz[k]);\n        lz[k] = id();\n    }\n};\n\n}  // namespace atcoder\n\
    #line 4 \"competitive/data_structure/lazysegtree.hpp\"\ntemplate <class S, S (*op)(S,\
    \ S), S (*e)(), class F, S (*mapping)(F, S), F (*composition)(F, F), F (*id)()>\n\
    std::ostream& operator<<(std::ostream& os, atcoder::lazy_segtree<S, op, e, F,\
    \ mapping, composition, id> seg) {\n    int n = seg.n();\n    rep(i, n) { os <<\
    \ seg.get(i); if (i != n-1) os << \" \"; }\n    return os;\n};\n\nnamespace lsegtree\
    \ {\n    template<typename T> struct AddNode {\n        T value;\n        ll size;\n\
    \        AddNode() : value(T(0)), size(1) {};\n        AddNode(T value, ll size)\
    \ : value(value), size(size) {};\n        friend ostream& operator<<(std::ostream&\
    \ os, const AddNode<T> &n) { os << n.value; return os; };\n    };\n\n    int e_max()\
    \ { return -INF; }\n    template<typename T> T e_max() { return -INFL; }\n   \
    \ int e_min() { return INF; }\n    template<typename T> T e_min() { return INFL;\
    \ }\n    template<typename T> AddNode<T> e_add() { return {0, 1}; }\n\n    template<typename\
    \ T> T op_max(T x, T y) { return x > y ? x : y; }\n    template<typename T> T\
    \ op_min(T x, T y) { return x < y ? x : y; }\n    template<typename T> AddNode<T>\
    \ op_add(AddNode<T> x, AddNode<T> y) { return {x.value + y.value, x.size + y.size};\
    \ }\n\n    template<typename T> T id_radd(){ return 0; }\n    int id_rupdate(){\
    \ return INF; }\n    template<typename T> T id_rupdate(){ return INFL; }\n\n \
    \   template<typename T> AddNode<T> mapping_add_radd(T f, AddNode<T> x){ return\
    \ {x.value + f * x.size, x.size}; }\n    template<typename T> AddNode<T> mapping_add_rupdate(T\
    \ f, AddNode<T> x){\n        AddNode<T> rev = AddNode<T>(x);\n        if(f !=\
    \ id_rupdate<T>()) rev.value = f * rev.size;\n        return rev;\n    }\n   \
    \ template<typename T> T mapping_radd(T f, T x){ return f+x; }\n    template<typename\
    \ T> T mapping_rupdate(T f, T x){ return (f == id_rupdate() ? x : f); }\n\n  \
    \  template<typename T> T composition_radd(T f, T g){ return f+g; }\n    template<typename\
    \ T> T composition_rupdate(T f, T g){ return (f == id_rupdate() ? g : f); }\n\
    }\n\ntemplate<typename T> using lseg_add_radd = atcoder::lazy_segtree<lsegtree::AddNode<T>,\
    \ lsegtree::op_add, lsegtree::e_add, T, lsegtree::mapping_add_radd, lsegtree::composition_radd,\
    \ lsegtree::id_radd>;\ntemplate<typename T> using lseg_min_radd = atcoder::lazy_segtree<T,\
    \ lsegtree::op_min, lsegtree::e_min, T, lsegtree::mapping_radd, lsegtree::composition_radd,\
    \ lsegtree::id_radd>;\ntemplate<typename T> using lseg_max_radd = atcoder::lazy_segtree<T,\
    \ lsegtree::op_max, lsegtree::e_max, T, lsegtree::mapping_radd, lsegtree::composition_radd,\
    \ lsegtree::id_radd>;\ntemplate<typename T> using lseg_add_rupdate = atcoder::lazy_segtree<lsegtree::AddNode<T>,\
    \ lsegtree::op_add, lsegtree::e_add, T, lsegtree::mapping_add_rupdate, lsegtree::composition_rupdate,\
    \ lsegtree::id_rupdate>;\ntemplate<typename T> using lseg_min_rupdate = atcoder::lazy_segtree<T,\
    \ lsegtree::op_min, lsegtree::e_min, T, lsegtree::mapping_rupdate, lsegtree::composition_rupdate,\
    \ lsegtree::id_rupdate>;\ntemplate<typename T> using lseg_max_rupdate = atcoder::lazy_segtree<T,\
    \ lsegtree::op_max, lsegtree::e_max, T, lsegtree::mapping_rupdate, lsegtree::composition_rupdate,\
    \ lsegtree::id_rupdate>;\n/**\n * @brief \u9045\u5EF6\u30BB\u30B0\u30E1\u30F3\u30C8\
    \u6728\uFF08\u30E9\u30C3\u30D1\u30FC\uFF09\n * @docs docs/data_structure/lazysegtree.md\n\
    \ */\n#line 6 \"competitive/tree/heavy_light_decomposition.hpp\"\ntemplate <typename\
    \ Cost, typename Seg> struct HeavyLightDecomposition {\n    vi heavy_edge,in,out,head,par,pos;\n\
    \    Seg &seg;\n    bool edge;\n    HeavyLightDecomposition(Graph<Cost>& g, Seg&\
    \ seg, bool edge = true) :\n        heavy_edge(g.n), in(g.n), out(g.n), head(g.n),\
    \ par(g.n), pos(g.n), seg(seg), edge(edge) {\n        build(g);\n    }\n\n   \
    \ void build(Graph<Cost>& g) {\n        vi subtree_size(g.n, 0);\n        auto\
    \ dfs_sz = [&] (auto self, int x, int p) -> int {\n            par[x] = p;\n \
    \           subtree_size[x] = 1;\n            repe(e, g[x]) {\n              \
    \  if (e.to == p) continue;\n                subtree_size[x] += self(self, e.to,\
    \ x);\n            }\n            int maxs = -INF;\n            heavy_edge[x]\
    \ = -1;\n            repe(e, g[x]) {\n                if (e.to == p) continue;\n\
    \                if (chmax(maxs, subtree_size[e.to])) heavy_edge[x] = e.to;\n\
    \            }\n            return subtree_size[x];\n        };\n        dfs_sz(dfs_sz,\
    \ 0, -1);\n        int t = 0;\n        auto dfs_hld = [&] (auto self, int x, int\
    \ par) -> void {\n            in[x] = t++;\n            pos[in[x]] = x;\n    \
    \        if (heavy_edge[x] != -1) {\n                head[heavy_edge[x]] = head[x];\n\
    \                self(self, heavy_edge[x], x);\n            }\n            repe(e,\
    \ g[x]) {\n                if (e.to == par || e.to == heavy_edge[x]) continue;\n\
    \                head[e.to] = e.to;\n                self(self, e.to, x);\n  \
    \          }\n            out[x] = t;\n        };\n        dfs_hld(dfs_hld, 0,\
    \ -1);\n    }\n\n    int lca(int u, int v) {\n        while (head[u] != head[v])\
    \ {\n            if (in[u] > in[v]) swap(u, v);\n            v = par[head[v]];\n\
    \        }\n        return in[u] < in[v] ? u : v;\n    }\n\n    int la(int u,\
    \ int k) {\n        while (true) {\n            if (u == -1) return -1;\n    \
    \        if (u == 0 && k > 0) return -1;\n            int v = head[u];\n     \
    \       if (in[u] - k >= in[v]) return pos[in[u] - k];\n            k -= in[u]\
    \ - in[v] + 1;\n            u = par[head[u]];\n        }\n    }\n\n    decltype(seg.e())\
    \ prod(int u, int v) {\n        using T = decltype(seg.e());\n        T l = seg.e();\n\
    \        T r = seg.e();\n        while (head[u] != head[v]) {\n            if\
    \ (in[u] > in[v]) swap(u, v), swap(l, r);\n            l = seg.op(seg.prod(in[head[v]],\
    \ in[v] + 1), l);\n            v = par[head[v]];\n        }\n        if (in[u]\
    \ > in[v]) swap(u, v), swap(l, r);\n        // \u30D1\u30B9\u30AF\u30A8\u30EA\u306E\
    \u5834\u5408\u306Fu\uFF08u\u304B\u3089u\u306E\u89AA\u3078\u306E\u30D1\u30B9\uFF09\
    \u306F\u8DB3\u3055\u306A\u3044\n        return seg.op(seg.op(seg.prod(in[u] +\
    \ edge, in[v] + 1), l) , r);\n    }\n\n    void apply(int u, int v, decltype(seg.id())\
    \ f) {\n        while (head[u] != head[v]) {\n            if (in[u] > in[v]) swap(u,\
    \ v);\n            seg.apply(in[head[v]], in[v] + 1, f);\n            v = par[head[v]];\n\
    \        }\n        if (in[u] > in[v]) swap(u, v);\n        seg.apply(in[u] +\
    \ edge, in[v] + 1, f);\n    }\n\n    int edge_pos(int u, int v) {\n        if\
    \ (par[u] != v) swap(u, v);\n        assert(par[u] == v);\n        return in[u];\n\
    \    }\n};\n/**\n * @brief HL\u5206\u89E3 (Heavy Light Decomposition)\n * @docs\
    \ docs/tree/heavy_light_decomposition.md\n */\n"
  code: "#pragma once\n#include \"competitive/std/std.hpp\"\n#include \"competitive/graph/graph.hpp\"\
    \n#include \"competitive/data_structure/segtree.hpp\"\n#include \"competitive/data_structure/lazysegtree.hpp\"\
    \ntemplate <typename Cost, typename Seg> struct HeavyLightDecomposition {\n  \
    \  vi heavy_edge,in,out,head,par,pos;\n    Seg &seg;\n    bool edge;\n    HeavyLightDecomposition(Graph<Cost>&\
    \ g, Seg& seg, bool edge = true) :\n        heavy_edge(g.n), in(g.n), out(g.n),\
    \ head(g.n), par(g.n), pos(g.n), seg(seg), edge(edge) {\n        build(g);\n \
    \   }\n\n    void build(Graph<Cost>& g) {\n        vi subtree_size(g.n, 0);\n\
    \        auto dfs_sz = [&] (auto self, int x, int p) -> int {\n            par[x]\
    \ = p;\n            subtree_size[x] = 1;\n            repe(e, g[x]) {\n      \
    \          if (e.to == p) continue;\n                subtree_size[x] += self(self,\
    \ e.to, x);\n            }\n            int maxs = -INF;\n            heavy_edge[x]\
    \ = -1;\n            repe(e, g[x]) {\n                if (e.to == p) continue;\n\
    \                if (chmax(maxs, subtree_size[e.to])) heavy_edge[x] = e.to;\n\
    \            }\n            return subtree_size[x];\n        };\n        dfs_sz(dfs_sz,\
    \ 0, -1);\n        int t = 0;\n        auto dfs_hld = [&] (auto self, int x, int\
    \ par) -> void {\n            in[x] = t++;\n            pos[in[x]] = x;\n    \
    \        if (heavy_edge[x] != -1) {\n                head[heavy_edge[x]] = head[x];\n\
    \                self(self, heavy_edge[x], x);\n            }\n            repe(e,\
    \ g[x]) {\n                if (e.to == par || e.to == heavy_edge[x]) continue;\n\
    \                head[e.to] = e.to;\n                self(self, e.to, x);\n  \
    \          }\n            out[x] = t;\n        };\n        dfs_hld(dfs_hld, 0,\
    \ -1);\n    }\n\n    int lca(int u, int v) {\n        while (head[u] != head[v])\
    \ {\n            if (in[u] > in[v]) swap(u, v);\n            v = par[head[v]];\n\
    \        }\n        return in[u] < in[v] ? u : v;\n    }\n\n    int la(int u,\
    \ int k) {\n        while (true) {\n            if (u == -1) return -1;\n    \
    \        if (u == 0 && k > 0) return -1;\n            int v = head[u];\n     \
    \       if (in[u] - k >= in[v]) return pos[in[u] - k];\n            k -= in[u]\
    \ - in[v] + 1;\n            u = par[head[u]];\n        }\n    }\n\n    decltype(seg.e())\
    \ prod(int u, int v) {\n        using T = decltype(seg.e());\n        T l = seg.e();\n\
    \        T r = seg.e();\n        while (head[u] != head[v]) {\n            if\
    \ (in[u] > in[v]) swap(u, v), swap(l, r);\n            l = seg.op(seg.prod(in[head[v]],\
    \ in[v] + 1), l);\n            v = par[head[v]];\n        }\n        if (in[u]\
    \ > in[v]) swap(u, v), swap(l, r);\n        // \u30D1\u30B9\u30AF\u30A8\u30EA\u306E\
    \u5834\u5408\u306Fu\uFF08u\u304B\u3089u\u306E\u89AA\u3078\u306E\u30D1\u30B9\uFF09\
    \u306F\u8DB3\u3055\u306A\u3044\n        return seg.op(seg.op(seg.prod(in[u] +\
    \ edge, in[v] + 1), l) , r);\n    }\n\n    void apply(int u, int v, decltype(seg.id())\
    \ f) {\n        while (head[u] != head[v]) {\n            if (in[u] > in[v]) swap(u,\
    \ v);\n            seg.apply(in[head[v]], in[v] + 1, f);\n            v = par[head[v]];\n\
    \        }\n        if (in[u] > in[v]) swap(u, v);\n        seg.apply(in[u] +\
    \ edge, in[v] + 1, f);\n    }\n\n    int edge_pos(int u, int v) {\n        if\
    \ (par[u] != v) swap(u, v);\n        assert(par[u] == v);\n        return in[u];\n\
    \    }\n};\n/**\n * @brief HL\u5206\u89E3 (Heavy Light Decomposition)\n * @docs\
    \ docs/tree/heavy_light_decomposition.md\n */\n"
  dependsOn:
  - competitive/std/std.hpp
  - competitive/graph/graph.hpp
  - competitive/data_structure/segtree.hpp
  - atcoder/segtree.hpp
  - atcoder/internal_bit.hpp
  - competitive/data_structure/lazysegtree.hpp
  - atcoder/lazysegtree.hpp
  isVerificationFile: false
  path: competitive/tree/heavy_light_decomposition.hpp
  requiredBy: []
  timestamp: '2023-04-11 04:58:06+09:00'
  verificationStatus: LIBRARY_SOME_WA
  verifiedWith:
  - online_test/library-checker/lca_hld.test.cpp
  - online_test/AOJ/GRL_5_C.test.cpp
  - online_test/yukicoder/yuki-399.test.cpp
documentation_of: competitive/tree/heavy_light_decomposition.hpp
layout: document
redirect_from:
- /library/competitive/tree/heavy_light_decomposition.hpp
- /library/competitive/tree/heavy_light_decomposition.hpp.html
title: "HL\u5206\u89E3 (Heavy Light Decomposition)"
---