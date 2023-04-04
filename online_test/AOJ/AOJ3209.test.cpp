#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=3209"
#include "competitive/std/std.hpp"
#include "competitive/math/modint.hpp"
#include "competitive/std/io.hpp"
int main() {
    using mint = modint1000000007;
    while (true) {
        ll n;
        input(n);
        if (!n) return 0;
        mint a,b,c,d;
        input(a,b,c,d);
        mint p1 = (c + a) * (c - a + 1) / mint(2);
        mint p2 = (d + b) * (d - b + 1) / mint(2);
        print(p1 * p2);
    }
}
