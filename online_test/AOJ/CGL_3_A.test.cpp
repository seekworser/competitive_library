#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/3/CGL_3_A"
#include "competitive/std/std.hpp"
#include "competitive/geometry/polygon.hpp"
#include "competitive/std/io.hpp"

int main() {
    using P = Point<double>;
    vector<P> points;
    int n;
    cin >> n;
    rep(i, n) {
        double x, y;
        cin >> x >> y;
        points.emplace_back(x, y);
    }
    cout << setprecision(1) << Polygon<double>(points).area() << endl;
}
