#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/1/CGL_1_B"
#define ERROR 1e-6
#include <competitive/std/std.hpp>
#include <competitive/math/fraction.hpp>
#include <competitive/geometry/base.hpp>
#include <competitive/geometry/projection.hpp>
#include <competitive/std/io.hpp>
int main() {
    using P = Point<Frac>;
    using L = Line<Frac>;
    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    L l(P(x1, y1), P(x2, y2));
    int q;
    cin >> q;
    rep(_, q) {
        int x, y;
        cin >> x >> y;
        P ans = refrection(l, P(x, y));
        cout << ans << '\n';
    }
}
