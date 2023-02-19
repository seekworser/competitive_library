#ifndef COMPETITIVE_ALGORITHM_MO_HPP
#define COMPETITIVE_ALGORITHM_MO_HPP 1
#include <competitive/std/std.hpp>
template<typename Rev_t> struct Mo {
    int range_min, range_max;
    using query_t = tuple<int, int, int>;
    vector<query_t> query;
    Mo() {};
    Mo(const vector<pii>& lr) : range_min(INF), range_max(-INF) {
        rep(i, sz(lr)) {
            assert(lr[i].first <= lr[i].second);
            query.emplace_back(lr[i].first, lr[i].second, i);
            chmin((*this).range_min, lr[i].first);
            chmax((*this).range_max, lr[i].second);
        }
    }
    Mo(const vi& l, const vi& r) : range_min(INF), range_max(-INF) {
        assert(sz(l) == sz(r));
        rep(i, sz(l)) {
            assert(l[i] <= r[i]);
            query.emplace_back(l[i], r[i], i);
            chmin((*this).range_min, l[i]);
            chmax((*this).range_max, r[i]);
        }
    }
    void add_query(int l, int r) {
        (*this).query.emplace_back(l, r, sz((*this).query));
    }
    template<typename AL, typename AR, typename DL, typename DR, typename GET>
    vector<Rev_t> answer(
        const AL& add_left,
        const AR& add_right,
        const DL& delete_left,
        const DR& delete_right,
        const GET& get,
        int init_l = 0,
        int init_r = 0
    ) {
        assert(range_max >= range_min);
        int q = sz(query);
        int range = range_max - range_min;
        int width = max<int>(1, 1.0 * range / max<double>(1.0, sqrt(q * 2.0 / 3.0)));
        sort(all((*this).query), [&](query_t a, query_t b) {
            auto [la, ra, ida] = a;
            auto [lb, rb, idb] = b;
            int ablock = la / width, bblock = lb / width;
            if (ablock != bblock) return ablock < bblock;
            if (ablock & 1) return ra < rb;
            return ra > rb;
        });
        vector<Rev_t> rev(q);
        int cl(init_l), cr(init_r);
        rep(i, q) {
            auto [l, r, id] = query[i];
            while (cl > l) { cl--; add_left(cl); }
            while (cr < r) { add_right(cr); cr++;}
            while (cl < l) { delete_left(cl); cl++; }
            while (cr > r) { cr--; delete_right(cr); }
            rev[id] = get();
        }
        return rev;
    };
    template<typename A, typename D, typename GET>
    vector<Rev_t> answer(
        const A& add,
        const D& del,
        const GET& get,
        int init_l = 0,
        int init_r = 0
    ) {
        return (*this).answer(add, add, del, del, get, init_l, init_r);
    }
};
/**
 * @brief Mo's algorithm
*/
#endif // COMPETITIVE_ALGORITHM_MO_HPP