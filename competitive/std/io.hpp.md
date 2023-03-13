---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: competitive/std/std.hpp
    title: std.hpp
  _extendedRequiredBy:
  - icon: ':warning:'
    path: online_test/AOJ/NTL_1_D.cpp
    title: online_test/AOJ/NTL_1_D.cpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/ALDS_1_10_C.test.cpp
    title: online_test/AOJ/ALDS_1_10_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/ALDS_1_14_B.test.cpp
    title: online_test/AOJ/ALDS_1_14_B.test.cpp
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
    path: online_test/AOJ/CGL_2_D.test.cpp
    title: online_test/AOJ/CGL_2_D.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/CGL_3_A.test.cpp
    title: online_test/AOJ/CGL_3_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/CGL_3_B.test.cpp
    title: online_test/AOJ/CGL_3_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/CGL_4_A.test.cpp
    title: online_test/AOJ/CGL_4_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/DPL_1_D.test.cpp
    title: online_test/AOJ/DPL_1_D.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/DSL_2_F.test.cpp
    title: online_test/AOJ/DSL_2_F.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/DSL_2_G.test.cpp
    title: online_test/AOJ/DSL_2_G.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/DSL_2_H.test.cpp
    title: online_test/AOJ/DSL_2_H.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/DSL_2_I.test.cpp
    title: online_test/AOJ/DSL_2_I.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/GRL_1_A.test.cpp
    title: online_test/AOJ/GRL_1_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/GRL_1_C.test.cpp
    title: online_test/AOJ/GRL_1_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/ITPI_1_A.test.cpp
    title: online_test/AOJ/ITPI_1_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/library-checker/aplusb.test.cpp
    title: online_test/library-checker/aplusb.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/library-checker/longest_increasing_subsequence.test.cpp
    title: online_test/library-checker/longest_increasing_subsequence.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/library-checker/shortest_path_dijkstra.test.cpp
    title: online_test/library-checker/shortest_path_dijkstra.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/library-checker/shortest_path_fast_dijkstra.test.cpp
    title: online_test/library-checker/shortest_path_fast_dijkstra.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/library-checker/static_range_sum.test.cpp
    title: online_test/library-checker/static_range_sum.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/yukicoder/yuki-hello-world.test.cpp
    title: online_test/yukicoder/yuki-hello-world.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    _deprecated_at_docs: docs/std/io.md
    document_title: io.hpp
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
    \ queue<T> q);\ntemplate <typename T> ostream &operator<<(ostream &os, deque<T>\
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
    template <typename T> ostream &operator<<(ostream &os, queue<T> q) { while (q.size())\
    \ { os << q.front() << \" \"; q.pop(); } return os; }\ntemplate <typename T> ostream\
    \ &operator<<(ostream &os, deque<T> q) { while (q.size()) { os << q.front() <<\
    \ \" \"; q.pop_front(); } return os; }\ntemplate <typename T> ostream &operator<<(ostream\
    \ &os, stack<T> st) { while (st.size()) { os << st.top() << \" \"; st.pop(); }\
    \ return os; }\ntemplate <class T, class Container, class Compare> ostream &operator<<(ostream\
    \ &os, priority_queue<T, Container, Compare> pq) { while (pq.size()) { os << pq.top()\
    \ << \" \"; pq.pop(); } return os; }\n\ntemplate <typename T> void print_sep_end(string\
    \ sep, string end, const T& val) { (void)sep; cout << val << end; };\ntemplate\
    \ <typename T1, typename... T2> void print_sep_end(string sep, string end, const\
    \ T1 &val, const T2 &...remain) {\n    cout << val << sep;\n    print_sep_end(sep,\
    \ end, remain...);\n};\ntemplate <typename... T> void print(const T &...args)\
    \ { print_sep_end(\" \", \"\\n\", args...); };\ntemplate <typename... T> void\
    \ flush() { cout << flush; };\ntemplate <typename... T> void print_and_flush(const\
    \ T &...args) { print(args...); flush(); };\n#define debug(...) debug_func(0,\
    \ #__VA_ARGS__, __VA_ARGS__) // debug print\ntemplate <typename T> void input_only(T\
    \ &a) { cin >> a; };\ntemplate <typename T1, typename... T2> void input_only(T1&a,\
    \ T2 &...b) { cin >> a; read(b...); };\n#define input(type, ...) type __VA_ARGS__;\
    \ input_only(__VA_ARGS__);\n#define vec(type, name, ...) vector<type> name(__VA_ARGS__)\
    \  // vec(type, name, n, init(optiobal))\n#define vvec(type, name, h, ...) vector\
    \ name(h, vector<type>(__VA_ARGS__))\n#define vvvec(type, name, h, w, ...) vector\
    \ name(h, vector(w, vector<type>(__VA_ARGS__)))\n#define vvvvec(type, name, h1,\
    \ h2, h3, ...) vector name(h1, vector(h2, vector(h3, vector<type>(__VA_ARGS__))))\n\
    #define vvvvvec(type, name, h1, h2, h3, h4, ...) vector name(h1, vector(h2, vector(h3,\
    \ vector(h4, vector<type>(__VA_ARGS__)))))\n#define input_vec(type, name, ...)\
    \ vec(type, name, __VA_ARGS__); input_only(name);\n#define input_vvec(type, name,\
    \ h, ...) vvec(type, name, h, __VA_ARGS__); input_only(name);\n#define input_vvvec(type,\
    \ name, h, w, ...) vvvec(type, name, h, w, __VA_ARGS__); input_only(name);\n#define\
    \ input_vvvvec(type, name, h1, h2, h3, ...) vvvvec(type, name, h1, h2, h3, __VA_ARGS__);\
    \ input_only(name);\n#define input_vvvvvec(type, name, h1, h2, h3, h4, ...) vvvvvec(type,\
    \ name, h1, h2, h3, h4, __VA_ARGS__); input_only(name);\n#ifdef LOCAL_TEST\ntemplate\
    \ <typename T>\nvoid debug_func(int i, T name) { (void)i; (void)name; cerr <<\
    \ endl; }\ntemplate <typename T1, typename T2, typename... T3> void debug_func(int\
    \ i, const T1 &name, const T2 &a, const T3 &...b) {\n    int scope = 0;\n    for\
    \ ( ; (scope != 0 || name[i] != ',') && name[i] != '\\0'; i++ ) {\n        cerr\
    \ << name[i];\n        if (name[i] == '(' || name[i] == '{') scope++;\n      \
    \  if (name[i] == ')' || name[i] == '}') scope--;\n    }\n    cerr << \":\" <<\
    \ a << \" \";\n    debug_func(i + 1, name, b...);\n}\n#endif\n#ifndef LOCAL_TEST\n\
    template <typename... T>\nvoid debug_func(const T &...) {}\n#endif\n/**\n * @brief\
    \ io.hpp\n * @docs docs/std/io.md\n */\n"
  code: "#pragma once\n#include \"competitive/std/std.hpp\"\n// \u6F14\u7B97\u5B50\
    \u30AA\u30FC\u30D0\u30FC\u30ED\u30FC\u30C9\uFF08\u30D7\u30ED\u30C8\u30BF\u30A4\
    \u30D7\u5BA3\u8A00\uFF09\ntemplate <class T, class U> inline istream& operator>>(istream&\
    \ is, pair<T, U>& p);\ntemplate <class T> inline istream& operator>>(istream&\
    \ is, vector<T>& v);\ntemplate <class T, class U> inline ostream& operator<<(ostream&\
    \ os, const pair<T, U>& p);\ntemplate <class T> inline ostream& operator<<(ostream&\
    \ os, const vector<T>& v);\ntemplate <typename T, typename S> ostream &operator<<(ostream\
    \ &os, const map<T, S> &mp);\ntemplate <typename T> ostream &operator<<(ostream\
    \ &os, const set<T> &st);\ntemplate <typename T> ostream &operator<<(ostream &os,\
    \ const multiset<T> &st);\ntemplate <typename T> ostream &operator<<(ostream &os,\
    \ queue<T> q);\ntemplate <typename T> ostream &operator<<(ostream &os, deque<T>\
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
    template <typename T> ostream &operator<<(ostream &os, queue<T> q) { while (q.size())\
    \ { os << q.front() << \" \"; q.pop(); } return os; }\ntemplate <typename T> ostream\
    \ &operator<<(ostream &os, deque<T> q) { while (q.size()) { os << q.front() <<\
    \ \" \"; q.pop_front(); } return os; }\ntemplate <typename T> ostream &operator<<(ostream\
    \ &os, stack<T> st) { while (st.size()) { os << st.top() << \" \"; st.pop(); }\
    \ return os; }\ntemplate <class T, class Container, class Compare> ostream &operator<<(ostream\
    \ &os, priority_queue<T, Container, Compare> pq) { while (pq.size()) { os << pq.top()\
    \ << \" \"; pq.pop(); } return os; }\n\ntemplate <typename T> void print_sep_end(string\
    \ sep, string end, const T& val) { (void)sep; cout << val << end; };\ntemplate\
    \ <typename T1, typename... T2> void print_sep_end(string sep, string end, const\
    \ T1 &val, const T2 &...remain) {\n    cout << val << sep;\n    print_sep_end(sep,\
    \ end, remain...);\n};\ntemplate <typename... T> void print(const T &...args)\
    \ { print_sep_end(\" \", \"\\n\", args...); };\ntemplate <typename... T> void\
    \ flush() { cout << flush; };\ntemplate <typename... T> void print_and_flush(const\
    \ T &...args) { print(args...); flush(); };\n#define debug(...) debug_func(0,\
    \ #__VA_ARGS__, __VA_ARGS__) // debug print\ntemplate <typename T> void input_only(T\
    \ &a) { cin >> a; };\ntemplate <typename T1, typename... T2> void input_only(T1&a,\
    \ T2 &...b) { cin >> a; read(b...); };\n#define input(type, ...) type __VA_ARGS__;\
    \ input_only(__VA_ARGS__);\n#define vec(type, name, ...) vector<type> name(__VA_ARGS__)\
    \  // vec(type, name, n, init(optiobal))\n#define vvec(type, name, h, ...) vector\
    \ name(h, vector<type>(__VA_ARGS__))\n#define vvvec(type, name, h, w, ...) vector\
    \ name(h, vector(w, vector<type>(__VA_ARGS__)))\n#define vvvvec(type, name, h1,\
    \ h2, h3, ...) vector name(h1, vector(h2, vector(h3, vector<type>(__VA_ARGS__))))\n\
    #define vvvvvec(type, name, h1, h2, h3, h4, ...) vector name(h1, vector(h2, vector(h3,\
    \ vector(h4, vector<type>(__VA_ARGS__)))))\n#define input_vec(type, name, ...)\
    \ vec(type, name, __VA_ARGS__); input_only(name);\n#define input_vvec(type, name,\
    \ h, ...) vvec(type, name, h, __VA_ARGS__); input_only(name);\n#define input_vvvec(type,\
    \ name, h, w, ...) vvvec(type, name, h, w, __VA_ARGS__); input_only(name);\n#define\
    \ input_vvvvec(type, name, h1, h2, h3, ...) vvvvec(type, name, h1, h2, h3, __VA_ARGS__);\
    \ input_only(name);\n#define input_vvvvvec(type, name, h1, h2, h3, h4, ...) vvvvvec(type,\
    \ name, h1, h2, h3, h4, __VA_ARGS__); input_only(name);\n#ifdef LOCAL_TEST\ntemplate\
    \ <typename T>\nvoid debug_func(int i, T name) { (void)i; (void)name; cerr <<\
    \ endl; }\ntemplate <typename T1, typename T2, typename... T3> void debug_func(int\
    \ i, const T1 &name, const T2 &a, const T3 &...b) {\n    int scope = 0;\n    for\
    \ ( ; (scope != 0 || name[i] != ',') && name[i] != '\\0'; i++ ) {\n        cerr\
    \ << name[i];\n        if (name[i] == '(' || name[i] == '{') scope++;\n      \
    \  if (name[i] == ')' || name[i] == '}') scope--;\n    }\n    cerr << \":\" <<\
    \ a << \" \";\n    debug_func(i + 1, name, b...);\n}\n#endif\n#ifndef LOCAL_TEST\n\
    template <typename... T>\nvoid debug_func(const T &...) {}\n#endif\n/**\n * @brief\
    \ io.hpp\n * @docs docs/std/io.md\n */\n"
  dependsOn:
  - competitive/std/std.hpp
  isVerificationFile: false
  path: competitive/std/io.hpp
  requiredBy:
  - online_test/AOJ/NTL_1_D.cpp
  timestamp: '2023-03-14 01:18:40+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - online_test/AOJ/DPL_1_D.test.cpp
  - online_test/AOJ/CGL_3_B.test.cpp
  - online_test/AOJ/GRL_1_A.test.cpp
  - online_test/AOJ/CGL_4_A.test.cpp
  - online_test/AOJ/ALDS_1_10_C.test.cpp
  - online_test/AOJ/CGL_2_B.test.cpp
  - online_test/AOJ/GRL_1_C.test.cpp
  - online_test/AOJ/CGL_1_C.test.cpp
  - online_test/AOJ/CGL_1_B.test.cpp
  - online_test/AOJ/CGL_1_A.test.cpp
  - online_test/AOJ/DSL_2_H.test.cpp
  - online_test/AOJ/DSL_2_I.test.cpp
  - online_test/AOJ/CGL_2_D.test.cpp
  - online_test/AOJ/DSL_2_G.test.cpp
  - online_test/AOJ/CGL_2_A.test.cpp
  - online_test/AOJ/CGL_2_C.test.cpp
  - online_test/AOJ/ALDS_1_14_B.test.cpp
  - online_test/AOJ/CGL_3_A.test.cpp
  - online_test/AOJ/DSL_2_F.test.cpp
  - online_test/AOJ/ITPI_1_A.test.cpp
  - online_test/yukicoder/yuki-hello-world.test.cpp
  - online_test/library-checker/static_range_sum.test.cpp
  - online_test/library-checker/shortest_path_fast_dijkstra.test.cpp
  - online_test/library-checker/aplusb.test.cpp
  - online_test/library-checker/longest_increasing_subsequence.test.cpp
  - online_test/library-checker/shortest_path_dijkstra.test.cpp
documentation_of: competitive/std/io.hpp
layout: document
redirect_from:
- /library/competitive/std/io.hpp
- /library/competitive/std/io.hpp.html
title: io.hpp
---
競プロテンプレート（入出力）

自作クラスを組込み型のtemplate型に割り当てた型のIOをしたいときに、
include順が自作クラス>io.hppの順でないとIOに失敗するため、std/std.hppとファイルを分離

例）
```cpp
using mint = modint;
vector<mint> a;
cin >> a;  // include順がおかしいとここで失敗する
cout << a;  // ここでも失敗する
```