---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: competitive/algorithm/longest_common_subsequence.hpp
    title: longest_common_subsequence.hpp
  - icon: ':question:'
    path: competitive/std/io.hpp
    title: io.hpp
  - icon: ':question:'
    path: competitive/std/std.hpp
    title: std.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_10_C
    links:
    - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_10_C
  bundledCode: "#line 1 \"online_test/AOJ/ALDS_1_10_C.test.cpp\"\n#define PROBLEM\
    \ \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_10_C\"\n#line\
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
    \ * @docs docs/std/std.md\n */\n#line 3 \"competitive/algorithm/longest_common_subsequence.hpp\"\
    \n// return index_of a for longest common subsequence\ntemplate <class T> vector<int>\
    \ lcs(vector<T> const &a, vector<T> const &b) {\n    int n = sz(a);\n    int m\
    \ = sz(b);\n    if (n == 0 || m == 0) {\n        vector<int> rev;\n        return\
    \ rev;\n    }\n    const int FROM_UPPER_LEFT = 1;\n    const int FROM_UPPER =\
    \ 2;\n    const int FROM_LEFT = 3;\n    vvi dp(n+1, vi(m+1, 0));\n    vvi prev(n+1,\
    \ vi(m+1, 0));\n    rep(i, 1, n+1) rep(j, 1, m+1) {\n        if (a[i-1] == b[j-1])\
    \ {\n            if (chmax(dp[i][j], dp[i-1][j-1] + 1)) prev[i][j] = FROM_UPPER_LEFT;\n\
    \        }\n        if (chmax(dp[i][j], dp[i-1][j])) prev[i][j] = FROM_UPPER;\n\
    \        if (chmax(dp[i][j], dp[i][j-1])) prev[i][j] = FROM_LEFT;\n    }\n   \
    \ int ni = n;\n    int mi = m;\n    vector<int> rev(dp[n][m], 0);\n    int pos\
    \ = dp[n][m] - 1;\n    while (pos >= 0) {\n        if (prev[ni][mi] == FROM_UPPER_LEFT)\
    \ {\n            ni--, mi--;\n            rev[pos] = ni;\n            --pos;\n\
    \        } else if (prev[ni][mi] == FROM_UPPER) {\n            ni--;\n       \
    \ } else {\n            mi--;\n        }\n    }\n    return rev;\n};\nvector<int>\
    \ lcs(string const &a, string const &b) {\n    vector<char> _a(a.begin(), a.end());\n\
    \    vector<char> _b(b.begin(), b.end());\n    return lcs(_a, _b);\n};\n/**\n\
    \ * @brief longest_common_subsequence.hpp\n * @docs docs/algorithm/longest_common_subsequence.md\n\
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
    \ };\n#ifdef LOCAL_TEST\ntemplate <typename T>\nvoid debug_func(int i, T name)\
    \ { (void)i; (void)name; cerr << endl; }\ntemplate <typename T1, typename T2,\
    \ typename... T3> void debug_func(int i, const T1 &name, const T2 &a, const T3\
    \ &...b) {\n    int scope = 0;\n    for ( ; (scope != 0 || name[i] != ',') &&\
    \ name[i] != '\\0'; i++ ) {\n        cerr << name[i];\n        if (name[i] ==\
    \ '(' || name[i] == '{') scope++;\n        if (name[i] == ')' || name[i] == '}')\
    \ scope--;\n    }\n    cerr << \":\" << a << \" \";\n    debug_func(i + 1, name,\
    \ b...);\n}\n#endif\n#ifndef LOCAL_TEST\ntemplate <typename... T>\nvoid debug_func(const\
    \ T &...) {}\n#endif\n/**\n * @brief io.hpp\n * @docs docs/std/io.md\n */\n#line\
    \ 5 \"online_test/AOJ/ALDS_1_10_C.test.cpp\"\nint main() {\n    int n;\n    cin\
    \ >> n;\n    rep(i, n) {\n        string s,t;\n        cin >> s >> t;\n      \
    \  vector<char> sv, tv;\n        rep(i, sz(s)) sv.push_back(s[i]);\n        rep(i,\
    \ sz(t)) tv.push_back(t[i]);\n        cout << lcs(sv, tv).size() << endl;\n  \
    \  }\n}\n"
  code: "#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_10_C\"\
    \n#include \"competitive/std/std.hpp\"\n#include \"competitive/algorithm/longest_common_subsequence.hpp\"\
    \n#include \"competitive/std/io.hpp\"\nint main() {\n    int n;\n    cin >> n;\n\
    \    rep(i, n) {\n        string s,t;\n        cin >> s >> t;\n        vector<char>\
    \ sv, tv;\n        rep(i, sz(s)) sv.push_back(s[i]);\n        rep(i, sz(t)) tv.push_back(t[i]);\n\
    \        cout << lcs(sv, tv).size() << endl;\n    }\n}"
  dependsOn:
  - competitive/std/std.hpp
  - competitive/algorithm/longest_common_subsequence.hpp
  - competitive/std/io.hpp
  isVerificationFile: true
  path: online_test/AOJ/ALDS_1_10_C.test.cpp
  requiredBy: []
  timestamp: '2023-04-11 04:02:35+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: online_test/AOJ/ALDS_1_10_C.test.cpp
layout: document
redirect_from:
- /verify/online_test/AOJ/ALDS_1_10_C.test.cpp
- /verify/online_test/AOJ/ALDS_1_10_C.test.cpp.html
title: online_test/AOJ/ALDS_1_10_C.test.cpp
---