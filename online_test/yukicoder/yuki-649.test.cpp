#define PROBLEM "https://yukicoder.me/problems/no/649"
#include "competitive/std/std.hpp"
#include "competitive/helper/compress.hpp"
#include "competitive/data_structure/bit.hpp"
#include "competitive/std/io.hpp"
int main() {
    ll q,k;
    input(q,k);
    vector<pll> query(q);
    vl coordinates;
    rep(i, q) {
        ll t;
        input(t);
        ll x;
        if (t == 1) {
            input(x);
            coordinates.push_back(x);
        }
        query[i] = make_pair(t, x);
    }
    Compress<ll,ll> c(coordinates);
    Bit<ll> bit(sz(c));
    repe(q, query) {
        auto [t, x] = q;
        if (t == 1) {
            bit.set(c.pos(x), 1+bit.get(c.pos(x)));
        } else {
            if (bit.sum(sz(c)) < k) {
                print(-1);
                continue;
            }
            ll p = bit.lower_bound(k);
            print(c.key_at(p));
            bit.add(p, -1);
        }
    }
}
