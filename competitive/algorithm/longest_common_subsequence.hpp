#ifndef COMPETITIVE_ALGORITHM_LCS_HPP
#define COMPETITIVE_ALGORITHM_LCS_HPP 1
#include <competitive/std/std.hpp>
// return index_of a for longest common subsequence
template <class T> vector<int> lcs(vector<T> const &a, vector<T> const &b) {
    int n = sz(a);
    int m = sz(b);
    if (n == 0 || m == 0) {
        vector<int> rev;
        return rev;
    }
    const int FROM_UPPER_LEFT = 1;
    const int FROM_UPPER = 2;
    const int FROM_LEFT = 3;
    vvi dp(n+1, vi(m+1, 0));
    vvi prev(n+1, vi(m+1, 0));
    repi(i, 1, n+1) repi(j, 1, m+1) {
        if (a[i-1] == b[j-1]) {
            if (chmax(dp[i][j], dp[i-1][j-1] + 1)) prev[i][j] = FROM_UPPER_LEFT;
        }
        if (chmax(dp[i][j], dp[i-1][j])) prev[i][j] = FROM_UPPER;
        if (chmax(dp[i][j], dp[i][j-1])) prev[i][j] = FROM_LEFT;
    }
    int ni = n;
    int mi = m;
    vector<int> rev(dp[n][m], 0);
    int pos = dp[n][m] - 1;
    while (pos >= 0) {
        if (prev[ni][mi] == FROM_UPPER_LEFT) {
            ni--, mi--;
            rev[pos] = ni;
            --pos;
        } else if (prev[ni][mi] == FROM_UPPER) {
            ni--;
        } else {
            mi--;
        }
    }
    return rev;
};
vector<int> lcs(string const &a, string const &b) {
    vector<char> _a(a.begin(), a.end());
    vector<char> _b(b.begin(), b.end());
    return lcs(_a, _b);
};
#endif // COMPETITIVE_ALGORITHM_LCS_HPP