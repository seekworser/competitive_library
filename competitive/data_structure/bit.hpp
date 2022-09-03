#ifndef COMPETITIVE_DATASTRUCTURE_BIT_HPP
#define COMPETITIVE_DATASTRUCTURE_BIT_HPP 1
#include <competitive/std/std.hpp>
template<class T> struct BIT {
    private:
        vector<T> bit;
        int _n;
    public:
        BIT(ll size):_n(size),bit(size+1, 0) {}

        void add(ll p, T x) {
            assert(0 <= p && p <= _n);
            p++;
            for (ll i = p; i <= _n; i += i & -i) {
                bit[i] += x;
            }
        }

        int sum_from_left(ll p) {
            p++;
            assert(0 <= p && p <= _n);
            int ret = 0;
            for (ll i = p; i > 0; i -= i & -i){
                ret += bit[i];
            }
            return ret;
        }
        int sum(ll ps, ll pt) {
            return sum_from_left(pt) - sum_from_left(ps-1);
        }
};
#endif //COMPETITIVE_DATASTRUCTURE_BIT_HPP