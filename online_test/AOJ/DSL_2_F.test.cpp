#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_F"
#include "competitive/std/std.hpp"
#include "competitive/data_structure/lazysegtree.hpp"
#include "competitive/std/io.hpp"
int main() {
    int n,q;
    input(n,q);
    lseg_min_rupdate<ll> lseg(vl(n, powm(2,31) - 1));
    rep(i, q) {
        int t;
        input(t);
        if (t == 0) {
            int s,t; ll x;
            input(s,t,x);
            lseg.apply(s, t+1, x);
        } else {
            int s,t;
            input(s,t);
            print(lseg.prod(s, t+1));
        }
    }
}
