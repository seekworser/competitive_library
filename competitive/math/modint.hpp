#pragma once
#include "competitive/std/std.hpp"
#include "atcoder/modint.hpp"
inline istream& operator>>(istream& is, atcoder::modint& x);
template<int m> inline istream& operator>>(istream& is, atcoder::static_modint<m>& x);
inline ostream& operator<<(ostream& os, const atcoder::modint& x);
template<int m> inline ostream& operator<<(ostream& os, const atcoder::static_modint<m>& x);
namespace modint_internal {
    template<typename Mint> Mint pow(Mint a, ll n) {
        Mint res = 1;
        while (n > 0) {
            if (n & 1) res *= a;
            if (n > 1) a *= a;
            n >>= 1;
        }
        return res;
    }
    template<typename Mint> inline istream& input(istream& is, Mint& x) {ll a; is >> a; x = a; return is; }
    template<typename Mint> inline ostream& print(ostream& os, const Mint& x) { os << x.val(); return os; }
}
inline istream& operator>>(istream& is, atcoder::modint& x) { return modint_internal::input(is, x); }
template<int m> inline istream& operator>>(istream& is, atcoder::static_modint<m>& x) { return modint_internal::input(is, x); }
inline ostream& operator<<(ostream& os, const atcoder::modint& x) { return modint_internal::print(os, x); }
template<int m> inline ostream& operator<<(ostream& os, const atcoder::static_modint<m>& x) { return modint_internal::print(os, x); }
atcoder::modint pow(atcoder::modint a, ll n) { return modint_internal::pow(a, n); }
template<int m> atcoder::static_modint<m> pow(atcoder::static_modint<m> a, ll n) { return modint_internal::pow(a, n); }
using modint998244353 = atcoder::modint998244353;
using modint1000000007 = atcoder::modint1000000007;
using modint = atcoder::modint;
/**
 * @brief modint.hpp
 * @docs docs/math/modint.md
 */
