#pragma once
#include "competitive/std/std.hpp"
template<class T> struct BIT {
    private:
        vector<T> bit;
        int _n;
    public:
        BIT(int size):_n(size),bit(size+1, 0) {}
        void add(int p, T x) {
            assert(0 <= p && p <= _n);
            p++;
            for (int i = p; i <= _n; i += i & -i) {
                bit[i] += x;
            }
        }
        T sum_from_left(int p) {
            assert(0 <= p && p <= _n);
            T ret = 0;
            for (int i = p; i > 0; i -= i & -i){
                ret += bit[i];
            }
            return ret;
        }
        T sum(int ps, int pt) {
            return sum_from_left(pt) - sum_from_left(ps);
        }
};
/**
 * @brief bit.hpp
 * @docs docs/data_structure/bit.md
 */
