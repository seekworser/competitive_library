#ifndef COMPETITIVE_DATASTRUCTURE_BIT_HPP
#define COMPETITIVE_DATASTRUCTURE_BIT_HPP 1
#include <competitive/std/std.hpp>
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
            int ret = 0;
            for (int i = p; i > 0; i -= i & -i){
                ret += bit[i];
            }
            return ret;
        }
        T sum(int ps, int pt) {
            return sum_from_left(pt) - sum_from_left(ps);
        }
};
#endif //COMPETITIVE_DATASTRUCTURE_BIT_HPP