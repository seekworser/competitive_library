#ifndef COMPETITIVE_STD_STD_HPP
#define COMPETITIVE_STD_STD_HPP 1
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
template <class T> using priority_queue_min = priority_queue<T, vector<T>, greater<T>>;
// 定数の定義
constexpr double PI = 3.14159265358979323;
constexpr int INF = 100100111; constexpr ll INFL = 3300300300300300491LL;
float EPS = 1e-8; double EPSL = 1e-16;
bool eq(const double x, const double y) { return abs(x - y) < EPSL; }
bool eq(const float x, const float y) { return abs(x - y) < EPS; }
template<typename T> bool eq(const T x, const T y) { return x == y; }
template<typename T> bool neq(const T x, const T y) { return !(eq(x, y)); }
template<typename T> bool ge(const T x, const T y) { return eq(x, y) || (x > y); }
template<typename T> bool le(const T x, const T y) { return eq(x, y) || (x < y); }
template<typename T> bool gt(const T x, const T y) { return !(le(x, y)); }
template<typename T> bool lt(const T x, const T y) { return !(ge(x, y)); }
constexpr int MODINT998244353 = 998244353;
constexpr int MODINT1000000007 = 1000000007;
// 入出力高速化
struct Nyan { Nyan() { cin.tie(nullptr); ios::sync_with_stdio(false); cout << fixed << setprecision(18); } } nyan;
// 汎用マクロの定義
#define all(a) (a).begin(), (a).end()
#define sz(x) ((int)(x).size())
// #define lbpos(a, x) (int)distance((a).begin(), std::lower_bound(all(a), x))
// #define ubpos(a, x) (int)distance((a).begin(), std::upper_bound(all(a), x))
#define rep(i, n) for(ll i = 0, i##_len = ll(n); i < i##_len; ++i) // 0 から n-1 まで昇順
#define repi(i, s, t) for(ll i = ll(s), i##_end = ll(t); i < i##_end; ++i) // s から t まで昇順
#define repis(i, s, t, step) for(ll i = ll(s), i##_end = ll(t); i < i##_end; i+=step) // s から t まで stepずつ
#define repir(i, s, t, step) for(ll i = ll(s), i##_end = ll(t); i > i##_end; i+=step) // s から t まで stepずつ
#define repe(a, v) for(auto& a : (v)) // v の全要素（変更可能）
// #define repea(a, v) for(const auto& a : (v)) // v の全要素（変更不可能）
#define smod(n, m) ((((n) % (m)) + (m)) % (m)) // 非負mod
#define sdiv(n, m) (((n) - smod(n, m)) / (m)) // 非負div
// #define uniq(a) {sort(all(a)); (a).erase(unique(all(a)), (a).end());} // 重複除去
// #define EXIT(a) {cout << (a) << endl; exit(0);} // 強制終了
void Yes(bool b) { cout << (b ? "Yes\n" : "No\n"); return; }
void YES(bool b) { cout << (b ? "YES\n" : "NO\n"); return; }

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
    ll hi(x), lo(0);
    while (hi != lo) {
        ll y = (hi + lo + 1) / 2;
        if (y <= x/y) lo = y;
        else hi = y - 1;
    }
    return lo;
}
template <class T> inline bool chmax(T& M, const T& x) { if (M < x) { M = x; return true; } return false; } // 最大値を更新（更新されたら true を返す）
template <class T> inline bool chmin(T& m, const T& x) { if (m > x) { m = x; return true; } return false; } // 最小値を更新（更新されたら true を返す）
int digit(ll x, int d=10) { int rev=0; while (x > 0) { rev++; x /= d;}; return rev; } // xのd進数桁数
#endif // COMPETITIVE_STD_STD_HPP