#pragma once
#include "competitive/std/std.hpp"
bool is_prime(ll n) {
    using u128 = __uint128_t;
    vector<u128> a_list = {2, 7, 61, 325, 9375, 28178, 450775, 9780504, 1795265022};
    if (n == 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    ll r = 0;
    ll d = n - 1;
    while (!(d & 1)) {
        d >>= 1;
        r++;
    }
    ll cnt = 0;
    repe(a, a_list) {
        if (a >= n) continue;
        u128 res = 1;
        ll di = d;
        while (di > 0) {
            if (di & 1) res = (res * a) % n;
            if (di > 1) a = (a * a) % n;
            di >>= 1;
        }
        if (res == 1) continue;
        bool valid = false;
        rep(i, r) {
            if (res == n - 1) valid = true;
            res = (res * res) % n;
        }
        if (!valid) return false;
    }
    return true;
}

template <class T> vector<T> divisor(T n, bool sorted=true) {
    vector<T> ans(0);
    for (T i = 1; i <= (T)std::sqrt(n); i++) {
        if (n % i == 0) {
            ans.push_back(i);
            if (i * i != n) ans.push_back(n / i);
        }
    }
    if (sorted) sort(ans.begin(), ans.end());
    return ans;
};
template <class T> vector<T> prime_factor(T n) {
    vector<T> ans(0);
    for (T i = 2; i <= (T)std::sqrt(n); i++) {
        while (n % i == 0) {
            ans.push_back(i);
            n /= i;
        }
    }
    if (n != 1) ans.push_back(n);
    return ans;
};
template <class T> map<T, T> prime_factor_c(T n) {
    map<T, T> ans;
    for (T i = 2; i <= (T)std::sqrt(n); i++) {
        while (n % i == 0) {
            ans[i] += 1;
            n /= i;
        }
    }
    if (n != 1) ans[n] += 1;
    return ans;
};
template <class T> vector<T> primes(T n) {
    vector<T> ans(0);
    if (n < 2) return ans;
    vector<bool> is_primev(n+1, true);
    is_primev.at(0) = is_primev.at(1) = false;
    for (T i = 2; i <= (T)std::sqrt(n); i++) {
        if (!is_primev.at(i)) continue;
        for (T j = i*2; j <= n; j+=i) is_primev.at(j) = false;
    }
    for (T i = 2; i <= n; i++) {
        if (is_primev.at(i)) ans.push_back(i);
    }
    return ans;
};
template <class T> vector<T> segment_seive(T s, T t) {
    vector<T> ans(0);
    if (t < 2 || s < 0 || s >= t) return ans;
    vector<bool> is_prime_small((T)std::sqrt(t)+1, true);
    vector<bool> is_prime_large(t-s, true);
    for (T i = 2; i <= (T)std::sqrt(t); i++) {
        if (!is_prime_small.at(i)) continue;
        for (T j = i*2; j*j < t; j+=i) is_prime_small.at(j) = false;
        for (T j = max(2*i, ((s+i-1)/i)*i); j < t; j+=i) is_prime_large.at(j-s) = false;
    }
    for (T i=0; i < t-s; i++) {
        if (is_prime_large.at(i) && s+i != 1) ans.push_back(s+i);
    }
    return ans;
};
/**
 * @brief prime.hpp
 * @docs docs/math/prime.md
 */
