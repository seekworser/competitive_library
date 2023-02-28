#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/1/CGL_2_C"
#define ERROR 1e-6
#include "competitive/std/std.hpp"
#include "competitive/geometry/intersection.hpp"
#include "competitive/math/fraction.hpp"
#include "competitive/std/io.hpp"

int main() {
    using P = Point<Frac>;
    using S = Segment<Frac>;
    int q;
    cin >> q;
    rep(_, q) {
        ll x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        S s1(P(x1, y1), P(x2, y2));
        cin >> x1 >> y1 >> x2 >> y2;
        S s2(P(x1, y1), P(x2, y2));
        cout << cross_point(s1, s2) << endl;
    }
}
