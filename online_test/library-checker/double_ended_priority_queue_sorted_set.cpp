#define PROBLEM "https://judge.yosupo.jp/problem/double_ended_priority_queue"
#include "competitive/std/std.hpp"
#include "competitive/data_structure/sorted_set.hpp"
#include "competitive/std/io.hpp"
int main() {
    ll n,q;
    input(n,q);
    vl a(n);
    input(a);
    SortedMultiSet<ll> s(a);
    rep(q) {
        ll t;
        input(t);
        if (t == 0) {
            ll x;
            input(x);
            s.insert(x);
        } else if (t == 1) {
            print(s[0]);
            s.erase(*s.begin());
        } else {
            print(*--s.end());
            ll ans = s[sz(s)-1];
            s.erase(ans);
        }
    }
}