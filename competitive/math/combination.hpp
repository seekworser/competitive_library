#pragma once
#include "competitive/std/std.hpp"
#include "competitive/math/modint.hpp"
template<typename mint> struct Combination {
    vector<mint> fact, fact_inv;
    Combination(int nmax) : fact(nmax+1), fact_inv(nmax+1) {
        int p = mint::mod();
        vector<mint> inv(nmax+1);
        fact[0] = fact[1] = 1;
        fact_inv[0] = fact_inv[1] = 1;
        inv[0] = 0;
        inv[1] = 1;
        for (int i = 2; i < nmax+1; i++) {
            fact[i] = fact[i - 1] * i;
            inv[i] = p - inv[p % i] * (p / i);
            fact_inv[i] = fact_inv[i - 1] * inv[i];
        }
    }
    mint operator()(int n, int r) {
        if (r < 0 || n < r) return 0;
        return fact[n] / fact_inv[r] / fact_inv[n - r];
    }
};
/**
 * @brief combination.hpp
 * @docs docs/math/combination.md
 */
