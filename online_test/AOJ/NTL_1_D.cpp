#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_D"
#include <competitive/std/std.hpp>
#include <competitive/math/euler_phi.hpp>
#include <competitive/std/io.hpp>
int main() {
    ll n;
    cin >> n;
    cout << euler_phi(n) << endl;
}
