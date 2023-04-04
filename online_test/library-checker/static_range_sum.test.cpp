#define PROBLEM "https://judge.yosupo.jp/problem/static_range_sum"
#include "competitive/std/std.hpp"
#include "competitive/data_structure/bit.hpp"
#include "competitive/std/io.hpp"
int main() {
    int n,q;
    input(n, q);
    Bit<ll> b(n);
    rep(i, n) {
        ll x;
        input(x);
        b.add(i, x);
    }
    rep(i, q) {
        int l,r;
        input(l, r);
        print(b.sum(l, r));
    }
}