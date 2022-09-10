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
using ll = long long; // -2^63 ～ 2^63 = 9 * 10^18（int は -2^31 ～ 2^31 = 2 * 10^9）
using pii = pair<int, int>; using pll = pair<ll, ll>; using pil = pair<int, ll>; using pli = pair<ll, int>;
using mii = map<int, int>; using mll = map<ll, ll>; using mil = map<int, ll>; using mli = map<ll, int>;
using vi = vector<int>;  using vvi = vector<vi>; using vvvi = vector<vvi>;
using vl = vector<ll>;  using vvl = vector<vl>; using vvvl = vector<vvl>;
using vb = vector<bool>; using vvb = vector<vb>; using vvvb = vector<vvb>;
using vc = vector<char>; using vvc = vector<vc>; using vvvc = vector<vvc>;
using vd = vector<double>; using vvd = vector<vd>; using vvvd = vector<vvd>;
using vs = vector<string>;
template <class T> using priority_queue_rev = priority_queue<T, vector<T>, greater<T>>;

// 定数の定義
const double PI = acos(-1);
int INF = 100100100; ll INFL = 4004004004004004004LL;
double EPS = 1e-16;
constexpr int MODINT998244353 = 998244353;
constexpr int MODINT1000000007 = 1000000007;
// 入出力高速化
struct fast_io { fast_io() { cin.tie(nullptr); ios::sync_with_stdio(false); cout << fixed << setprecision(18); } } fastIOtmp;

// 汎用マクロの定義
#define all(a) (a).begin(), (a).end()
#define sz(x) ((int)(x).size())
#define lbpos(a, x) (int)distance((a).begin(), std::lower_bound(all(a), x))
#define ubpos(a, x) (int)distance((a).begin(), std::upper_bound(all(a), x))
#define Yes(b) {cout << ((b) ? "Yes\n" : "No\n");}
#define rep(i, n) for(int i = 0, i##_len = int(n); i < i##_len; ++i) // 0 から n-1 まで昇順
#define repi(i, s, t) for(int i = int(s), i##_end = int(t); i < i##_end; ++i) // s から t まで昇順
#define repis(i, s, t, step) for(int i = int(s), i##_end = int(t); i < i##_end; i+=step) // s から t まで stepずつ
#define repir(i, s, t, step) for(int i = int(s), i##_end = int(t); i > i##_end; i+=step) // s から t まで stepずつ
#define repe(a, v) for(auto& a : (v)) // v の全要素（変更可能）
#define repea(a, v) for(const auto& a : (v)) // v の全要素（変更不可能）
#define smod(n, m) ((((n) % (m)) + (m)) % (m)) // 非負mod
#define sdiv(n, m) (((n) - smod(n, m)) / (m)) // 非負div
#define uniq(a) {sort(all(a)); (a).erase(unique(all(a)), (a).end());} // 重複除去
#define EXIT(a) {cout << (a) << endl; exit(0);} // 強制終了
#define debug(...) debug_func(0, #__VA_ARGS__, __VA_ARGS__) // debug print
#ifdef LOCAL_TEST
template <typename T>
void debug_func(int i, T name) {
    (void)i;
    (void)name;
    cerr << endl;
}
template <typename T1, typename T2, typename... T3>
void debug_func(int i, const T1 &name, const T2 &a, const T3 &...b) {
  for ( ; name[i] != ',' && name[i] != '\0'; i++ ) cerr << name[i];
  cerr << ":" << a << " ";
  debug_func(i + 1, name, b...);
}
#endif
#ifndef LOCAL_TEST
template <typename... T>
void debug_func(const T &...) {}
#endif

// modでのpow
ll powm(ll a, ll n, ll mod=MODINT1000000007) {
    ll res = 1;
    while (n > 0) {
        if (n & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        n >>= 1;
    }
    return res;
}
template <class T> inline bool chmax(T& M, const T& x) { if (M < x) { M = x; return true; } return false; } // 最大値を更新（更新されたら true を返す）
template <class T> inline bool chmin(T& m, const T& x) { if (m > x) { m = x; return true; } return false; } // 最小値を更新（更新されたら true を返す）
int digit(ll x, int d=10) { int rev=0; while (x > 0) { rev++; x /= d;}; return rev; } // xのd進数桁数

// 演算子オーバーロード
template <class T, class U> inline istream& operator>>(istream& is, pair<T, U>& p) { is >> p.first >> p.second; return is; }
template <class T> inline istream& operator>>(istream& is, vector<T>& v) { repe(x, v) is >> x; return is; }
template <class T, class U> inline ostream& operator<<(ostream& os, pair<T, U>& p) { os << p.first << " " << p.second; return os; }
template <class T> inline ostream& operator<<(ostream& os, vector<T>& v) {
    rep(i, sz(v)) {
        os << v.at(i);
        if (i != sz(v) - 1) os << " ";
    }
    return os;
}
template <class T> inline ostream& operator<<(ostream& os, const vector<T>& v) {
    rep(i, sz(v)) {
        os << v.at(i);
        if (i != sz(v) - 1) os << " ";
    }
    return os;
}
template <class T> inline vector<T>& operator--(vector<T>& v) { repe(x, v) --x; return v; }
template <class T> inline vector<T>& operator++(vector<T>& v) { repe(x, v) ++x; return v; }
#endif // COMPETITIVE_STD_STD_HPP