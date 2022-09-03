#ifndef COMPETITIVE_MATH_PRIME_HPP
#define COMPETITIVE_MATH_PRIME_HPP 1
#include <competitive/std/std.hpp>
template <class T> bool is_prime(T n) {
    if (n == 1) return false;
    bool ans = true;
    for (T i=2; i <= (T)std::sqrt(n); i++) {
        if (n % i == 0) ans = false;
    }
    return ans;
};
//return all devisor
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
#endif // COMPETITIVE_MATH_PRIME_HPP