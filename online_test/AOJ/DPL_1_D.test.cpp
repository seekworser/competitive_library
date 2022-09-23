#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_1_D"
#include <competitive/std/std.hpp>
#include <competitive/algorithm/longest_increasing_subsequence.hpp>
int main() {
    int n;
    cin >> n;
    vl a(n);
    cin >> a;
    int ans = lis(a);
    cout << ans << endl;
}