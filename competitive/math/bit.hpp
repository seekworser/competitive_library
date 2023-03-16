#pragma once
#include "competitive/std/std.hpp"
namespace bit{
    bool lb(ll x) { return (x & 1); }
    bool get(ll x, int n) { return ((x >> n) & 1); }
    ll update(ll x, int n, bool b) { return (x & ~(1LL << n)) + (b << n); }
    ll lsb(ll x) { return -x & x; }
    int digit(ll x) { int rev=0; while(x) { rev++; x >>= 1; } return rev; }
    ll msb(ll x) { if (x==0) return 0; return 1LL << (digit(x) - 1); }
    int lsbd(ll x) {return digit(lsb(x)); }
    int count(ll x) { return __builtin_popcountll(x); }
    string to_string(ll x, bool rev=true) { stringstream ss; while (x) { ss << lb(x); x >>= 1;} string s(ss.str()); if (rev) reverse(all(s)); return s; }
}
/**
 * @brief bit.hpp
 * @docs docs/math/bit.md
 */
