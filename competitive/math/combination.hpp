#pragma once
#include "competitive/std/std.hpp"
struct Combination {
    ll pm;
    vl fact, fact_inv;
    Combination(int n = 1000003, ll p = 998244353) : fact(n), fact_inv(n){
        vl inv(n);
        pm = p;
        fact[0] = fact[1] = 1;
        fact_inv[0] = fact_inv[1] = 1;
        inv[0] = 0;
        inv[1] = 1;
        for (int i = 2; i < n; i++) {
            fact[i] = fact[i - 1] * i % p;
            inv[i] = p - inv[p % i] * (p / i) % p;
            fact_inv[i] = fact_inv[i - 1] * inv[i] % p;
        }
    }
    ll operator()(int n, int r) {
        if (r < 0 || n < r) return 0;
        return fact[n] * (fact_inv[r] * fact_inv[n - r] % pm) % pm;
    }
};
/**
 * @brief combination.hpp
 * @docs docs/math/combination.md
 */
