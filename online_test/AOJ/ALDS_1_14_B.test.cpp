#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_14_B"
#include "competitive/std/std.hpp"
#include "competitive/string/rolling_hash.hpp"
#include "competitive/std/io.hpp"

int main() {
    string s, t;
    cin >> s >> t;
    int n = sz(s);
    int m = sz(t);
    RollingHash rhs(s, 4);
    RollingHash rht(t);
    auto th = rht.query(0, m);
    rep(i, n-m+1) {
        if (rht.query(0, m) == rhs.query(i, i+m)) print(i);
    }
}
