#pragma once
#include "competitive/std/std.hpp"
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
ll inv(ll x, ll mod) {
    return powm(x, euler_phi(mod)-1, mod);
}
vector<ll> euler_phi_table(ll n) {
    vector<ll> euler(n + 1);
    rep(i, n+1) {
        euler[i] = i;
    }
    rep(i, 2, n+1) {
        if(euler[i] == i) {
            rep(j, i, n+1, i) {
                euler[j] /= i;
                euler[j] *= (i - 1);
            }
        }
    }
    return euler;
}
/**
 * @brief euler_phi.hpp
 * @docs docs/math/euler_phi.md
 */
