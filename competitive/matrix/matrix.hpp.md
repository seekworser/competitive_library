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
    _deprecated_at_docs: docs/matrix/matrix.md
    document_title: matrix.hpp
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
    \n/**\n * @brief std.hpp\n * @docs docs/std/std.md\n */\n#line 3 \"competitive/matrix/matrix.hpp\"\
    \ntemplate <class T>\nstruct Matrix {\n  vector<vector<T> > A;\n\n  Matrix() =\
    \ default;\n  Matrix(int n, int m) : A(n, vector<T>(m, T())) {}\n  Matrix(int\
    \ n) : A(n, vector<T>(n, T())){};\n\n  int H() const { return A.size(); }\n\n\
    \  int W() const { return A[0].size(); }\n\n  int size() const { return A.size();\
    \ }\n\n  inline const vector<T> &operator[](int k) const { return A[k]; }\n\n\
    \  inline vector<T> &operator[](int k) { return A[k]; }\n\n  static Matrix I(int\
    \ n) {\n    Matrix mat(n);\n    for (int i = 0; i < n; i++) mat[i][i] = 1;\n \
    \   return (mat);\n  }\n\n  Matrix &operator+=(const Matrix &B) {\n    int n =\
    \ H(), m = W();\n    assert(n == B.H() && m == B.W());\n    for (int i = 0; i\
    \ < n; i++)\n      for (int j = 0; j < m; j++) (*this)[i][j] += B[i][j];\n   \
    \ return (*this);\n  }\n\n  Matrix &operator-=(const Matrix &B) {\n    int n =\
    \ H(), m = W();\n    assert(n == B.H() && m == B.W());\n    for (int i = 0; i\
    \ < n; i++)\n      for (int j = 0; j < m; j++) (*this)[i][j] -= B[i][j];\n   \
    \ return (*this);\n  }\n\n  Matrix &operator*=(const Matrix &B) {\n    int n =\
    \ H(), m = B.W(), p = W();\n    assert(p == B.H());\n    vector<vector<T> > C(n,\
    \ vector<T>(m, T{}));\n    for (int i = 0; i < n; i++)\n      for (int k = 0;\
    \ k < p; k++)\n        for (int j = 0; j < m; j++) C[i][j] += (*this)[i][k] *\
    \ B[k][j];\n    A.swap(C);\n    return (*this);\n  }\n\n  // Matrix &operator^=(T\
    \ k) {\n  //   Matrix B = Matrix::I(H());\n  //   while (k > 0) {\n  //     if\
    \ (k & 1) B *= *this;\n  //     *this *= *this;\n  //     k >>= 1LL;\n  //   }\n\
    \  //   A.swap(B.A);\n  //   return (*this);\n  // }\n\n  Matrix operator+(const\
    \ Matrix &B) const { return (Matrix(*this) += B); }\n\n  Matrix operator-(const\
    \ Matrix &B) const { return (Matrix(*this) -= B); }\n\n  Matrix operator*(const\
    \ Matrix &B) const { return (Matrix(*this) *= B); }\n\n  // Matrix operator^(const\
    \ T k) const { return (Matrix(*this) ^= k); }\n\n  bool operator==(const Matrix\
    \ &B) const {\n    assert(H() == B.H() && W() == B.W());\n    for (int i = 0;\
    \ i < H(); i++)\n      for (int j = 0; j < W(); j++)\n        if (A[i][j] != B[i][j])\
    \ return false;\n    return true;\n  }\n\n  bool operator!=(const Matrix &B) const\
    \ {\n    assert(H() == B.H() && W() == B.W());\n    for (int i = 0; i < H(); i++)\n\
    \      for (int j = 0; j < W(); j++)\n        if (A[i][j] != B[i][j]) return true;\n\
    \    return false;\n  }\n\n  friend ostream &operator<<(ostream &os, const Matrix\
    \ &p) {\n    int n = p.H(), m = p.W();\n    for (int i = 0; i < n; i++) {\n  \
    \    for (int j = 0; j < m; j++) {\n        os << p[i][j];\n        if (i + 1\
    \ == n && j + 1 == m) { continue; }\n        else if (j + 1 == m) os << \"\\n\"\
    ;\n        else os << \" \";\n      }\n    }\n    return (os);\n  }\n\n  T determinant()\
    \ const {\n    Matrix B(*this);\n    assert(H() == W());\n    T ret = 1;\n   \
    \ for (int i = 0; i < H(); i++) {\n      int idx = -1;\n      for (int j = i;\
    \ j < W(); j++) {\n        if (B[j][i] != 0) {\n          idx = j;\n         \
    \ break;\n        }\n      }\n      if (idx == -1) return 0;\n      if (i != idx)\
    \ {\n        ret *= T(-1);\n        swap(B[i], B[idx]);\n      }\n      ret *=\
    \ B[i][i];\n      T inv = T(1) / B[i][i];\n      for (int j = 0; j < W(); j++)\
    \ {\n        B[i][j] *= inv;\n      }\n      for (int j = i + 1; j < H(); j++)\
    \ {\n        T a = B[j][i];\n        if (a == 0) continue;\n        for (int k\
    \ = i; k < W(); k++) {\n          B[j][k] -= B[i][k] * a;\n        }\n      }\n\
    \    }\n    return ret;\n  }\n};\n/**\n * @brief matrix.hpp\n * @docs docs/matrix/matrix.md\n\
    \ */\n"
  code: "#pragma once\n#include \"competitive/std/std.hpp\"\ntemplate <class T>\n\
    struct Matrix {\n  vector<vector<T> > A;\n\n  Matrix() = default;\n  Matrix(int\
    \ n, int m) : A(n, vector<T>(m, T())) {}\n  Matrix(int n) : A(n, vector<T>(n,\
    \ T())){};\n\n  int H() const { return A.size(); }\n\n  int W() const { return\
    \ A[0].size(); }\n\n  int size() const { return A.size(); }\n\n  inline const\
    \ vector<T> &operator[](int k) const { return A[k]; }\n\n  inline vector<T> &operator[](int\
    \ k) { return A[k]; }\n\n  static Matrix I(int n) {\n    Matrix mat(n);\n    for\
    \ (int i = 0; i < n; i++) mat[i][i] = 1;\n    return (mat);\n  }\n\n  Matrix &operator+=(const\
    \ Matrix &B) {\n    int n = H(), m = W();\n    assert(n == B.H() && m == B.W());\n\
    \    for (int i = 0; i < n; i++)\n      for (int j = 0; j < m; j++) (*this)[i][j]\
    \ += B[i][j];\n    return (*this);\n  }\n\n  Matrix &operator-=(const Matrix &B)\
    \ {\n    int n = H(), m = W();\n    assert(n == B.H() && m == B.W());\n    for\
    \ (int i = 0; i < n; i++)\n      for (int j = 0; j < m; j++) (*this)[i][j] -=\
    \ B[i][j];\n    return (*this);\n  }\n\n  Matrix &operator*=(const Matrix &B)\
    \ {\n    int n = H(), m = B.W(), p = W();\n    assert(p == B.H());\n    vector<vector<T>\
    \ > C(n, vector<T>(m, T{}));\n    for (int i = 0; i < n; i++)\n      for (int\
    \ k = 0; k < p; k++)\n        for (int j = 0; j < m; j++) C[i][j] += (*this)[i][k]\
    \ * B[k][j];\n    A.swap(C);\n    return (*this);\n  }\n\n  // Matrix &operator^=(T\
    \ k) {\n  //   Matrix B = Matrix::I(H());\n  //   while (k > 0) {\n  //     if\
    \ (k & 1) B *= *this;\n  //     *this *= *this;\n  //     k >>= 1LL;\n  //   }\n\
    \  //   A.swap(B.A);\n  //   return (*this);\n  // }\n\n  Matrix operator+(const\
    \ Matrix &B) const { return (Matrix(*this) += B); }\n\n  Matrix operator-(const\
    \ Matrix &B) const { return (Matrix(*this) -= B); }\n\n  Matrix operator*(const\
    \ Matrix &B) const { return (Matrix(*this) *= B); }\n\n  // Matrix operator^(const\
    \ T k) const { return (Matrix(*this) ^= k); }\n\n  bool operator==(const Matrix\
    \ &B) const {\n    assert(H() == B.H() && W() == B.W());\n    for (int i = 0;\
    \ i < H(); i++)\n      for (int j = 0; j < W(); j++)\n        if (A[i][j] != B[i][j])\
    \ return false;\n    return true;\n  }\n\n  bool operator!=(const Matrix &B) const\
    \ {\n    assert(H() == B.H() && W() == B.W());\n    for (int i = 0; i < H(); i++)\n\
    \      for (int j = 0; j < W(); j++)\n        if (A[i][j] != B[i][j]) return true;\n\
    \    return false;\n  }\n\n  friend ostream &operator<<(ostream &os, const Matrix\
    \ &p) {\n    int n = p.H(), m = p.W();\n    for (int i = 0; i < n; i++) {\n  \
    \    for (int j = 0; j < m; j++) {\n        os << p[i][j];\n        if (i + 1\
    \ == n && j + 1 == m) { continue; }\n        else if (j + 1 == m) os << \"\\n\"\
    ;\n        else os << \" \";\n      }\n    }\n    return (os);\n  }\n\n  T determinant()\
    \ const {\n    Matrix B(*this);\n    assert(H() == W());\n    T ret = 1;\n   \
    \ for (int i = 0; i < H(); i++) {\n      int idx = -1;\n      for (int j = i;\
    \ j < W(); j++) {\n        if (B[j][i] != 0) {\n          idx = j;\n         \
    \ break;\n        }\n      }\n      if (idx == -1) return 0;\n      if (i != idx)\
    \ {\n        ret *= T(-1);\n        swap(B[i], B[idx]);\n      }\n      ret *=\
    \ B[i][i];\n      T inv = T(1) / B[i][i];\n      for (int j = 0; j < W(); j++)\
    \ {\n        B[i][j] *= inv;\n      }\n      for (int j = i + 1; j < H(); j++)\
    \ {\n        T a = B[j][i];\n        if (a == 0) continue;\n        for (int k\
    \ = i; k < W(); k++) {\n          B[j][k] -= B[i][k] * a;\n        }\n      }\n\
    \    }\n    return ret;\n  }\n};\n/**\n * @brief matrix.hpp\n * @docs docs/matrix/matrix.md\n\
    \ */\n"
  dependsOn:
  - competitive/std/std.hpp
  isVerificationFile: false
  path: competitive/matrix/matrix.hpp
  requiredBy: []
  timestamp: '2023-03-05 19:42:23+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: competitive/matrix/matrix.hpp
layout: document
redirect_from:
- /library/competitive/matrix/matrix.hpp
- /library/competitive/matrix/matrix.hpp.html
title: matrix.hpp
---
