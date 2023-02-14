#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/1/CGL_2_D"
#define ERROR 1e-6
#include <competitive/std/std.hpp>
#include <competitive/geometry/distance.hpp>
#include <competitive/std/io.hpp>

int main() {
    using P = Point<double>;
    using S = Segment<double>;
    int q;
    cin >> q;
    while (q--) {
        double x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        S s1(P(x1, y1), P(x2, y2));
        cin >> x1 >> y1 >> x2 >> y2;
        S s2(P(x1, y1), P(x2, y2));
        debug(s1, s2);
        cout << distance(s1, s2) << '\n';
    }
}
