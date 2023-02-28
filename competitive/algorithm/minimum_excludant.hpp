#pragma once
#include "competitive/std/std.hpp"
// return index_of a for longest common subsequence
template "class T" struct Mex {
private:
    set<pair<T, T>> s;

public:
    Mex(T inf=INF) {
        s.emplace(-inf, -inf);
        s.emplace(inf, inf);
    }

    bool contains(T x) const {
        auto it = prev(s.lower_bound(make_pair(x+1, x+1)));
        auto [l, u] = *it;
        return l <= x && x <= u;
    }

    bool insert(T x) {
        auto nit = s.lower_bound(make_pair(x+1, x+1));
        auto it = prev(nit);
        auto [l, u] = *it;
        auto [nl, nu] = *nit;
        if (l <= x && x <= u) return false;
        if (u == x-1) {
            if (nl == x+1) {
                s.erase(it);
                s.erase(nit);
                s.emplace(l, nu);
            } else {
                s.erase(it);
                s.emplace(l, x);
            }
        } else {
            if (nl == x+1) {
                s.erase(nit);
                s.emplace(x, nu);
            } else {
                s.emplace(x, x);
            }
        }
        return true;
    }

    bool erase(T x) {
        auto nit = s.lower_bound(make_pair(x+1, x+1));
        auto it = prev(nit);
        auto [l, u] = *it;
        if (x < l || u < x) return false;
        if (l == x) {
            if (u == x) {
                s.erase(it);
            } else {
                s.erase(it);
                s.emplace(l+1, u);
            }
            return true;
        }
        if (u == x) {
            s.erase(it);
            s.emplace(l, u-1);
            return true;
        }
        s.erase(it);
        s.emplace(l, x-1);
        s.emplace(x+1, u);
        return true;
    }

    T mex(T x = 0) const {
        auto [l, u] = *prev(s.lower_bound(make_pair(x+1, x+1)));
        if (l <= x && x <= u) {
            return u+1;
        } else {
            return x;
        }
    }
};
/**
 * @brief minimum_excludant.hpp
 * @docs docs/algorithm/minimum_excludant.md
 */
