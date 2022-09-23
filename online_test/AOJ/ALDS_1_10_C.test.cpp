#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_10_C"
#include <competitive/std/std.hpp>
#include <competitive/algorithm/longest_common_subsequence.hpp>
int main() {
    int n;
    cin >> n;
    rep(i, n) {
        string s,t;
        cin >> s >> t;
        vector<char> sv, tv;
        rep(i, sz(s)) sv.push_back(s[i]);
        rep(i, sz(t)) tv.push_back(t[i]);
        cout << lcs(sv, tv).size() << endl;
    }
}