#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_F"
#include <competitive/std/std.hpp>
#include <competitive/data_structure/lazysegtree.hpp>
#include <competitive/std/io.hpp>

int main() {
    int n,q;
    cin >> n >> q;
    lseg_min_rupdate<ll> lseg(n);
    lseg.apply(0, n, powm(2, 31) - 1);
    debug(lseg);
    rep(i, q) {
        int t;
        cin >> t;
        if (t == 0) {
            int s,t; ll x;
            cin >> s >> t >> x;
            lseg.apply(s, t+1, x);
        } else {
            int s,t;
            cin >> s >> t;
            cout << lseg.prod(s, t+1) << '\n';
        }
        debug(lseg);
    }
}
