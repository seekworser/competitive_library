#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/2/CGL_2_A"
#include <competitive/std/std.hpp>
#include <competitive/math/fraction.hpp>
#include <competitive/geometry/angle.hpp>
#include <competitive/std/io.hpp>

int main() {
    using P = Point<Frac>;
    using L = Line<Frac>;
    ll x1,y1,x2,y2;
    int q;
    cin >> q;
    rep(_, q) {
        cin >> x1 >> y1 >> x2 >> y2;
        L l1(P(x1, y1), P(x2, y2));
        cin >> x1 >> y1 >> x2 >> y2;
        L l2(P(x1, y1), P(x2, y2));
        if (is_parallel(l1, l2)) cout << 2 << '\n';
        else if (is_orthogonal(l1, l2)) cout << 1 << '\n';
        else cout << 0 << '\n';
    }
}
