---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: competitive/geometry/angle.hpp
    title: angle.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/geometry/base.hpp
    title: "Point\u30AF\u30E9\u30B9"
  - icon: ':heavy_check_mark:'
    path: competitive/geometry/counter_clockwise.hpp
    title: counter_clockwise.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/geometry/intersection.hpp
    title: intersection.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/math/fraction.hpp
    title: fraction.hpp
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
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/2/CGL_2_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/2/CGL_2_B
  bundledCode: "#line 1 \"online_test/AOJ/CGL_2_B.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/2/CGL_2_B\"\
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
    \ = 3300300300300300491LL;\nfloat EPS = 1e-8; double EPSL = 1e-16;\nbool eq(const\
    \ double x, const double y) { return abs(x - y) < EPSL; }\nbool eq(const float\
    \ x, const float y) { return abs(x - y) < EPS; }\ntemplate<typename T> bool eq(const\
    \ T x, const T y) { return x == y; }\ntemplate<typename T> bool neq(const T x,\
    \ const T y) { return !(eq<T>(x, y)); }\ntemplate<typename T> bool ge(const T\
    \ x, const T y) { return (eq<T>(x, y) || (x > y)); }\ntemplate<typename T> bool\
    \ le(const T x, const T y) { return (eq<T>(x, y) || (x < y)); }\ntemplate<typename\
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
    \ a) { return *min_element(all(a)); };\ntemplate<typename T> T sum(vector<T>&\
    \ a, T zero = T(0)) { T rev = zero; rep(i, sz(a)) rev += a[i]; return rev; };\n\
    template<typename T> bool in_range(const T& val, const T& s, const T& t) { return\
    \ s <= val && val < t; };\n\ntemplate <class T> inline vector<T>& operator--(vector<T>&\
    \ v) { repe(x, v) --x; return v; }\ntemplate <class T> inline vector<T>& operator++(vector<T>&\
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
    \ * @docs docs/std/std.md\n */\n#line 3 \"competitive/geometry/base.hpp\"\n/**\n\
    \ * @brief Point\u30AF\u30E9\u30B9\n * @details\n * Point : 2\u6B21\u5143\u7A7A\
    \u9593\u4E0A\u306E\u70B9\u30FB\u30D9\u30AF\u30C8\u30EB\u3092\u6271\u3046\u305F\
    \u3081\u306E\u30AF\u30E9\u30B9\n * abs\u3082\u3057\u304F\u306F\u5358\u4F4D\u30D9\
    \u30AF\u30C8\u30EB\u3092\u4F7F\u3046\u5834\u5408\u306Fdouble\u3092\u4F7F\u3044\
    \u3001\u305D\u306E\u4ED6\u306E\u5834\u5408\u306FFrac\u3092\u4F7F\u3046\n*/\ntemplate<typename\
    \ T> struct Point {\n    T x, y;\n    Point(T x, T y) : x(x), y(y) {\n    };\n\
    \    Point() : Point(0, 0) {};\n\n    Point<T> &operator+=(const Point<T>& p)\
    \ { (*this).x += p.x; (*this).y += p.y; return *this; }\n    Point<T> &operator-=(const\
    \ Point<T>& p) { (*this).x -= p.x; (*this).y -= p.y; return *this; }\n    friend\
    \ Point<T> operator+(const Point<T>& lhs, const Point<T>& rhs) { return Point(lhs)\
    \ += rhs; }\n    friend Point<T> operator-(const Point<T>& lhs, const Point<T>&\
    \ rhs) { return Point(lhs) -= rhs; }\n    Point<T> &operator+() { return *this;\
    \ }\n    Point<T> &operator-() { (*this).x *= -1; (*this).y *= -1; return *this;\
    \ }\n\n    Point<T> &operator*=(const T &x) { (*this).x *= x; (*this).y *= x;\
    \ return *this; }\n    Point<T> &operator/=(const T &x) { (*this).x /= x; (*this).y\
    \ /= x; return *this; }\n    friend Point<T> operator*(const Point<T>& lhs, const\
    \ T& rhs) { return Point(lhs) *= rhs; }\n    friend Point<T> operator/(const Point<T>&\
    \ lhs, const T& rhs) { return Point(lhs) /= rhs; }\n    friend Point<T> operator*(const\
    \ T& lhs, const Point<T>& rhs) { return Point(rhs) *= lhs; }\n    friend Point<T>\
    \ operator/(const T& lhs, const Point<T>& rhs) { return Point(rhs) /= lhs; }\n\
    \n    friend bool operator==(const Point<T> &lhs, const Point<T> &rhs) {\n   \
    \     return eq<T>(lhs.x, rhs.x) && eq<T>(lhs.y, rhs.y);\n    }\n    friend bool\
    \ operator!=(const Point<T> &lhs, const Point<T> &rhs) {\n        return !(lhs\
    \ == rhs);\n    }\n    friend bool operator>(const Point<T>& lhs, const Point<T>&\
    \ rhs) {\n        if (eq<T>(lhs.x, rhs.x)) return gt<T>(lhs.y, rhs.y);\n     \
    \   return gt<T>(lhs.x, rhs.x);\n    }\n    friend bool operator<(const Point<T>&\
    \ lhs, const Point<T>& rhs) {\n        if (eq<T>(lhs.x, rhs.x)) return lt<T>(lhs.y,\
    \ rhs.y);\n        return lt<T>(lhs.x, rhs.x);\n    }\n    friend bool operator>=(const\
    \ Point<T>& lhs, const Point<T>& rhs) { return !(lhs < rhs); }\n    friend bool\
    \ operator<=(const Point<T>& lhs, const Point<T>& rhs) { return !(lhs > rhs);\
    \ }\n    T dot(const Point<T> &p) const {return (*this).x * p.x + (*this).y *\
    \ p.y; };\n    T cross(const Point<T> &p) const {return (*this).x * p.y - (*this).y\
    \ * p.x; };\n    T norm() const {return (*this).dot(*this); };\n    T abs() const\
    \ {return sqrt((*this).norm()); };\n    T arg() const {return atan((*this).y /\
    \ (*this).x); };\n    Point<T> rotate(const double &theta) {\n        (*this).x\
    \ = cos(theta) * (*this).x - sin(theta) * (*this).y;\n        (*this).y = sin(theta)\
    \ * (*this).x + cos(theta) * (*this).y;\n        return (*this);\n    };\n\n \
    \   T operator*=(const Point<T>& p) const { return (*this).dot(p); }\n    friend\
    \ const T operator*(const Point<T>& lhs, const Point<T>& rhs) { return lhs *=\
    \ rhs; }\n    friend ostream& operator<<(ostream& os, const Point<T> &p) { os\
    \ << p.x << \" \" << p.y; return os; }\n};\n\ntemplate<typename T> T dot(const\
    \ Point<T> &p1, const Point<T> &p2) { return p1.dot(p2); }\ntemplate<typename\
    \ T> T cross(const Point<T> &p1, const Point<T> &p2) { return p1.cross(p2); }\n\
    template<typename T> T norm(const Point<T> &p) { return p.norm(); }\ndouble abs(const\
    \ Point<double> &p) { return p.abs(); }\nPoint<double> unit_vector(const Point<double>\
    \ &p) { return p / abs(p); }\ntemplate<typename T> Point<T> normal_vector(const\
    \ Point<double> &p) { return Point(-p.y, p.x); }\nPoint<double> rotate(const Point<double>\
    \ &p, const double &theta) { return Point(p).rotate(theta); }\n\n// Line : \u76F4\
    \u7DDA\u30AF\u30E9\u30B9\ntemplate<typename T> struct Line {\n    Point<T> s,\
    \ t;\n    Line() = default;\n    Line(Point<T> s, Point<T> t) : s(s), t(t) {assert(s\
    \ != t);};\n    // ax+by+c=0;\n    Line(T a, T b, T c) {\n        assert(neq<T>(a,\
    \ T(0)) || neq<T>(b, T(0)));\n        if(eq<T>(b, T(0))) {\n            s = Point(-c\
    \ / a, T(0)); t = Point(-c / a, T(1));\n        } else {\n            s = Point(T(0),\
    \ -c / b); t = Point(T(1), (-a-c)/b);\n        }\n    };\n    Point<T> vec() const\
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
    \ */\n#line 4 \"competitive/geometry/counter_clockwise.hpp\"\nconstexpr int COUNTER_CLOCKWISE\
    \ = 2;\nconstexpr int CLOCKWISE = -2;\nconstexpr int ONSEGMENT = 0;\nconstexpr\
    \ int ONLINE_BACK = 1;\nconstexpr int ONLINE_FRONT = -1;\ntemplate<typename T>\
    \ int ccw(const Line<T> &l, const Point<T> &p, bool strict=false) {\n    T crs\
    \ = cross(l.vec(), p - l.s);\n    if (lt<T>(crs, 0)) return CLOCKWISE;\n    if\
    \ (gt<T>(crs, 0)) return COUNTER_CLOCKWISE;\n    T d = dot(l.vec(), p - l.s);\n\
    \    if (strict) {\n        if (le<T>(d, 0)) return ONLINE_BACK;\n        if (ge<T>(d,\
    \ norm(l.vec()))) return ONLINE_FRONT;\n    } else {\n        if (lt<T>(d, 0))\
    \ return ONLINE_BACK;\n        if (gt<T>(d, norm(l.vec()))) return ONLINE_FRONT;\n\
    \    }\n    return ONSEGMENT;\n};\ntemplate <typename T> int ccw(const Point<T>\
    \ &p1, const Point<T> &p2, const Point<T> &p3, bool strict=false) {\n    return\
    \ ccw(Line<T>(p1, p2), p3, strict);\n};\ntemplate <typename T> bool online(const\
    \ Line<T> &l, const Point<T> &p) {\n    int result = ccw(l, p);\n    return -1\
    \ <= result && result <= 1;\n};\ntemplate <typename T> int online(const Point<T>\
    \ &p1, const Point<T> &p2, const Point<T> &p3) {\n    return online(Line<T>(p1,\
    \ p2), p3);\n};\n/**\n * @brief counter_clockwise.hpp\n * @docs docs/geometry/counter_clockwise.md\n\
    \ */\n#line 4 \"competitive/geometry/angle.hpp\"\nconstexpr int ANGLE_0 = 0;\n\
    constexpr int ANGLE_0_90 = 1;\nconstexpr int ANGLE_90 = 2;\nconstexpr int ANGLE_90_180\
    \ = 3;\nconstexpr int ANGLE_180 = 4;\nconstexpr int ANGLE_180_270 = -3;\nconstexpr\
    \ int ANGLE_270 = -2;\nconstexpr int ANGLE_270_360 = -1;\ntemplate <typename T>\
    \ int angle(const Point<T> &p1, const Point<T> &p2) {\n    Point<T> zero(0, 0);\n\
    \    assert(p1 != zero && p2 != zero);\n    T d = dot(p1, p2);\n    T c = cross(p1,\
    \ p2);\n    if (eq<T>(c, 0)) {\n        if (gt<T>(d, 0)) return  ANGLE_0;\n  \
    \      else return ANGLE_180;\n    }\n    if (eq<T>(d, 0)) {\n        if (gt<T>(c,\
    \ 0)) return ANGLE_90;\n        else return ANGLE_270;\n    }\n    if (gt<T>(d,\
    \ 0) && gt<T>(c, 0)) return ANGLE_0_90;\n    if (lt<T>(d, 0) && gt<T>(c, 0)) return\
    \ ANGLE_90_180;\n    if (lt<T>(d, 0) && lt<T>(c, 0)) return ANGLE_180_270;\n \
    \   if (gt<T>(d, 0) && lt<T>(c, 0)) return ANGLE_270_360;\n    throw runtime_error(\"\
    function angle unexpectedly reached end\");\n};\ntemplate<typename T> int angle(const\
    \ Line<T> &l1, const Line<T> &l2) { return angle(l1.vec(), l2.vec()); };\ntemplate<typename\
    \ PointOrLine> bool is_parallel(const PointOrLine &p1, const PointOrLine &p2)\
    \ {\n    int result = angle(p1, p2);\n    return result == ANGLE_0 || result ==\
    \ ANGLE_180;\n}\ntemplate<typename PointOrLine> bool is_orthogonal(const PointOrLine\
    \ &p1, const PointOrLine &p2) {\n    int result = angle(p1, p2);\n    return result\
    \ == ANGLE_90 || result == ANGLE_270;\n}\n/**\n * @brief angle.hpp\n * @docs docs/geometry/angle.md\n\
    \ */\n#line 6 \"competitive/geometry/intersection.hpp\"\ntemplate <typename T>\
    \ bool intersect(const Segment<T> &s1, const Segment<T> &s2, bool strict=false)\
    \ {\n    if (strict) {\n        if (ccw(s1, s2.s, true) == ONSEGMENT) return online(s1,\
    \ s2.t);\n        if (ccw(s1, s2.t, true) == ONSEGMENT) return online(s1, s2.s);\n\
    \        if (ccw(s2, s1.s, true) == ONSEGMENT) return online(s2, s1.t);\n    \
    \    if (ccw(s2, s1.t, true) == ONSEGMENT) return online(s2, s1.s);\n        return\n\
    \            ccw(s1, s2.s) * ccw(s1, s2.t) < 0 &&\n            ccw(s2, s1.s) *\
    \ ccw(s2, s1.t) < 0;\n    }\n    return\n        ccw(s1, s2.s) * ccw(s1, s2.t)\
    \ <= 0 &&\n        ccw(s2, s1.s) * ccw(s2, s1.t) <= 0;\n};\ntemplate<typename\
    \ T> bool intersect(const Line<T> &l1, const Line<T> &l2) {\n    if(!is_parallel(l1,\
    \ l2)) return true;\n    if (online(l1, l2.s)) return true;\n    return false;\n\
    };\ntemplate<typename T> Point<T> cross_point(const Line<T> &l1, const Line<T>\
    \ &l2) {\n    assert(intersect(l1, l2));\n    if(is_parallel(l1, l2)) return l1.s;\n\
    \    T d1 = cross(l1.vec(), l2.vec());\n    T d2 = cross(l1.vec(), l1.t - l2.s);\n\
    \    return l2.s + l2.vec() * (d2 / d1);\n};\ntemplate<typename T> Point<T> cross_point(const\
    \ Segment<T> &s1, const Segment<T> &s2, bool strict=false) {\n    assert(intersect(s1,\
    \ s2, strict));\n    if(is_parallel(s1, s2)) {\n        if (ccw(s1, s2.s, strict)\
    \ == ONSEGMENT) return s2.s;\n        if (ccw(s1, s2.t, strict) == ONSEGMENT)\
    \ return s2.t;\n        if (ccw(s2, s1.s, strict) == ONSEGMENT) return s1.s;\n\
    \        if (ccw(s2, s1.t, strict) == ONSEGMENT) return s1.t;\n        throw(\"\
    segments are parallel but cannot find cross point\");\n    }\n    return cross_point(Line(s1),\
    \ Line(s2));\n};\n/**\n * @brief intersection.hpp\n * @docs docs/geometry/intersection.md\n\
    \ */\n#line 3 \"competitive/math/fraction.hpp\"\nstruct Frac {\n    ll num;\n\
    \    ll den;\n    Frac (ll _num, ll _den, bool reduce = true) : num(_num), den(_den)\
    \ {\n        if (reduce) (*this).reduce();\n    }\n    Frac (ll _num) : Frac(_num,\
    \ 1) {}\n    static ll redcue_limit;\n\n    Frac inv() const { return Frac((*this).den,\
    \ (*this).num); }\n    Frac &operator+=(const Frac &x) {\n        (*this).num\
    \ = (*this).num * x.den + x.num * (*this).den;\n        (*this).den = (*this).den\
    \ * x.den;\n        if ((*this).den > redcue_limit || (*this).num > redcue_limit)\
    \ (*this).reduce();\n        return (*this);\n    }\n    Frac &operator-=(const\
    \ Frac &x) {\n        (*this).num = (*this).num * x.den - x.num * (*this).den;\n\
    \        (*this).den = (*this).den * x.den;\n        if ((*this).den > redcue_limit\
    \ || (*this).num > redcue_limit) (*this).reduce();\n        return (*this);\n\
    \    }\n    Frac &operator*=(const Frac &x) {\n        (*this).num = (*this).num\
    \ * x.num;\n        (*this).den = (*this).den * x.den;\n        if ((*this).den\
    \ > redcue_limit || (*this).num > redcue_limit) (*this).reduce();\n        return\
    \ (*this);\n    }\n    Frac &operator/=(const Frac &x) {\n        (*this) *= x.inv();\n\
    \        if ((*this).den > redcue_limit || (*this).num > redcue_limit) (*this).reduce();\n\
    \        return (*this);\n    }\n    Frac operator+(const Frac &x) const { return\
    \ (Frac(*this) += x); }\n    Frac operator-(const Frac &x) const { return (Frac(*this)\
    \ -= x); }\n    Frac operator*(const Frac &x) const { return (Frac(*this) *= x);\
    \ }\n    Frac operator/(const Frac &x) const { return (Frac(*this) /= x); }\n\n\
    \    Frac operator+() const { return *this; }\n    Frac operator-() const { Frac\
    \ x(-(*this).num, (*this).den); return x; }\n    friend bool operator==(const\
    \ Frac& lhs, const Frac& rhs) {\n        return lhs.num * rhs.den == lhs.den *\
    \ rhs.num;\n    }\n    friend bool operator!=(const Frac& lhs, const Frac& rhs)\
    \ {\n        return lhs.num * rhs.den != lhs.den * rhs.num;\n    }\n    friend\
    \ bool operator>=(const Frac& lhs, const Frac& rhs) {\n        return lhs.num\
    \ * rhs.den >= lhs.den * rhs.num;\n    }\n    friend bool operator<=(const Frac&\
    \ lhs, const Frac& rhs) {\n        return lhs.num * rhs.den <= lhs.den * rhs.num;\n\
    \    }\n    friend bool operator>(const Frac& lhs, const Frac& rhs) {\n      \
    \  return lhs.num * rhs.den > lhs.den * rhs.num;\n    }\n    friend bool operator<(const\
    \ Frac& lhs, const Frac& rhs) {\n        return lhs.num * rhs.den < lhs.den *\
    \ rhs.num;\n    }\n\n    double val() const {return (double)((*this).num) / (double)((*this).den);\
    \ }\n    friend ostream& operator<<(ostream& os, const Frac &x) { os << x.val();\
    \ return os; }\n    void reduce() {\n        assert((*this).den != 0 || (*this).num\
    \ != 0);\n        if ((*this).den == 0) { (*this).num = 1; return; }\n       \
    \ if ((*this).num == 0) { (*this).den = 1; return; }\n        ll g = gcd((*this).num,\
    \ (*this).den);\n        (*this).num /= g;\n        (*this).den /= g;\n      \
    \  if ((*this).den < 0) {\n            (*this).num *= -1;\n            (*this).den\
    \ *= -1;\n        }\n        return;\n    }\n};\nll Frac::redcue_limit = 1000000000;\n\
    Frac pow(const Frac &a, ll n) {\n    Frac res(1); Frac cur(a);\n    while (n >\
    \ 0) {\n        if (n & 1) res *= cur;\n        cur *= cur;\n        n >>= 1;\n\
    \    }\n    return res;\n}\nFrac abs(const Frac &f) {\n    Frac rev(f);\n    if\
    \ (rev.den * rev.num < 0) return -rev;\n    return rev;\n}\n/**\n * @brief fraction.hpp\n\
    \ * @docs docs/math/fraction.md\n */\n#line 3 \"competitive/std/io.hpp\"\n// \u6F14\
    \u7B97\u5B50\u30AA\u30FC\u30D0\u30FC\u30ED\u30FC\u30C9\uFF08\u30D7\u30ED\u30C8\
    \u30BF\u30A4\u30D7\u5BA3\u8A00\uFF09\ntemplate <class T, class U> inline istream&\
    \ operator>>(istream& is, pair<T, U>& p);\ntemplate <class T> inline istream&\
    \ operator>>(istream& is, vector<T>& v);\ntemplate <class T, class U> inline ostream&\
    \ operator<<(ostream& os, const pair<T, U>& p);\ntemplate <class T> inline ostream&\
    \ operator<<(ostream& os, const vector<T>& v);\ntemplate <typename T, typename\
    \ S> ostream &operator<<(ostream &os, const map<T, S> &mp);\ntemplate <typename\
    \ T> ostream &operator<<(ostream &os, const set<T> &st);\ntemplate <typename T>\
    \ ostream &operator<<(ostream &os, const multiset<T> &st);\ntemplate <typename\
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
    \ #__VA_ARGS__, __VA_ARGS__) // debug print\ntemplate <typename T> void input(T\
    \ &a) { cin >> a; };\ntemplate <typename T1, typename... T2> void input(T1&a,\
    \ T2 &...b) { cin >> a; input(b...); };\n#ifdef LOCAL_TEST\ntemplate <typename\
    \ T>\nvoid debug_func(int i, T name) { (void)i; (void)name; cerr << endl; }\n\
    template <typename T1, typename T2, typename... T3> void debug_func(int i, const\
    \ T1 &name, const T2 &a, const T3 &...b) {\n    int scope = 0;\n    for ( ; (scope\
    \ != 0 || name[i] != ',') && name[i] != '\\0'; i++ ) {\n        cerr << name[i];\n\
    \        if (name[i] == '(' || name[i] == '{') scope++;\n        if (name[i] ==\
    \ ')' || name[i] == '}') scope--;\n    }\n    cerr << \":\" << a << \" \";\n \
    \   debug_func(i + 1, name, b...);\n}\n#endif\n#ifndef LOCAL_TEST\ntemplate <typename...\
    \ T>\nvoid debug_func(const T &...) {}\n#endif\n/**\n * @brief io.hpp\n * @docs\
    \ docs/std/io.md\n */\n#line 6 \"online_test/AOJ/CGL_2_B.test.cpp\"\n\nint main()\
    \ {\n    using P = Point<Frac>;\n    using S = Segment<Frac>;\n    ll x1, y1,\
    \ x2, y2;\n    int q;\n    cin >> q;\n    rep(_, q) {\n        cin >> x1 >> y1\
    \ >> x2 >> y2;\n        S s1(P(x1, y1), P(x2, y2));\n        cin >> x1 >> y1 >>\
    \ x2 >> y2;\n        S s2(P(x1, y1), P(x2, y2));\n        if (intersect(s1, s2))\
    \ cout << 1 << '\\n';\n        else cout << 0 << '\\n';\n    }\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/2/CGL_2_B\"\
    \n#include \"competitive/std/std.hpp\"\n#include \"competitive/geometry/intersection.hpp\"\
    \n#include \"competitive/math/fraction.hpp\"\n#include \"competitive/std/io.hpp\"\
    \n\nint main() {\n    using P = Point<Frac>;\n    using S = Segment<Frac>;\n \
    \   ll x1, y1, x2, y2;\n    int q;\n    cin >> q;\n    rep(_, q) {\n        cin\
    \ >> x1 >> y1 >> x2 >> y2;\n        S s1(P(x1, y1), P(x2, y2));\n        cin >>\
    \ x1 >> y1 >> x2 >> y2;\n        S s2(P(x1, y1), P(x2, y2));\n        if (intersect(s1,\
    \ s2)) cout << 1 << '\\n';\n        else cout << 0 << '\\n';\n    }\n}\n"
  dependsOn:
  - competitive/std/std.hpp
  - competitive/geometry/intersection.hpp
  - competitive/geometry/base.hpp
  - competitive/geometry/counter_clockwise.hpp
  - competitive/geometry/angle.hpp
  - competitive/math/fraction.hpp
  - competitive/std/io.hpp
  isVerificationFile: true
  path: online_test/AOJ/CGL_2_B.test.cpp
  requiredBy: []
  timestamp: '2023-04-02 18:31:43+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: online_test/AOJ/CGL_2_B.test.cpp
layout: document
redirect_from:
- /verify/online_test/AOJ/CGL_2_B.test.cpp
- /verify/online_test/AOJ/CGL_2_B.test.cpp.html
title: online_test/AOJ/CGL_2_B.test.cpp
---
