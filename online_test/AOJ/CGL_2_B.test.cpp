#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/2/CGL_2_B"
#include "competitive/std/std.hpp"
#include "competitive/geometry/intersection.hpp"
#include "competitive/math/fraction.hpp"
#include "competitive/std/io.hpp"

int main() {
    using P = Point<Frac>;
    using S = Segment<Frac>;
    ll x1, y1, x2, y2;
    int q;
    cin >> q;
    rep(_, q) {
        cin >> x1 >> y1 >> x2 >> y2;
        S s1(P(x1, y1), P(x2, y2));
        cin >> x1 >> y1 >> x2 >> y2;
        S s2(P(x1, y1), P(x2, y2));
        if (intersect(s1, s2)) cout << 1 << '\n';
        else cout << 0 << '\n';
    }
}
