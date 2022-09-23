#define PROBLEM "https://judge.yosupo.jp/problem/static_range_sum"
#include <competitive/std/std.hpp>
#include <competitive/data_structure/bit.hpp>
int main() {
    int n,q;
    cin >> n >> q;
    BIT<ll> b(n);
    rep(i, n) {
        ll x;
        cin >> x;
        b.add(i, x);
    }
    rep(i, q) {
        int l,r;
        cin >> l >> r;
        cout << b.sum(l, r) << "\n";
    }
}