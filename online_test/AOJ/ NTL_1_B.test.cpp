#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_B"
#include "competitive/std/std.hpp"
#include "competitive/math/modint.hpp"
#include "competitive/std/io.hpp"
int main() {
    using mint = modint1000000007;
    mint m; ll n;
    input(m,n);
    print(pow(m, n));
}
