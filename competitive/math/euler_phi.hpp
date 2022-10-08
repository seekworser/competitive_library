#ifndef COMPETITIVE_MATH_EULERPHI_HPP
#define COMPETITIVE_MATH_EULERPHI_HPP 1
#include <competitive/std/std.hpp>
/**
 * @brief
 * counts the positive integers up to a given integer n
 * O(sqrt(N))
 */
ll euler_phi(ll n) {
  ll ret = n;
  for(ll i = 2; i * i <= n; i++) {
    if(n % i == 0) {
      ret -= ret / i;
      while(n % i == 0) n /= i;
    }
  }
  if(n > 1) ret -= ret / n;
  return ret;
}
/**
 * @brief
 * return minimul positive value y s.t. x*y = 1 (mod mod)
 */
ll inv(ll x, ll mod) {
    return powm(x, euler_phi(mod)-1, mod);
}
#endif // COMPETITIVE_MATH_EULERPHI_HPP
