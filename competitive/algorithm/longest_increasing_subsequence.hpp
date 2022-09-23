#ifndef COMPETITIVE_ALGORITHM_LIS_HPP
#define COMPETITIVE_ALGORITHM_LIS_HPP 1
#include <competitive/std/std.hpp>
// return index_of longest increasing subsequence of a
template <class T> vector<int> lis(vector<T> const &a, bool const strict=true) {
    vector<T> dp;
    vector<int> pos(sz(a));
    auto iter = dp.begin();
    rep(i, sz(a)) {
        if (strict) iter = lower_bound(all(dp), a[i]);
        else iter = upper_bound(all(dp), a[i]);
        pos[i] = distance(dp.begin(), iter);
        if (iter == dp.end()) dp.push_back(a[i]);
        else *iter = a[i];
    }
    int m = sz(dp) - 1;
    vector<int> rev(m+1);
    for (int i = sz(a)-1; m >= 0 && i >= 0; --i) {
        if (pos[i] == m) {
            rev[m] = i;
            --m;
        }
    }
    return rev;
};
#endif // COMPETITIVE_ALGORITHM_LIS_HPP