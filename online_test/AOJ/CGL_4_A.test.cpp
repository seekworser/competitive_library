#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/3/CGL_4_A"
#include "competitive/std/std.hpp"
#include "competitive/geometry/polygon.hpp"
#include "competitive/std/io.hpp"

int main() {
    int n;
    cin >> n;
    using P = Point<ll>;
    vector<P> points;
    rep(i, n) {
        ll x, y;
        cin >> x >> y;
        points.emplace_back(x, y);
    }
    Polygon<ll> p = convex_full(points, false);
    cout << sz(p.vertex) << endl;
    int pos = 0;
    pll cur = {p.vertex[0].y, p.vertex[0].x};
    rep(i, sz(p.vertex)) {
        if (chmin(cur, pll(p.vertex[i].y, p.vertex[i].x))) pos = i;
    }
    rep(i, sz(p.vertex)) {
        cout << p.vertex[pos] << endl;
        pos++;
        pos %= sz(p.vertex);
    }
}
