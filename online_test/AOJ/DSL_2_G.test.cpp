#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_G"
#include "competitive/std/std.hpp"
#include "competitive/data_structure/lazysegtree.hpp"
#include "competitive/std/io.hpp"

int main() {
    int n,q;
    cin >> n >> q;
    lseg_add_radd<ll> lseg(n);
    debug(lseg);
    rep(i, q) {
        int t;
        cin >> t;
        if (t == 0) {
            int s,t; ll x;
            cin >> s >> t >> x;
            lseg.apply(s-1, t, x);
        } else {
            int s,t;
            cin >> s >> t;
            cout << lseg.prod(s-1, t) << '\n';
        }
        debug(lseg);
    }
}
