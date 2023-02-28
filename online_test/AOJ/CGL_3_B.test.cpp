#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/3/CGL_3_B"
#include "competitive/std/std.hpp"
#include "competitive/math/fraction.hpp"
#include "competitive/geometry/polygon.hpp"
#include "competitive/std/io.hpp"

int main() {
    using P = Point<Frac>;
    int n; cin >> n;
    vector<P> points(n);
    rep(i, n) {
        ll x,y;
        cin >> x >> y;
        points[i] = P(x, y);
    }
    Polygon<Frac> poly(points);
    cout << is_convex(poly, false) << '\n';
}
