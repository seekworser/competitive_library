#ifndef COMPETITIVE_MATH_MODINT_HPP
#define COMPETITIVE_MATH_MODINT_HPP 1
#include <bits/stdc++.h>
#include <atcoder/modint.hpp>
inline std::ostream& operator<<(std::ostream& os, const atcoder::modint x);
inline std::ostream& operator<<(std::ostream& os, const atcoder::modint998244353 x);
inline std::ostream& operator<<(std::ostream& os, const atcoder::modint1000000007 x);
inline std::ostream& operator<<(std::ostream& os, const atcoder::modint x) { os << x.val(); return os; }
inline std::ostream& operator<<(std::ostream& os, const atcoder::modint998244353 x) { os << x.val(); return os; }
inline std::ostream& operator<<(std::ostream& os, const atcoder::modint1000000007 x) { os << x.val(); return os; }
#endif // COMPETITIVE_MATH_MODINT_HPP