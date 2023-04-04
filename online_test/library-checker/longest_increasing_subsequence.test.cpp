#define PROBLEM "https://judge.yosupo.jp/problem/longest_increasing_subsequence"
#include "competitive/std/std.hpp"
#include "competitive/algorithm/longest_increasing_subsequence.hpp"
#include "competitive/std/io.hpp"
int main() {
    int n;
    input(n);
    vl a(n);
    input(a);
    vi lis_a = lis(a, true);
    print(sz(lis_a));
    print(lis_a);
}
