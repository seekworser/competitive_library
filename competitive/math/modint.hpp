#ifndef COMPETITIVE_MATH_MODINT_HPP
#define COMPETITIVE_MATH_MODINT_HPP 1
#include <competitive/std/std.hpp>
#include <atcoder/modint.hpp>
// istream in not working...
inline std::istream& operator>>(std::istream& is, atcoder::modint& x);
inline std::istream& operator>>(std::istream& is, atcoder::modint998244353& x);
inline std::istream& operator>>(std::istream& is, atcoder::modint1000000007& x);
inline std::ostream& operator<<(std::ostream& os, const atcoder::modint& x);
inline std::ostream& operator<<(std::ostream& os, const atcoder::modint998244353& x);
inline std::ostream& operator<<(std::ostream& os, const atcoder::modint1000000007& x);
inline std::istream& operator>>(std::istream& is, atcoder::modint& x) {ll a; is >> a; x = a; return is; }
inline std::istream& operator>>(std::istream& is, atcoder::modint998244353& x) {ll a; is >> a; x = a; return is; }
inline std::istream& operator>>(std::istream& is, atcoder::modint1000000007& x) {ll a; is >> a; x = a; return is; }
inline std::ostream& operator<<(std::ostream& os, const atcoder::modint& x) { os << x.val(); return os; }
inline std::ostream& operator<<(std::ostream& os, const atcoder::modint998244353& x) { os << x.val(); return os; }
inline std::ostream& operator<<(std::ostream& os, const atcoder::modint1000000007& x) { os << x.val(); return os; }
using modint998244353 = atcoder::modint998244353;
using modint1000000007 = atcoder::modint1000000007;
using modint = atcoder::modint;
#endif // COMPETITIVE_MATH_MODINT_HPP