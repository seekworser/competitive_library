#pragma once
#include <bits/stdc++.h>
#ifndef LOCAL_TEST
#pragma GCC target ("avx")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#endif // LOCAL_TEST
using namespace std;
// 型名の短縮
using ll = long long;
using pii = pair<int, int>; using pll = pair<ll, ll>;
using vi = vector<int>;  using vvi = vector<vi>; using vvvi = vector<vvi>;
using vl = vector<ll>;  using vvl = vector<vl>; using vvvl = vector<vvl>;
using vb = vector<bool>; using vvb = vector<vb>; using vvvb = vector<vvb>;
using vc = vector<char>; using vvc = vector<vc>; using vvvc = vector<vvc>;
using vd = vector<double>; using vvd = vector<vd>; using vvvd = vector<vvd>;
using vs = vector<string>; using vvs = vector<vector<string>>; using vvvs = vector<vector<vector<string>>>;
template<typename T> vector<vector<T>> vv(int h, int w, T val = T()) { return vector(h, vector<T>(w, val)); }
template<typename T> vector<vector<vector<T>>> vvv(int h1, int h2, int h3, T val = T()) { return vector(h1, vector(h2, vector<T>(h3, val))); }
template<typename T> vector<vector<vector<vector<T>>>> vvvv(int h1, int h2, int h3, int h4, T val = T()) { return vector(h1, vector(h2, vector(h3, vector<T>(h4, val)))); }
template <class T> using priority_queue_min = priority_queue<T, vector<T>, greater<T>>;
// 定数の定義
constexpr double PI = 3.14159265358979323;
constexpr int INF = 100100111; constexpr ll INFL = 3300300300300300491LL;
float EPS = 1e-8; double EPSL = 1e-16;
template<typename T> bool eq(const T x, const T y) { return x == y; }
template<> bool eq<double>(const double x, const double y) { return abs(x - y) < EPSL; }
template<> bool eq<float>(const float x, const float y) { return abs(x - y) < EPS; }
template<typename T> bool neq(const T x, const T y) { return !(eq<T>(x, y)); }
template<typename T> bool ge(const T x, const T y) { return (eq<T>(x, y) || (x > y)); }
template<typename T> bool le(const T x, const T y) { return (eq<T>(x, y) || (x < y)); }
template<typename T> bool gt(const T x, const T y) { return !(le<T>(x, y)); }
template<typename T> bool lt(const T x, const T y) { return !(ge<T>(x, y)); }
constexpr int MODINT998244353 = 998244353;
constexpr int MODINT1000000007 = 1000000007;
// 入出力高速化
struct Nyan { Nyan() { cin.tie(nullptr); ios::sync_with_stdio(false); cout << fixed << setprecision(18); } } nyan;
// 汎用マクロの定義
#define all(a) (a).begin(), (a).end()
#define sz(x) ((ll)(x).size())
#define rep1(n) for(ll dummy_iter = 0LL; dummy_iter < n; ++dummy_iter) // 0 から n-1 まで昇順
#define rep2(i, n) for(ll i = 0LL, i##_counter = 0LL; i##_counter < ll(n); ++(i##_counter), (i) = i##_counter) // 0 から n-1 まで昇順
#define rep3(i, s, t) for(ll i = ll(s), i##_counter = ll(s); i##_counter < ll(t); ++(i##_counter), (i) = (i##_counter)) // s から t まで昇順
#define rep4(i, s, t, step) for(ll i##_counter = step > 0 ? ll(s) : -ll(s), i##_end = step > 0 ? ll(t) : -ll(t), i##_step = abs(step), i = ll(s); i##_counter < i##_end; i##_counter += i##_step, i = step > 0 ? i##_counter : -i##_counter) // s から t まで stepずつ
#define overload4(a, b, c, d, e, ...) e
#define rep(...) overload4(__VA_ARGS__, rep4, rep3, rep2, rep1)(__VA_ARGS__)
#define repe(a, v) for(auto& a : (v)) // v の全要素（変更可能）
#define smod(n, m) ((((n) % (m)) + (m)) % (m)) // 非負mod
#define sdiv(n, m) (((n) - smod(n, m)) / (m)) // 非負div
#define uniq(a) {sort(all(a)); (a).erase(unique(all(a)), (a).end());} // 重複除去
void Yes(bool b) { cout << (b ? "Yes\n" : "No\n"); return; };
void YES(bool b) { cout << (b ? "YES\n" : "NO\n"); return; };
template<typename T, size_t N> T max(array<T, N>& a) { return *max_element(all(a)); };
template<typename T, size_t N> T min(array<T, N>& a) { return *min_element(all(a)); };
template<typename T> T max(vector<T>& a) { return *max_element(all(a)); };
template<typename T> T min(vector<T>& a) { return *min_element(all(a)); };
template<typename T> T sum(vector<T>& a, T zero = T(0)) { T rev = zero; rep(i, sz(a)) rev += a[i]; return rev; };
template<typename T> bool in_range(const T& val, const T& s, const T& t) { return s <= val && val < t; };

template <class T> inline vector<T>& operator--(vector<T>& v) { repe(x, v) --x; return v; }
template <class T> inline vector<T>& operator++(vector<T>& v) { repe(x, v) ++x; return v; }

// modでのpow
ll powm(ll a, ll n, ll mod=INFL) {
    ll res = 1;
    while (n > 0) {
        if (n & 1) res = (res * a) % mod;
        if (n > 1) a = (a * a) % mod;
        n >>= 1;
    }
    return res;
}
// 整数Sqrt
ll sqrtll(ll x) {
    assert(x >= 0);
    ll rev = sqrt(x);
    while(rev * rev > x) --rev;
    while((rev+1) * (rev+1)<=x) ++rev;
    return rev;
}
template <class T> inline bool chmax(T& M, const T& x) { if (M < x) { M = x; return true; } return false; } // 最大値を更新（更新されたら true を返す）
template <class T> inline bool chmin(T& m, const T& x) { if (m > x) { m = x; return true; } return false; } // 最小値を更新（更新されたら true を返す）
int digit(ll x, int d=10) { int rev=0; while (x > 0) { rev++; x /= d;}; return rev; } // xのd進数桁数
/**
 * @brief std.hpp
 * @docs docs/std/std.md
 */
