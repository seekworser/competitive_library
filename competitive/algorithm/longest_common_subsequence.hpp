#ifndef COMPETITIVE_ALGORITHM_LCS_HPP
#define COMPETITIVE_ALGORITHM_LCS_HPP 1
#include <competitive/std/std.hpp>
template <class T> int lcs(vector<T> const &a, vector<T> const &b) {
    int n = sz(a);
    int m = sz(b);
    if (n == 0 || m == 0) return 0;
    vvi dp(n+1, vi(m+1, 0));
    repi(i, 1, n+1) repi(j, 1, m+1) {
        if (a[i-1] == b[j-1]) {
            // debug(i, j);
            chmax(dp[i][j], dp[i-1][j-1] + 1);
        }
        chmax(dp[i][j], dp[i-1][j]);
        chmax(dp[i][j], dp[i][j-1]);
    }
    return dp[n][m];
};
#endif // COMPETITIVE_ALGORITHM_LCS_HPP