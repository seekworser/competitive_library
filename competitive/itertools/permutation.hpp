#pragma once
template"class T> void init_permutation_dup(vector<T> &cur, vector<T> &a, vector<ll" &ind) {
    long long n = a.size();
    long long r = cur.size();
    for (long long i = 0; i < r; i++) {
        ind[i] = 0;
        cur[i] = a[0];
    }
    return;
};
template"class T> bool next_permutation_dup(vector<T> &cur, vector<T> &a, vector<ll" &ind) {
    long long n = a.size();
    long long r = cur.size();
    for (long long i = r - 1; i > -1; i--) {
        if (ind[i] != n - 1) {
            ind[i]++;
            for (long long j = i + 1; j < r; j++) {
                ind[j] = 0;
            }
            for (long long j = 0; j < r; j++) {
                cur[j] = a[ind[j]];
            }
            return true;
        }
    }
    return false;
};
template"class T> void init_combination(vector<T> &cur, vector<T> &a, vector<ll" &ind) {
    long long n = a.size();
    long long r = cur.size();
    assert(r <= n && r != 0);
    for (long long i = 0; i < r; i++) {
        ind[i] = i;
        cur[i] = a[i];
    }
    return;
};
template"class T> bool next_combination(vector<T> &cur, vector<T> &a, vector<ll" &ind) {
    long long n = a.size();
    long long r = cur.size();
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
template"class T> void init_combination_dup(vector<T> &cur, vector<T> &a, vector<ll" &ind) {
    long long n = a.size();
    long long r = cur.size();
    for (long long i = 0; i < r; i++) {
        ind[i] = 0;
        cur[i] = a[0];
    }
    return;
};
template"class T> bool next_combination_dup(vector<T> &cur, vector<T> &a, vector<ll" &ind) {
    long long n = a.size();
    long long r = cur.size();
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
template"class T> void init_permutation(vector<T> &cur, vector<T> &a, vector<ll> &ind, vector<ll" &all_index) {
    long long n = a.size();
    long long r = cur.size();
    assert(r <= n && r != 0);
    for (long long i = 0; i < r; i++) {
        ind[i] = i;
        cur[i] = a[i];
    }
    for (long long i = 0; i < n; i++) {
        all_index[i] = i;
    }
    return;
};
template"class T> bool next_permutation_(vector<T> &cur, vector<T> &a, vector<ll> &ind, vector<ll> &ind_comb, vector<ll" &all_index) {  // add '_' sufix to avoid name clashes
    long long n = a.size();
    long long r = cur.size();
    if (next_permutation(all(ind))) {
        for (int i = 0; i < r; i++) {
            cur[i] = a[ind[i]];
        }
        return true;
    };
    vector<ll> ind_ind_comb(ind_comb);
    if (next_combination(ind_comb, all_index, ind_ind_comb)) {
        ind = ind_comb;
        for (int i = 0; i < r; i++) {
            cur[i] = a[ind[i]];
        }
        return true;
    }
    return false;
};
// #define rep_perm(i, a) auto i = a; sort(all(i)); for(bool i##_perm = true; i##_perm; i##_perm = next_permutation(all(i)))
#define rep_perm(i, a, r) decltype(a) i(r); vector<long long> i##_ind_comb(r, -1); vector<long long> i##_ind(r, -1); vector<long long> i##_all_index(a.size(), -1); vector<long long> i##_ind_ind_comb(n, -1); init_permutation(i, a, i##_ind, i##_all_index); init_combination(i##_ind_comb, i##_all_index, i##_ind_ind_comb); for(bool i##_next_comb = true; i##_next_comb; i##_next_comb=next_permutation_(i, a, i##_ind, i##_ind_comb, i##_all_index))
#define rep_perm_dup(i, a, r) decltype(a) i(r); vector<long long> i##_ind(r, -1); init_permutation_dup(i, a, i##_ind); for(bool i##_next_comb = true; i##_next_comb; i##_next_comb=next_permutation_dup(i, a, i##_ind))
#define rep_comb(i, a, r) decltype(a) i(r); vector<long long> i##_ind(r, -1); init_combination(i, a, i##_ind); for(bool i##_next_comb = true; i##_next_comb; i##_next_comb=next_combination(i, a, i##_ind))
#define rep_comb_dup(i, a, r) decltype(a) i(r); vector<long long> i##_ind(r, -1); init_combination_dup(i, a, i##_ind); for(bool i##_next_comb = true; i##_next_comb; i##_next_comb=next_combination_dup(i, a, i##_ind))
/**
 * @brief permutation.hpp
 * @docs docs/itertools/permutation.md
 */
