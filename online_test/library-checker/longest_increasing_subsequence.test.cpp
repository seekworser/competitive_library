#define PROBLEM "https://judge.yosupo.jp/problem/longest_increasing_subsequence"
#include "competitive/std/std.hpp"
#include "competitive/algorithm/longest_increasing_subsequence.hpp"
#include "competitive/std/io.hpp"
int main() {
    int n;
    cin >> n;
    vl a(n);
    cin >> a;
    vi lis_a = lis(a, true);
    cout << sz(lis_a) << endl;
    cout << lis_a << endl;
}
