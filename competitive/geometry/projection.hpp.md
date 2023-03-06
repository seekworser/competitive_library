---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: competitive/geometry/base.hpp
    title: "Point\u30AF\u30E9\u30B9"
  - icon: ':heavy_check_mark:'
    path: competitive/std/std.hpp
    title: std.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/CGL_1_A.test.cpp
    title: online_test/AOJ/CGL_1_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/CGL_1_B.test.cpp
    title: online_test/AOJ/CGL_1_B.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    _deprecated_at_docs: docs/geometry/projection.md
    document_title: projection.hpp
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
    \n/**\n * @brief std.hpp\n * @docs docs/std/std.md\n */\n#line 3 \"competitive/geometry/base.hpp\"\
    \n/**\n * @brief Point\u30AF\u30E9\u30B9\n * @details\n * Point : 2\u6B21\u5143\
    \u7A7A\u9593\u4E0A\u306E\u70B9\u30FB\u30D9\u30AF\u30C8\u30EB\u3092\u6271\u3046\
    \u305F\u3081\u306E\u30AF\u30E9\u30B9\n * abs\u3082\u3057\u304F\u306F\u5358\u4F4D\
    \u30D9\u30AF\u30C8\u30EB\u3092\u4F7F\u3046\u5834\u5408\u306Fdouble\u3092\u4F7F\
    \u3044\u3001\u305D\u306E\u4ED6\u306E\u5834\u5408\u306FFrac\u3092\u4F7F\u3046\n\
    */\ntemplate<typename T> struct Point {\n    T x, y;\n    Point(T x, T y) : x(x),\
    \ y(y) {\n    };\n    Point() : Point(0, 0) {};\n\n    Point<T> &operator+=(const\
    \ Point<T>& p) { (*this).x += p.x; (*this).y += p.y; return *this; }\n    Point<T>\
    \ &operator-=(const Point<T>& p) { (*this).x -= p.x; (*this).y -= p.y; return\
    \ *this; }\n    friend Point<T> operator+(const Point<T>& lhs, const Point<T>&\
    \ rhs) { return Point(lhs) += rhs; }\n    friend Point<T> operator-(const Point<T>&\
    \ lhs, const Point<T>& rhs) { return Point(lhs) -= rhs; }\n    Point<T> &operator+()\
    \ { return *this; }\n    Point<T> &operator-() { (*this).x *= -1; (*this).y *=\
    \ -1; return *this; }\n\n    Point<T> &operator*=(const T &x) { (*this).x *= x;\
    \ (*this).y *= x; return *this; }\n    Point<T> &operator/=(const T &x) { (*this).x\
    \ /= x; (*this).y /= x; return *this; }\n    friend Point<T> operator*(const Point<T>&\
    \ lhs, const T& rhs) { return Point(lhs) *= rhs; }\n    friend Point<T> operator/(const\
    \ Point<T>& lhs, const T& rhs) { return Point(lhs) /= rhs; }\n    friend Point<T>\
    \ operator*(const T& lhs, const Point<T>& rhs) { return Point(rhs) *= lhs; }\n\
    \    friend Point<T> operator/(const T& lhs, const Point<T>& rhs) { return Point(rhs)\
    \ /= lhs; }\n\n    friend bool operator==(const Point<T> &lhs, const Point<T>\
    \ &rhs) {\n        return eq<T>(lhs.x, rhs.x) && eq<T>(lhs.y, rhs.y);\n    }\n\
    \    friend bool operator!=(const Point<T> &lhs, const Point<T> &rhs) {\n    \
    \    return !(lhs == rhs);\n    }\n    friend bool operator>(const Point<T>& lhs,\
    \ const Point<T>& rhs) {\n        if (eq<T>(lhs.x, rhs.x)) return gt<T>(lhs.y,\
    \ rhs.y);\n        return gt<T>(lhs.x, rhs.x);\n    }\n    friend bool operator<(const\
    \ Point<T>& lhs, const Point<T>& rhs) {\n        if (eq<T>(lhs.x, rhs.x)) return\
    \ lt<T>(lhs.y, rhs.y);\n        return lt<T>(lhs.x, rhs.x);\n    }\n    friend\
    \ bool operator>=(const Point<T>& lhs, const Point<T>& rhs) { return !(lhs < rhs);\
    \ }\n    friend bool operator<=(const Point<T>& lhs, const Point<T>& rhs) { return\
    \ !(lhs > rhs); }\n    T dot(const Point<T> &p) const {return (*this).x * p.x\
    \ + (*this).y * p.y; };\n    T cross(const Point<T> &p) const {return (*this).x\
    \ * p.y - (*this).y * p.x; };\n    T norm() const {return (*this).dot(*this);\
    \ };\n    T abs() const {return sqrt((*this).norm()); };\n    T arg() const {return\
    \ atan((*this).y / (*this).x); };\n    Point<T> rotate(const double &theta) {\n\
    \        (*this).x = cos(theta) * (*this).x - sin(theta) * (*this).y;\n      \
    \  (*this).y = sin(theta) * (*this).x + cos(theta) * (*this).y;\n        return\
    \ (*this);\n    };\n\n    T operator*=(const Point<T>& p) const { return (*this).dot(p);\
    \ }\n    friend const T operator*(const Point<T>& lhs, const Point<T>& rhs) {\
    \ return lhs *= rhs; }\n    friend ostream& operator<<(ostream& os, const Point<T>\
    \ &p) { os << p.x << \" \" << p.y; return os; }\n};\n\ntemplate<typename T> T\
    \ dot(const Point<T> &p1, const Point<T> &p2) { return p1.dot(p2); }\ntemplate<typename\
    \ T> T cross(const Point<T> &p1, const Point<T> &p2) { return p1.cross(p2); }\n\
    template<typename T> T norm(const Point<T> &p) { return p.norm(); }\ndouble abs(const\
    \ Point<double> &p) { return p.abs(); }\nPoint<double> unit_vector(const Point<double>\
    \ &p) { return p / abs(p); }\ntemplate<typename T> Point<T> normal_vector(const\
    \ Point<double> &p) { return Point(-p.y, p.x); }\nPoint<double> rotate(const Point<double>\
    \ &p, const double &theta) { return Point(p).rotate(theta); }\n\n// Line : \u76F4\
    \u7DDA\u30AF\u30E9\u30B9\ntemplate<typename T> struct Line {\n    Point<T> s,\
    \ t;\n    Line() = default;\n    Line(Point<T> s, Point<T> t) : s(s), t(t) {assert(s\
    \ != t);};\n    // ax+by+c=0;\n    Line(T a, T b, T c) {\n        assert(neq<T>(a,\
    \ 0) || neq<T>(b, 0));\n        if(eq<T>(b, 0)) {\n            s = Point(-c /\
    \ a, T(0)); t = Point(-c / a, T(1));\n        } else {\n            s = Point(T(0),\
    \ -c / b); t = Point(-c / a, T(1));\n        }\n    };\n    Point<T> vec() const\
    \ { return (*this).t - (*this).s; }\n    Point<T> normal() const { return normal_vector((*this).vec());\
    \ }\n    friend ostream& operator<<(ostream& os, const Line<T> &l) { os << l.s\
    \ << \" \" << l.t; return os; }\n};\n\n// Segment : \u7DDA\u5206\u3092\u8868\u3059\
    \u69CB\u9020\u4F53\ntemplate <typename T> struct Segment : Line<T> {\n    Segment()\
    \ = default;\n    Segment(Point<T> s, Point<T> t) : Line<T>(s, t) {}\n};\n\n//\
    \ Circle : \u5186\u3092\u8868\u3059\u69CB\u9020\u4F53\n// p\u304C\u4E2D\u5FC3\u306E\
    \u4F4D\u7F6E\u30D9\u30AF\u30C8\u30EB\u3001r\u306F\u534A\u5F84\ntemplate<typename\
    \ T> struct Circle {\n    Point<T> o;\n    T r;\n    Circle() = default;\n   \
    \ Circle(Point<T> o, double r) : o(o), r(r) {}\n};\n/**\n * @brief \u5E7E\u4F55\
    \u30E9\u30A4\u30D6\u30E9\u30EA\u30D9\u30FC\u30B9\u30AF\u30E9\u30B9\n * @docs docs/geometry/base.md\n\
    \ */\n#line 4 \"competitive/geometry/projection.hpp\"\ntemplate<typename T> Point<T>\
    \ projection(const Line<T> &l, const Point<T> &p) {\n    T t = dot(p - l.s, l.vec())\
    \ / norm(l.vec());\n    return l.s + (l.vec()) * t;\n}\ntemplate<typename T> Point<T>\
    \ projection(const Segment<T> &l, const Point<T> &p) {\n    return Point<T>();\n\
    }\ntemplate<typename T> Point<T> refrection(const Line<T> &l, const Point<T> &p)\
    \ {\n    return p + (projection(l, p) - p) * 2;\n}\n/**\n * @brief projection.hpp\n\
    \ * @docs docs/geometry/projection.md\n */\n"
  code: "#pragma once\n#include \"competitive/std/std.hpp\"\n#include \"competitive/geometry/base.hpp\"\
    \ntemplate<typename T> Point<T> projection(const Line<T> &l, const Point<T> &p)\
    \ {\n    T t = dot(p - l.s, l.vec()) / norm(l.vec());\n    return l.s + (l.vec())\
    \ * t;\n}\ntemplate<typename T> Point<T> projection(const Segment<T> &l, const\
    \ Point<T> &p) {\n    return Point<T>();\n}\ntemplate<typename T> Point<T> refrection(const\
    \ Line<T> &l, const Point<T> &p) {\n    return p + (projection(l, p) - p) * 2;\n\
    }\n/**\n * @brief projection.hpp\n * @docs docs/geometry/projection.md\n */\n"
  dependsOn:
  - competitive/std/std.hpp
  - competitive/geometry/base.hpp
  isVerificationFile: false
  path: competitive/geometry/projection.hpp
  requiredBy: []
  timestamp: '2023-03-05 19:42:23+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - online_test/AOJ/CGL_1_A.test.cpp
  - online_test/AOJ/CGL_1_B.test.cpp
documentation_of: competitive/geometry/projection.hpp
layout: document
redirect_from:
- /library/competitive/geometry/projection.hpp
- /library/competitive/geometry/projection.hpp.html
title: projection.hpp
---
