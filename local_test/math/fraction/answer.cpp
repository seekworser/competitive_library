#include "competitive/std/std.hpp"
#include "competitive/math/fraction.hpp"
#include "competitive/std/io.hpp"
int main() {
    int n,m,s,t;
    cin >> n >> m >> s >> t;
    Frac f1(n, m);
    Frac f2(s, t);
    cout << f1 + f2 << endl;
    cout << f1 - f2 << endl;
    cout << f1 * f2 << endl;
    cout << f1 / f2 << endl;
}