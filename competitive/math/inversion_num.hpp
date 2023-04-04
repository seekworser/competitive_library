#pragma once
#include "competitive/std/std.hpp"
#include "competitive/data_structure/bit.hpp"
template<class T> ll inversion_number(vector<T> &a) {
    ll ans = 0;
    Bit<ll> b(a.size());
    vector<T> sorted_a = a;
    sort(all(sorted_a));
    unordered_map<T, ll> ind_map;
    rep(i, a.size()) ind_map[sorted_a[i]] = i;
    rep(i, a.size()) {
        ans += i - b.sum(ind_map[a[i]] + 1);
        b.add(ind_map[a[i]], 1);
    }
    return ans;
}
/**
 * @brief inversion_num.hpp
 * @docs docs/math/inversion_num.md
 */
