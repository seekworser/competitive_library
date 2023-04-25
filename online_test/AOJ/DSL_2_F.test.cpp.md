---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: atcoder/internal_bit.hpp
    title: atcoder/internal_bit.hpp
  - icon: ':heavy_check_mark:'
    path: atcoder/lazysegtree.hpp
    title: atcoder/lazysegtree.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/data_structure/lazysegtree.hpp
    title: "\u9045\u5EF6\u30BB\u30B0\u30E1\u30F3\u30C8\u6728\uFF08\u30E9\u30C3\u30D1\
      \u30FC\uFF09"
  - icon: ':heavy_check_mark:'
    path: competitive/std/io.hpp
    title: io.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/std/std.hpp
    title: std.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_F
    links:
    - https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_F
  bundledCode: "#line 1 \"online_test/AOJ/DSL_2_F.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_F\"\
    \n#line 2 \"competitive/std/std.hpp\"\n#include <bits/stdc++.h>\n#ifndef LOCAL_TEST\n\
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
    \ (a).end());} // \u91CD\u8907\u9664\u53BB\nvoid Yes(bool b=true) { cout << (b\
    \ ? \"Yes\\n\" : \"No\\n\"); return; };\nvoid YES(bool b=true) { cout << (b ?\
    \ \"YES\\n\" : \"NO\\n\"); return; };\nvoid No(bool b=true) {Yes(!b);};\nvoid\
    \ NO(bool b=true) {YES(!b);};\ntemplate<typename T, size_t N> T max(array<T, N>&\
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
    \ * @docs docs/std/std.md\n */\n#line 6 \"atcoder/lazysegtree.hpp\"\n\n#line 2\
    \ \"atcoder/internal_bit.hpp\"\n#ifdef _MSC_VER\n#include <intrin.h>\n#endif\n\
    \nnamespace atcoder {\n\nnamespace internal {\n\n// @param n `0 <= n`\n// @return\
    \ minimum non-negative `x` s.t. `n <= 2**x`\nint ceil_pow2(int n) {\n    int x\
    \ = 0;\n    while ((1U << x) < (unsigned int)(n)) x++;\n    return x;\n}\n\n//\
    \ @param n `1 <= n`\n// @return minimum non-negative `x` s.t. `(n & (1 << x))\
    \ != 0`\nconstexpr int bsf_constexpr(unsigned int n) {\n    int x = 0;\n    while\
    \ (!(n & (1 << x))) x++;\n    return x;\n}\n\n// @param n `1 <= n`\n// @return\
    \ minimum non-negative `x` s.t. `(n & (1 << x)) != 0`\nint bsf(unsigned int n)\
    \ {\n#ifdef _MSC_VER\n    unsigned long index;\n    _BitScanForward(&index, n);\n\
    \    return index;\n#else\n    return __builtin_ctz(n);\n#endif\n}\n\n}  // namespace\
    \ internal\n\n}  // namespace atcoder\n#line 8 \"atcoder/lazysegtree.hpp\"\n\n\
    namespace atcoder {\n\ntemplate <class S,\n          S (*_op)(S, S),\n       \
    \   S (*_e)(),\n          class F,\n          S (*_mapping)(F, S),\n         \
    \ F (*_composition)(F, F),\n          F (*_id)()>\nstruct lazy_segtree {\n  public:\n\
    \    S (*op)(S, S) = _op;\n    S (*e)() = _e;\n    S (*mapping)(F, S) = _mapping;\n\
    \    F (*composition)(F, F) = _composition;\n    F (*id)() = _id;\n    lazy_segtree()\
    \ : lazy_segtree(0) {}\n    explicit lazy_segtree(int n) : lazy_segtree(std::vector<S>(n,\
    \ _e())) {}\n    explicit lazy_segtree(const std::vector<S>& v) : _n(int(v.size()))\
    \ {\n        log = internal::ceil_pow2(_n);\n        size = 1 << log;\n      \
    \  d = std::vector<S>(2 * size, e());\n        lz = std::vector<F>(size, id());\n\
    \        for (int i = 0; i < _n; i++) d[size + i] = v[i];\n        for (int i\
    \ = size - 1; i >= 1; i--) {\n            update(i);\n        }\n    }\n\n   \
    \ void set(int p, S x) {\n        assert(0 <= p && p < _n);\n        p += size;\n\
    \        for (int i = log; i >= 1; i--) push(p >> i);\n        d[p] = x;\n   \
    \     for (int i = 1; i <= log; i++) update(p >> i);\n    }\n\n    void add(int\
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
    #line 4 \"competitive/data_structure/lazysegtree.hpp\"\ntemplate <typename S,\
    \ S (*op)(S, S), S (*e)(), class F, S (*mapping)(F, S), F (*composition)(F, F),\
    \ F (*id)()>\nstd::ostream& operator<<(std::ostream& os, atcoder::lazy_segtree<S,\
    \ op, e, F, mapping, composition, id> seg) {\n    int n = seg.n();\n    rep(i,\
    \ n) { os << seg.get(i); if (i != n-1) os << \" \"; }\n    return os;\n};\n\n\
    namespace lsegtree_internal {\n    template<typename T> struct AddNode {\n   \
    \     T value;\n        ll size;\n        AddNode() : value(T(0)), size(1) {};\n\
    \        AddNode(T value, ll size) : value(value), size(size) {};\n        friend\
    \ ostream& operator<<(std::ostream& os, const AddNode<T> &n) { os << n.value;\
    \ return os; };\n    };\n\n    template<typename T> T e_max() { return -INFL;\
    \ }\n    template<> int e_max() { return -INF; }\n    template<typename T> T e_min()\
    \ { return INFL; }\n    template<> int e_min() { return INF; }\n    template<typename\
    \ T> AddNode<T> e_add() { return {0, 1}; }\n\n    template<typename T> T op_max(T\
    \ x, T y) { return x > y ? x : y; }\n    template<typename T> T op_min(T x, T\
    \ y) { return x < y ? x : y; }\n    template<typename T> AddNode<T> op_add(AddNode<T>\
    \ x, AddNode<T> y) { return {x.value + y.value, x.size + y.size}; }\n\n    template<typename\
    \ T> T id_radd(){ return 0; }\n    template<typename T> T id_rupdate(){ return\
    \ INFL; }\n    template<> int id_rupdate(){ return INF; }\n\n    template<typename\
    \ T> AddNode<T> mapping_add_radd(T f, AddNode<T> x){ return {x.value + f * x.size,\
    \ x.size}; }\n    template<typename T> AddNode<T> mapping_add_rupdate(T f, AddNode<T>\
    \ x){\n        AddNode<T> rev = AddNode<T>(x);\n        if(f != id_rupdate<T>())\
    \ rev.value = f * rev.size;\n        return rev;\n    }\n    template<typename\
    \ T> T mapping_radd(T f, T x){ return f+x; }\n    template<typename T> T mapping_rupdate(T\
    \ f, T x){ return (f == id_rupdate<T>() ? x : f); }\n\n    template<typename T>\
    \ T composition_radd(T f, T g){ return f+g; }\n    template<typename T> T composition_rupdate(T\
    \ f, T g){ return (f == id_rupdate<T>() ? g : f); }\n}\n\ntemplate <typename S,\
    \ S (*op)(S, S), S (*e)(), class F, S (*mapping)(F, S), F (*composition)(F, F),\
    \ F (*id)()>\nusing lsegtree = atcoder::lazy_segtree<S, op, e, F, mapping, composition,\
    \ id>;\ntemplate<typename T> using lseg_add_radd = atcoder::lazy_segtree<lsegtree_internal::AddNode<T>,\
    \ lsegtree_internal::op_add<T>, lsegtree_internal::e_add<T>, T, lsegtree_internal::mapping_add_radd<T>,\
    \ lsegtree_internal::composition_radd<T>, lsegtree_internal::id_radd<T>>;\ntemplate<typename\
    \ T> using lseg_min_radd = atcoder::lazy_segtree<T, lsegtree_internal::op_min<T>,\
    \ lsegtree_internal::e_min<T>, T, lsegtree_internal::mapping_radd<T>, lsegtree_internal::composition_radd<T>,\
    \ lsegtree_internal::id_radd<T>>;\ntemplate<typename T> using lseg_max_radd =\
    \ atcoder::lazy_segtree<T, lsegtree_internal::op_max<T>, lsegtree_internal::e_max<T>,\
    \ T, lsegtree_internal::mapping_radd<T>, lsegtree_internal::composition_radd<T>,\
    \ lsegtree_internal::id_radd<T>>;\ntemplate<typename T> using lseg_add_rupdate\
    \ = atcoder::lazy_segtree<lsegtree_internal::AddNode<T>, lsegtree_internal::op_add<T>,\
    \ lsegtree_internal::e_add<T>, T, lsegtree_internal::mapping_add_rupdate<T>, lsegtree_internal::composition_rupdate<T>,\
    \ lsegtree_internal::id_rupdate<T>>;\ntemplate<typename T> using lseg_min_rupdate\
    \ = atcoder::lazy_segtree<T, lsegtree_internal::op_min<T>, lsegtree_internal::e_min<T>,\
    \ T, lsegtree_internal::mapping_rupdate<T>, lsegtree_internal::composition_rupdate<T>,\
    \ lsegtree_internal::id_rupdate<T>>;\ntemplate<typename T> using lseg_max_rupdate\
    \ = atcoder::lazy_segtree<T, lsegtree_internal::op_max<T>, lsegtree_internal::e_max<T>,\
    \ T, lsegtree_internal::mapping_rupdate<T>, lsegtree_internal::composition_rupdate<T>,\
    \ lsegtree_internal::id_rupdate<T>>;\n/**\n * @brief \u9045\u5EF6\u30BB\u30B0\u30E1\
    \u30F3\u30C8\u6728\uFF08\u30E9\u30C3\u30D1\u30FC\uFF09\n * @docs docs/data_structure/lazysegtree.md\n\
    \ */\n#line 3 \"competitive/std/io.hpp\"\n// \u6F14\u7B97\u5B50\u30AA\u30FC\u30D0\
    \u30FC\u30ED\u30FC\u30C9\uFF08\u30D7\u30ED\u30C8\u30BF\u30A4\u30D7\u5BA3\u8A00\
    \uFF09\ntemplate <class T, class U> inline istream& operator>>(istream& is, pair<T,\
    \ U>& p);\ntemplate <class T> inline istream& operator>>(istream& is, vector<T>&\
    \ v);\ntemplate <class T, class U> inline ostream& operator<<(ostream& os, const\
    \ pair<T, U>& p);\ntemplate <class T> inline ostream& operator<<(ostream& os,\
    \ const vector<T>& v);\ntemplate <typename T, typename S> ostream &operator<<(ostream\
    \ &os, const map<T, S> &mp);\ntemplate <typename T> ostream &operator<<(ostream\
    \ &os, const set<T> &st);\ntemplate <typename T> ostream &operator<<(ostream &os,\
    \ const multiset<T> &st);\ntemplate <typename T> ostream &operator<<(ostream &os,\
    \ const unordered_set<T> &st);\ntemplate <typename T> ostream &operator<<(ostream\
    \ &os, queue<T> q);\ntemplate <typename T> ostream &operator<<(ostream &os, deque<T>\
    \ q);\ntemplate <typename T> ostream &operator<<(ostream &os, stack<T> st);\n\
    template <class T, class Container, class Compare> ostream &operator<<(ostream\
    \ &os, priority_queue<T, Container, Compare> pq);\n\n// \u6F14\u7B97\u5B50\u30AA\
    \u30FC\u30D0\u30FC\u30ED\u30FC\u30C9\ntemplate <class T, class U> inline istream&\
    \ operator>>(istream& is, pair<T, U>& p) { is >> p.first >> p.second; return is;\
    \ }\ntemplate <class T> inline istream& operator>>(istream& is, vector<T>& v)\
    \ { repe(x, v) is >> x; return is; }\ntemplate <class T, class U> inline ostream&\
    \ operator<<(ostream& os, const pair<T, U>& p) { os << p.first << \" \" << p.second;\
    \ return os; }\ntemplate <class T> inline ostream& operator<<(ostream& os, const\
    \ vector<T>& v) { rep(i, sz(v)) { os << v.at(i); if (i != sz(v) - 1) os << \"\
    \ \"; } return os; }\ntemplate <typename T, typename S> ostream &operator<<(ostream\
    \ &os, const map<T, S> &mp) { for (auto &[key, val] : mp) { os << key << \":\"\
    \ << val << \" \"; } return os; }\ntemplate <typename T> ostream &operator<<(ostream\
    \ &os, const set<T> &st) { auto itr = st.begin(); for (int i = 0; i < (int)st.size();\
    \ i++) { os << *itr << (i + 1 != (int)st.size() ? \" \" : \"\"); itr++; } return\
    \ os; }\ntemplate <typename T> ostream &operator<<(ostream &os, const multiset<T>\
    \ &st) { auto itr = st.begin(); for (int i = 0; i < (int)st.size(); i++) { os\
    \ << *itr << (i + 1 != (int)st.size() ? \" \" : \"\"); itr++; } return os; }\n\
    template <typename T> ostream &operator<<(ostream &os, const unordered_set<T>\
    \ &st) { ll cnt = 0; for (auto &e : st) { os << e << (++cnt != (int)st.size()\
    \ ? \" \" : \"\"); } return os; }\ntemplate <typename T> ostream &operator<<(ostream\
    \ &os, queue<T> q) { while (q.size()) { os << q.front() << \" \"; q.pop(); } return\
    \ os; }\ntemplate <typename T> ostream &operator<<(ostream &os, deque<T> q) {\
    \ while (q.size()) { os << q.front() << \" \"; q.pop_front(); } return os; }\n\
    template <typename T> ostream &operator<<(ostream &os, stack<T> st) { while (st.size())\
    \ { os << st.top() << \" \"; st.pop(); } return os; }\ntemplate <class T, class\
    \ Container, class Compare> ostream &operator<<(ostream &os, priority_queue<T,\
    \ Container, Compare> pq) { while (pq.size()) { os << pq.top() << \" \"; pq.pop();\
    \ } return os; }\n\ntemplate <typename T> void print_sep_end(string sep, string\
    \ end, const T& val) { (void)sep; cout << val << end; };\ntemplate <typename T1,\
    \ typename... T2> void print_sep_end(string sep, string end, const T1 &val, const\
    \ T2 &...remain) {\n    cout << val << sep;\n    print_sep_end(sep, end, remain...);\n\
    };\ntemplate <typename... T> void print(const T &...args) { print_sep_end(\" \"\
    , \"\\n\", args...); };\ntemplate <typename... T> void flush() { cout << flush;\
    \ };\ntemplate <typename... T> void print_and_flush(const T &...args) { print(args...);\
    \ flush(); };\n#define debug(...) debug_func(0, #__VA_ARGS__, __VA_ARGS__) //\
    \ debug print\ntemplate <typename T> void input(T &a) { cin >> a; };\ntemplate\
    \ <typename T1, typename... T2> void input(T1&a, T2 &...b) { cin >> a; input(b...);\
    \ };\n#ifdef LOCAL_TEST\ntemplate <typename T> void debug_func(int i, const T\
    \ name) { (void)i; (void)name; cerr << endl; }\ntemplate <typename T1, typename\
    \ T2, typename... T3> void debug_func(int i, const T1 &name, const T2 &a, const\
    \ T3 &...b) {\n    int scope = 0;\n    for ( ; (scope != 0 || name[i] != ',')\
    \ && name[i] != '\\0'; i++ ) {\n        cerr << name[i];\n        if (name[i]\
    \ == '(' || name[i] == '{') scope++;\n        if (name[i] == ')' || name[i] ==\
    \ '}') scope--;\n    }\n    cerr << \":\" << a << \" \";\n    debug_func(i + 1,\
    \ name, b...);\n}\ntemplate <typename T1, typename T2, typename... T3> void debug_func(int\
    \ i, const T1 &name, T2 &a, T3 &...b) {\n    int scope = 0;\n    for ( ; (scope\
    \ != 0 || name[i] != ',') && name[i] != '\\0'; i++ ) {\n        cerr << name[i];\n\
    \        if (name[i] == '(' || name[i] == '{') scope++;\n        if (name[i] ==\
    \ ')' || name[i] == '}') scope--;\n    }\n    cerr << \":\" << a << \" \";\n \
    \   debug_func(i + 1, name, b...);\n}\n#endif\n#ifndef LOCAL_TEST\ntemplate <typename...\
    \ T>\nvoid debug_func(T &...) {}\ntemplate <typename... T>\nvoid debug_func(const\
    \ T &...) {}\n#endif\n/**\n * @brief io.hpp\n * @docs docs/std/io.md\n */\n#line\
    \ 5 \"online_test/AOJ/DSL_2_F.test.cpp\"\nint main() {\n    int n,q;\n    input(n,q);\n\
    \    lseg_min_rupdate<ll> lseg(vl(n, powm(2,31) - 1));\n    rep(i, q) {\n    \
    \    int t;\n        input(t);\n        if (t == 0) {\n            int s,t; ll\
    \ x;\n            input(s,t,x);\n            lseg.apply(s, t+1, x);\n        }\
    \ else {\n            int s,t;\n            input(s,t);\n            print(lseg.prod(s,\
    \ t+1));\n        }\n    }\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_F\"\n#include\
    \ \"competitive/std/std.hpp\"\n#include \"competitive/data_structure/lazysegtree.hpp\"\
    \n#include \"competitive/std/io.hpp\"\nint main() {\n    int n,q;\n    input(n,q);\n\
    \    lseg_min_rupdate<ll> lseg(vl(n, powm(2,31) - 1));\n    rep(i, q) {\n    \
    \    int t;\n        input(t);\n        if (t == 0) {\n            int s,t; ll\
    \ x;\n            input(s,t,x);\n            lseg.apply(s, t+1, x);\n        }\
    \ else {\n            int s,t;\n            input(s,t);\n            print(lseg.prod(s,\
    \ t+1));\n        }\n    }\n}\n"
  dependsOn:
  - competitive/std/std.hpp
  - competitive/data_structure/lazysegtree.hpp
  - atcoder/lazysegtree.hpp
  - atcoder/internal_bit.hpp
  - competitive/std/io.hpp
  isVerificationFile: true
  path: online_test/AOJ/DSL_2_F.test.cpp
  requiredBy: []
  timestamp: '2023-04-25 12:18:24+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: online_test/AOJ/DSL_2_F.test.cpp
layout: document
redirect_from:
- /verify/online_test/AOJ/DSL_2_F.test.cpp
- /verify/online_test/AOJ/DSL_2_F.test.cpp.html
title: online_test/AOJ/DSL_2_F.test.cpp
---
