#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/1/CGL_1_C"
#include <competitive/std/std.hpp>
#include <competitive/math/fraction.hpp>
#include <competitive/geometry/base.hpp>
#include <competitive/geometry/counter_clockwise.hpp>
#include <competitive/std/io.hpp>

int main() {
    using P = Point<Frac>;
    ll x, y;
    cin >> x >> y;
    P p1(x, y);
    cin >> x >> y;
    P p2(x, y);
    Segment<Frac> s(p1, p2);
    int q;
    cin >> q;
    rep(_, q) {
        cin >> x >> y;
        P p3(x, y);
        debug(s, p3);
        switch (ccw(s, p3)) {
        case COUNTER_CLOCKWISE:
            cout << "COUNTER_CLOCKWISE\n";
            break;
        case CLOCKWISE:
            cout << "CLOCKWISE\n";
            break;
        case ONLINE_BACK:
            cout << "ONLINE_BACK\n";
            break;
        case ONLINE_FRONT:
            cout << "ONLINE_FRONT\n";
            break;
        case ONSEGMENT:
            cout << "ON_SEGMENT\n";
            break;
        default:
            break;
        }
    }
}
