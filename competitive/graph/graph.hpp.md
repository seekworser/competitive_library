---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: competitive/std/std.hpp
    title: std.hpp
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: competitive/graph/dijkstra.hpp
    title: dijkstra.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/graph/fast_dijkstra.hpp
    title: fast_dijkstra.hpp
  - icon: ':warning:'
    path: competitive/graph/max_k_dijkstra.hpp
    title: max_k_dijkstra.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/graph/warshall_floyd.hpp
    title: warshall_floyd.hpp
  - icon: ':warning:'
    path: competitive/tree/depth.hpp
    title: depth.hpp
  - icon: ':warning:'
    path: competitive/tree/diameter.hpp
    title: diameter.hpp
  - icon: ':warning:'
    path: competitive/tree/kruskal.hpp
    title: kruskal.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/GRL_1_A.test.cpp
    title: online_test/AOJ/GRL_1_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/GRL_1_C.test.cpp
    title: online_test/AOJ/GRL_1_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/library-checker/shortest_path_dijkstra.test.cpp
    title: online_test/library-checker/shortest_path_dijkstra.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/library-checker/shortest_path_fast_dijkstra.test.cpp
    title: online_test/library-checker/shortest_path_fast_dijkstra.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    _deprecated_at_docs: docs/graph/graph.md
    document_title: graph.hpp
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
    #define rep(i, n) for(ll i = 0, i##_len = ll(n); i < i##_len; ++i) // 0 \u304B\
    \u3089 n-1 \u307E\u3067\u6607\u9806\n#define repi(i, s, t) for(ll i = ll(s), i##_end\
    \ = ll(t); i < i##_end; ++i) // s \u304B\u3089 t \u307E\u3067\u6607\u9806\n#define\
    \ repis(i, s, t, step) for(ll i = ll(s), i##_end = ll(t); i < i##_end; i+=step)\
    \ // s \u304B\u3089 t \u307E\u3067 step\u305A\u3064\n#define repir(i, s, t, step)\
    \ for(ll i = ll(s), i##_end = ll(t); i > i##_end; i+=step) // s \u304B\u3089 t\
    \ \u307E\u3067 step\u305A\u3064\n#define repe(a, v) for(auto& a : (v)) // v \u306E\
    \u5168\u8981\u7D20\uFF08\u5909\u66F4\u53EF\u80FD\uFF09\n#define smod(n, m) ((((n)\
    \ % (m)) + (m)) % (m)) // \u975E\u8CA0mod\n#define sdiv(n, m) (((n) - smod(n,\
    \ m)) / (m)) // \u975E\u8CA0div\n#define uniq(a) {sort(all(a)); (a).erase(unique(all(a)),\
    \ (a).end());} // \u91CD\u8907\u9664\u53BB\nvoid Yes(bool b) { cout << (b ? \"\
    Yes\\n\" : \"No\\n\"); return; };\nvoid YES(bool b) { cout << (b ? \"YES\\n\"\
    \ : \"NO\\n\"); return; };\ntemplate<typename T, size_t N> T max(array<T, N>&\
    \ a) { return *max_element(all(a)); };\ntemplate<typename T, size_t N> T min(array<T,\
    \ N>& a) { return *min_element(all(a)); };\ntemplate<typename T> T max(vector<T>&\
    \ a) { return *max_element(all(a)); };\ntemplate<typename T> T min(vector<T>&\
    \ a) { return *min_element(all(a)); };\ntemplate<typename T> T sum(vector<T>&\
    \ a, T zero = T(0)) { T rev = zero; rep(i, sz(a)) rev += a[i]; return rev; };\n\
    \n// mod\u3067\u306Epow\nll powm(ll a, ll n, ll mod=INFL) {\n    ll res = 1;\n\
    \    while (n > 0) {\n        if (n & 1) res = (res * a) % mod;\n        if (n\
    \ > 1) a = (a * a) % mod;\n        n >>= 1;\n    }\n    return res;\n}\n// \u6574\
    \u6570Sqrt\nll sqrtll(ll x) {\n    assert(x >= 0);\n    ll hi(x), lo(0);\n   \
    \ while (hi != lo) {\n        ll y = (hi + lo + 1) / 2;\n        if (y <= x/y)\
    \ lo = y;\n        else hi = y - 1;\n    }\n    return lo;\n}\ntemplate <class\
    \ T> inline bool chmax(T& M, const T& x) { if (M < x) { M = x; return true; }\
    \ return false; } // \u6700\u5927\u5024\u3092\u66F4\u65B0\uFF08\u66F4\u65B0\u3055\
    \u308C\u305F\u3089 true \u3092\u8FD4\u3059\uFF09\ntemplate <class T> inline bool\
    \ chmin(T& m, const T& x) { if (m > x) { m = x; return true; } return false; }\
    \ // \u6700\u5C0F\u5024\u3092\u66F4\u65B0\uFF08\u66F4\u65B0\u3055\u308C\u305F\u3089\
    \ true \u3092\u8FD4\u3059\uFF09\nint digit(ll x, int d=10) { int rev=0; while\
    \ (x > 0) { rev++; x /= d;}; return rev; } // x\u306Ed\u9032\u6570\u6841\u6570\
    \n/**\n * @brief std.hpp\n * @docs docs/std/std.md\n */\n#line 3 \"competitive/graph/graph.hpp\"\
    \ntemplate <class Cost> struct Graph{\npublic:\n    struct Edge {\n        int\
    \ to;\n        Cost cost;\n        Edge() {};\n        Edge(int _to, Cost _cost)\
    \ : to(_to), cost(_cost) {};\n    };\n    struct AdjacencyListRange{\n       \
    \ using iterator = typename std::vector<Edge>::const_iterator;\n        iterator\
    \ begi, endi;\n        iterator begin() const { return begi; }\n        iterator\
    \ end() const { return endi; }\n        int size() const { return (int)distance(begi,\
    \ endi); }\n        const Edge& operator[](int i) const { return begi[i]; }\n\
    \    };\nprivate:\npublic:\n    vector<Edge> E;\n    vector<int> I;\n    int n;\n\
    \    Graph() : n(0) {}\n    Graph(int _n) : n(_n) {}\n    Graph(int _n, const\
    \ vector<int>& from, vector<int>& to, vector<Cost>& cost, bool rev = false) :\
    \ n(_n) {\n        vector<int> buf(n+1, 0);\n        for(int i=0; i<(int)from.size();\
    \ i++){\n            ++buf[from[i]];\n            if (rev) ++buf[to[i]];\n   \
    \     }\n        for(int i=1; i<=_n; i++) buf[i] += buf[i-1];\n        E.resize(buf[n]);\n\
    \        for(int i=(int)from.size()-1; i>=0; i--){\n            int u = from[i];\n\
    \            int v = to[i];\n            Cost c = cost[i];\n            E[--buf[u]]\
    \ = Edge(v, c);\n            if(rev) E[--buf[v]] = Edge(u, c);\n        }\n  \
    \      I = move(buf);\n    }\n    AdjacencyListRange operator[](int u) const {\n\
    \        return AdjacencyListRange{ E.begin() + I[u], E.begin() + I[u+1] };\n\
    \    }\n    int num_vertices() const { return n; }\n    int size() const { return\
    \ num_vertices(); }\n    int num_edges() const { return E.size(); }\n    // Graph\
    \ reversed_edges() const {\n    //     Graph res;\n    //     int _n = res.n =\
    \ n;\n    //     std::vector<int> buf(n+1, 0);\n    //     for(int v : E) ++buf[v];\n\
    \    //     for(int i=1; i<=n; i++) buf[i] += buf[i-1];\n    //     res.E.resize(buf[n]);\n\
    \    //     for(int u=0; u<n; u++) for(int v : operator[](u)) res.E[--buf[v]]\
    \ = u;\n    //     res.I = std::move(buf);\n    //     return res;\n    // }\n\
    };\ntemplate <class T> ostream& operator<<(ostream& os, Graph<T> g) {\n    bool\
    \ first = true;\n    rep(i, g.n) repe(e, g[i]) {\n        if (first) first = false;\n\
    \        else os << endl;\n        os << i << \"->\" << e.to << \": \" << e.cost;\n\
    \    }\n    return os;\n}\n/**\n * @brief graph.hpp\n * @docs docs/graph/graph.md\n\
    \ */\n"
  code: "#pragma once\n#include \"competitive/std/std.hpp\"\ntemplate <class Cost>\
    \ struct Graph{\npublic:\n    struct Edge {\n        int to;\n        Cost cost;\n\
    \        Edge() {};\n        Edge(int _to, Cost _cost) : to(_to), cost(_cost)\
    \ {};\n    };\n    struct AdjacencyListRange{\n        using iterator = typename\
    \ std::vector<Edge>::const_iterator;\n        iterator begi, endi;\n        iterator\
    \ begin() const { return begi; }\n        iterator end() const { return endi;\
    \ }\n        int size() const { return (int)distance(begi, endi); }\n        const\
    \ Edge& operator[](int i) const { return begi[i]; }\n    };\nprivate:\npublic:\n\
    \    vector<Edge> E;\n    vector<int> I;\n    int n;\n    Graph() : n(0) {}\n\
    \    Graph(int _n) : n(_n) {}\n    Graph(int _n, const vector<int>& from, vector<int>&\
    \ to, vector<Cost>& cost, bool rev = false) : n(_n) {\n        vector<int> buf(n+1,\
    \ 0);\n        for(int i=0; i<(int)from.size(); i++){\n            ++buf[from[i]];\n\
    \            if (rev) ++buf[to[i]];\n        }\n        for(int i=1; i<=_n; i++)\
    \ buf[i] += buf[i-1];\n        E.resize(buf[n]);\n        for(int i=(int)from.size()-1;\
    \ i>=0; i--){\n            int u = from[i];\n            int v = to[i];\n    \
    \        Cost c = cost[i];\n            E[--buf[u]] = Edge(v, c);\n          \
    \  if(rev) E[--buf[v]] = Edge(u, c);\n        }\n        I = move(buf);\n    }\n\
    \    AdjacencyListRange operator[](int u) const {\n        return AdjacencyListRange{\
    \ E.begin() + I[u], E.begin() + I[u+1] };\n    }\n    int num_vertices() const\
    \ { return n; }\n    int size() const { return num_vertices(); }\n    int num_edges()\
    \ const { return E.size(); }\n    // Graph reversed_edges() const {\n    //  \
    \   Graph res;\n    //     int _n = res.n = n;\n    //     std::vector<int> buf(n+1,\
    \ 0);\n    //     for(int v : E) ++buf[v];\n    //     for(int i=1; i<=n; i++)\
    \ buf[i] += buf[i-1];\n    //     res.E.resize(buf[n]);\n    //     for(int u=0;\
    \ u<n; u++) for(int v : operator[](u)) res.E[--buf[v]] = u;\n    //     res.I\
    \ = std::move(buf);\n    //     return res;\n    // }\n};\ntemplate <class T>\
    \ ostream& operator<<(ostream& os, Graph<T> g) {\n    bool first = true;\n   \
    \ rep(i, g.n) repe(e, g[i]) {\n        if (first) first = false;\n        else\
    \ os << endl;\n        os << i << \"->\" << e.to << \": \" << e.cost;\n    }\n\
    \    return os;\n}\n/**\n * @brief graph.hpp\n * @docs docs/graph/graph.md\n */\n"
  dependsOn:
  - competitive/std/std.hpp
  isVerificationFile: false
  path: competitive/graph/graph.hpp
  requiredBy:
  - competitive/graph/dijkstra.hpp
  - competitive/graph/fast_dijkstra.hpp
  - competitive/graph/max_k_dijkstra.hpp
  - competitive/graph/warshall_floyd.hpp
  - competitive/tree/diameter.hpp
  - competitive/tree/depth.hpp
  - competitive/tree/kruskal.hpp
  timestamp: '2023-03-05 19:42:23+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - online_test/library-checker/shortest_path_dijkstra.test.cpp
  - online_test/library-checker/shortest_path_fast_dijkstra.test.cpp
  - online_test/AOJ/GRL_1_A.test.cpp
  - online_test/AOJ/GRL_1_C.test.cpp
documentation_of: competitive/graph/graph.hpp
layout: document
redirect_from:
- /library/competitive/graph/graph.hpp
- /library/competitive/graph/graph.hpp.html
title: graph.hpp
---
