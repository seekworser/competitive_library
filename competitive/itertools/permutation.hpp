#ifndef COMPETITIVE_ITERTOOLS_PERMUTATION_HPP
#define COMPETITIVE_ITERTOOLS_PERMUTATION_HPP 1
#include <functional>
template<class T> bool next_combination(vector<T> &cur, vector<T> &a, vector<ll> &ind) {
    long long n = a.size();
    long long r = cur.size();
    if (r > n || r == 0) return false;
    if (ind[0] == -1) {
        for (long long i = 0; i < r; i++) {
            ind[i] = i;
            cur[i] = a[i];
        }
        return true;
    }
    for (long long i = r - 1; i > -1; i--) {
        if (ind[i] != n - r + i) {
            ind[i]++;
            for (long long j = i + 1; j < r; j++) {
                ind[j] = ind[j-1] + 1;
            }
            for (long long j = 0; j < r; j++) {
                cur[j] = a[ind[j]];
            }
            return true;
        }
    }
    return false;
};
template<class T> bool next_combination_dup(vector<T> &cur, vector<T> &a, vector<ll> &ind) {
    long long n = a.size();
    long long r = cur.size();
    if (r > n || r == 0) return false;
    if (ind[0] == -1) {
        for (long long i = 0; i < r; i++) {
            ind[i] = 0;
            cur[i] = a[0];
        }
        return true;
    }
    for (long long i = r - 1; i > -1; i--) {
        if (ind[i] != n - 1) {
            ind[i]++;
            for (long long j = i + 1; j < r; j++) {
                ind[j] = ind[j-1];
            }
            for (long long j = 0; j < r; j++) {
                cur[j] = a[ind[j]];
            }
            return true;
        }
    }
    return false;
};
#define rep_perm(i, a) auto i = a; sort(all(i)); for(bool i##_perm = true; i##_perm; i##_perm = next_permutation(all(i))) // a の順列全て（昇順）
#define rep_comb(i, a, r) decltype(a) i(r); vector<long long> i##_ind(r, -1); bool i##_next_comb = next_combination(i, a, i##_ind); for(; i##_next_comb; i##_next_comb=next_combination(i, a, i##_ind))
#define rep_comb_dup(i, a, r) decltype(a) i(r); vector<long long> i##_ind(r, -1); bool i##_next_comb = next_combination_dup(i, a, i##_ind); for(; i##_next_comb; i##_next_comb=next_combination_dup(i, a, i##_ind))
#endif //COMPETITIVE_ITERTOOLS_PERMUTATION_HPP