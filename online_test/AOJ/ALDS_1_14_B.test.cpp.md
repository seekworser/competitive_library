---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: competitive/std/io.hpp
    title: io.hpp
  - icon: ':question:'
    path: competitive/std/std.hpp
    title: std.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/string/rolling_hash.hpp
    title: rolling_hash.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_14_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_14_B
  bundledCode: "#line 1 \"online_test/AOJ/ALDS_1_14_B.test.cpp\"\n#define PROBLEM\
    \ \"https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_14_B\"\n#line 2 \"competitive/std/std.hpp\"\
    \n#include <bits/stdc++.h>\n#ifndef LOCAL_TEST\n#pragma GCC target (\"avx\")\n\
    #pragma GCC optimize(\"O3\")\n#pragma GCC optimize(\"unroll-loops\")\n#pragma\
    \ GCC target(\"sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native\")\n#endif\
    \ // LOCAL_TEST\nusing namespace std;\n// \u578B\u540D\u306E\u77ED\u7E2E\nusing\
    \ ll = long long;\nusing pii = pair<int, int>; using pll = pair<ll, ll>;\nusing\
    \ vi = vector<int>;  using vvi = vector<vi>; using vvvi = vector<vvi>;\nusing\
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
    \ * @docs docs/std/std.md\n */\n#line 3 \"competitive/string/rolling_hash.hpp\"\
    \nusing hash_t = unsigned long long;\nusing hash_vector_t = vector<hash_t>;\n\
    constexpr hash_t RHMOD = (1UL << 61) - 1;\nconstexpr hash_t RHR = 37;\n\nnamespace\
    \ internal {\n    const hash_t MASK30 = (1UL << 30) - 1;\n    const hash_t MASK31\
    \ = (1UL << 31) - 1;\n    const hash_t MASK61 = RHMOD;\n\n    //mod 2^61-1\u3092\
    \u8A08\u7B97\u3059\u308B\u95A2\u6570\n    hash_t CalcMod(hash_t x) {\n       \
    \ hash_t xu = x >> 61;\n        hash_t xd = x & MASK61;\n        hash_t res =\
    \ xu + xd;\n        if (res >= RHMOD) res -= RHMOD;\n        return res;\n   \
    \ }\n\n    //a*b mod 2^61-1\u3092\u8FD4\u3059\u95A2\u6570(\u6700\u5F8C\u306BMod\u3092\
    \u53D6\u308B)\n    hash_t Mul(hash_t a, hash_t b) {\n        hash_t au = a >>\
    \ 31;\n        hash_t ad = a & MASK31;\n        hash_t bu = b >> 31;\n       \
    \ hash_t bd = b & MASK31;\n        hash_t mid = ad * bu + au * bd;\n        hash_t\
    \ midu = mid >> 30;\n        hash_t midd = mid & MASK30;\n        return CalcMod(au\
    \ * bu * 2 + midu + (midd << 31) + ad * bd);\n    }\n\n    hash_t Pow(hash_t a,\
    \ hash_t n) {\n        hash_t res = 1;\n        while (n > 0) {\n            if\
    \ (n & 1) res = Mul(res, a);\n            a = Mul(a, a);\n            n >>= 1;\n\
    \        }\n        return res;\n    }\n}\n\nstruct RollingHash {\n    private:\n\
    \    static bool initialized;\n    static int hash_size;\n    static vector<hash_t>\
    \ base;\n    static vector<hash_t> base_inv;\n\n    public:\n    vector<hash_vector_t>\
    \ cum;\n    template<typename T> RollingHash(vector<T> &a, int hash_size=3, ll\
    \ maxa=1e9) {\n        if(!initialized) (*this).init_base(hash_size, maxa);\n\
    \        (*this).calc(a);\n    };\n    RollingHash(string &a, int hash_size=3,\
    \ ll maxa=1e9) {\n        if(!initialized) (*this).init_base(hash_size, maxa);\n\
    \        (*this).calc(a);\n    }\n\n    void init_base(int hash_size, ll maxa)\
    \ {\n        (*this).hash_size = hash_size;\n        random_device seed_gen;\n\
    \        mt19937 engine(seed_gen());\n        while (sz(base) < hash_size) {\n\
    \            hash_t k = 0;\n            hash_t b = internal::Pow(RHR, k);\n  \
    \          while (b <= maxa || gcd(RHMOD-1, b) != 1) {\n                k = engine();\n\
    \                b = internal::Pow(RHR, k);\n            }\n            base.push_back(b);\n\
    \            base_inv.push_back(internal::Pow(b, RHMOD-2));\n        }\n     \
    \   initialized = true;\n    }\n\n    template<typename T> void calc(vector<T>\
    \ const &a) {\n        cum = vector<hash_vector_t>(sz(a)+1, vector<hash_t>(hash_size,\
    \ 0));\n        rep(i, hash_size) {\n            hash_t base_pow = 1;\n      \
    \      rep(j, sz(a)) {\n                cum[j+1][i] = internal::CalcMod(cum[j][i]\
    \ + internal::Mul(a[j], base_pow));\n                base_pow = internal::Mul(base_pow,\
    \ (*this).base[i]);\n            }\n        }\n    }\n\n    void calc(string const\
    \ &a) {\n        vector<char> _a(a.begin(), a.end());\n        calc(_a);\n   \
    \ };\n\n    vector<hash_t> query(int l, int r) {\n        assert(l <= r);\n  \
    \      assert(0 <= l && r < sz(cum));\n        vector<hash_t> rev(hash_size);\n\
    \        rep(i, hash_size) {\n            rev[i] = internal::Mul(cum[r][i] + RHMOD\
    \ - cum[l][i], internal::Pow((*this).base_inv[i], l));\n        }\n        return\
    \ rev;\n    }\n\n    template <class T> vector<hash_vector_t> calc_hash(vector<T>\
    \ const &a, int k){\n        assert(sz(a) >= k);\n        vector<hash_vector_t>\
    \ res(sz(a) - k + 1, vector<hash_t>(hash_size));\n        vector<hash_t> base_pow(hash_size);\n\
    \        rep(i, hash_size) base_pow[i] = internal::Pow(this->base[i], k);\n\n\
    \        rep(i, hash_size) {\n            // \u5148\u982D\u306E\u30CF\u30C3\u30B7\
    \u30E5\u8A08\u7B97\n            hash_t b = this->base[i];\n            hash_t\
    \ sh = 0;\n            rep(j, k){ sh = internal::CalcMod(internal::Mul(sh, b)\
    \ + a[j]); }\n            res[0][i] = sh;\n\n            // s\u3092\u305A\u3089\
    \u3057\u3066\u30CF\u30C3\u30B7\u30E5\u5024\u3092\u66F4\u65B0\n            rep(j,\
    \ sz(a) - k){\n                sh = internal::CalcMod(internal::Mul(sh, b) + a[j+k]\
    \ + RHMOD - internal::Mul(a[j], base_pow[i]));\n                res[j+1][i] =\
    \ sh;\n            }\n        }\n        return res;\n    }\n\n    vector<hash_vector_t>\
    \ calc_hash(string const &a, int k) {\n        vector<char> _a(a.begin(), a.end());\n\
    \        return calc_hash(_a, k);\n    };\n};\nbool RollingHash::initialized =\
    \ false;\nint RollingHash::hash_size = 3;\nvector<hash_t> RollingHash::base(0);\n\
    vector<hash_t> RollingHash::base_inv(0);\n/**\n * @brief rolling_hash.hpp\n *\
    \ @docs docs/string/rolling_hash.md\n */\n#line 3 \"competitive/std/io.hpp\"\n\
    // \u6F14\u7B97\u5B50\u30AA\u30FC\u30D0\u30FC\u30ED\u30FC\u30C9\uFF08\u30D7\u30ED\
    \u30C8\u30BF\u30A4\u30D7\u5BA3\u8A00\uFF09\ntemplate <class T, class U> inline\
    \ istream& operator>>(istream& is, pair<T, U>& p);\ntemplate <class T> inline\
    \ istream& operator>>(istream& is, vector<T>& v);\ntemplate <class T, class U>\
    \ inline ostream& operator<<(ostream& os, const pair<T, U>& p);\ntemplate <class\
    \ T> inline ostream& operator<<(ostream& os, const vector<T>& v);\ntemplate <typename\
    \ T, typename S> ostream &operator<<(ostream &os, const map<T, S> &mp);\ntemplate\
    \ <typename T> ostream &operator<<(ostream &os, const set<T> &st);\ntemplate <typename\
    \ T> ostream &operator<<(ostream &os, const multiset<T> &st);\ntemplate <typename\
    \ T> ostream &operator<<(ostream &os, const unordered_set<T> &st);\ntemplate <typename\
    \ T> ostream &operator<<(ostream &os, queue<T> q);\ntemplate <typename T> ostream\
    \ &operator<<(ostream &os, deque<T> q);\ntemplate <typename T> ostream &operator<<(ostream\
    \ &os, stack<T> st);\ntemplate <class T, class Container, class Compare> ostream\
    \ &operator<<(ostream &os, priority_queue<T, Container, Compare> pq);\n\n// \u6F14\
    \u7B97\u5B50\u30AA\u30FC\u30D0\u30FC\u30ED\u30FC\u30C9\ntemplate <class T, class\
    \ U> inline istream& operator>>(istream& is, pair<T, U>& p) { is >> p.first >>\
    \ p.second; return is; }\ntemplate <class T> inline istream& operator>>(istream&\
    \ is, vector<T>& v) { repe(x, v) is >> x; return is; }\ntemplate <class T, class\
    \ U> inline ostream& operator<<(ostream& os, const pair<T, U>& p) { os << p.first\
    \ << \" \" << p.second; return os; }\ntemplate <class T> inline ostream& operator<<(ostream&\
    \ os, const vector<T>& v) { rep(i, sz(v)) { os << v.at(i); if (i != sz(v) - 1)\
    \ os << \" \"; } return os; }\ntemplate <typename T, typename S> ostream &operator<<(ostream\
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
    \ 5 \"online_test/AOJ/ALDS_1_14_B.test.cpp\"\n\nint main() {\n    string s, t;\n\
    \    cin >> s >> t;\n    int n = sz(s);\n    int m = sz(t);\n    RollingHash rhs(s,\
    \ 4);\n    RollingHash rht(t);\n    auto th = rht.query(0, m);\n    rep(i, n-m+1)\
    \ {\n        if (rht.query(0, m) == rhs.query(i, i+m)) print(i);\n    }\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_14_B\"\n\
    #include \"competitive/std/std.hpp\"\n#include \"competitive/string/rolling_hash.hpp\"\
    \n#include \"competitive/std/io.hpp\"\n\nint main() {\n    string s, t;\n    cin\
    \ >> s >> t;\n    int n = sz(s);\n    int m = sz(t);\n    RollingHash rhs(s, 4);\n\
    \    RollingHash rht(t);\n    auto th = rht.query(0, m);\n    rep(i, n-m+1) {\n\
    \        if (rht.query(0, m) == rhs.query(i, i+m)) print(i);\n    }\n}\n"
  dependsOn:
  - competitive/std/std.hpp
  - competitive/string/rolling_hash.hpp
  - competitive/std/io.hpp
  isVerificationFile: true
  path: online_test/AOJ/ALDS_1_14_B.test.cpp
  requiredBy: []
  timestamp: '2023-04-11 04:02:35+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: online_test/AOJ/ALDS_1_14_B.test.cpp
layout: document
redirect_from:
- /verify/online_test/AOJ/ALDS_1_14_B.test.cpp
- /verify/online_test/AOJ/ALDS_1_14_B.test.cpp.html
title: online_test/AOJ/ALDS_1_14_B.test.cpp
---
