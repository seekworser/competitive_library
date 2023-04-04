#pragma once
#include "competitive/std/std.hpp"
template<typename T> struct Bit {
    vector<T> bit;
    int _n;
    Bit(int size, T val = T(0)) : _n(size), bit(size+1, val) {}
    Bit(const vector<T> val) : _n(sz(val)), bit(sz(val)+1, T(0)) {
        rep(i, _n) set(i, val[i]);
    }
    void add(int p, T x) {
        assert(0 <= p && p <= _n);
        p++;
        for (int i = p; i <= _n; i += i & -i) {
            bit[i] += x;
        }
    }
    T sum(int r) const {
        assert(0 <= r && r <= _n);
        T ret = 0;
        for (int i = r; i > 0; i -= i & -i){
            ret += bit[i];
        }
        return ret;
    }
    T sum(int l, int r) const {
        return sum(r) - sum(l);
    }
    T get(int p) const {
        assert(0 <= p && p < _n);
        return sum(p, p+1);
    }
    void set(int p, T x) {
        assert(0 <= p && p < _n);
        add(p, x - get(p));
    }
    int lower_bound(T w) const {
        if (w <= 0) return 0;
        int x = 0;
        for (int k = 1 << __lg(_n); k; k >>= 1) {
            if (x + k <= _n && bit[x + k] < w) {
                w -= bit[x + k];
                x += k;
            }
        }
        return x;
    }
    int upper_bound(T w) const {
        if (w < 0) return 0;
        int x = 0;
        for (int k = 1 << __lg(_n); k; k >>= 1) {
            if (x + k <= _n && bit[x + k] <= w) {
                w -= bit[x + k];
                x += k;
            }
        }
        return x;
    }
};
template <typename T> std::ostream& operator<<(std::ostream& os, const Bit<T> bit) {
    rep(i, bit._n) { os << bit.get(i); if (i != bit._n-1) os << " "; }
    return os;
};
/**
 * @brief BIT（Binary Index Tree）
 * @docs docs/data_structure/bit.md
 */
