#pragma once
#include "competitive/std/std.hpp"
#include "competitive/math/euler_phi.hpp"
// Find k where x^k = y (mod p)
ll baby_step_giant_step(ll x, ll y, ll p) {
    assert(gcd(x, p) == 1);
    ll m = sqrtll(p);
    unordered_map<ll, int> xpow_pos;
    ll r = 1;
    int cnt = 0;
    auto insert_xp = [&](){
        if (!xpow_pos.count(r)) xpow_pos[r] = cnt++;
        r = (r * x);
        r %= p;
    };
    rep(i, m) { insert_xp(); }
    while (gcd(r, p) != 1) {
        m++;
        insert_xp();
    }
    r = powm(r, euler_phi(p)-1, p);
    ll rp = y % p;
    rep(i, m+1) {
        if (xpow_pos.count(rp)) return i * m + xpow_pos[rp];
        rp *= r;
        rp %= p;
    }
    return -1;
}
/**
 * @brief Baby Step Giant Step
 * @docs docs/math/baby_step_giant_step.md
 */
