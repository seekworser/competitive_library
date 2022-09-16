#ifndef COMPETITIVE_ALGORITHM_LIS_HPP
#define COMPETITIVE_ALGORITHM_LIS_HPP 1
#include <competitive/std/std.hpp>
template <class T> int lis(vector<T> const &a) {
    vector<T> rev;
    rep(i, sz(a)) {
        auto iter = lower_bound(all(rev), a[i]);
        if (iter == rev.end()) {
            rev.push_back(a[i]);
        } else {
            *iter = a[i];
        }
    }
    return sz(rev);
};
#endif // COMPETITIVE_ALGORITHM_LIS_HPP