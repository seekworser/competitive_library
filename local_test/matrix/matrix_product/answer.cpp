#include <competitive/std/std.hpp>
#include <competitive/matrix/matrix.hpp>
#include <competitive/std/io.hpp>
int main() {
    int n,m,p;
    cin >> n >> m >> p;
    Matrix<ll> a(n, m), b(m, p);
    rep(i, n) rep(j, m) cin >> a[i][j];
    rep(i, m) rep(j, p) cin >> b[i][j];
    cout << a * b << endl;
}