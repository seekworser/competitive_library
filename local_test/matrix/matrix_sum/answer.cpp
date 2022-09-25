#include <competitive/std/std.hpp>
#include <competitive/matrix/matrix.hpp>
int main() {
    int n, m;
    cin >> n >> m;
    Matrix<ll> a(n, m), b(n, m);
    rep(i, n) rep(j, m) cin >> a[i][j];
    rep(i, n) rep(j, m) cin >> b[i][j];
    cout << a + b << endl;
}