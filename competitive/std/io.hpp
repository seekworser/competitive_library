#pragma once
#include "competitive/std/std.hpp"
// 演算子オーバーロード（プロトタイプ宣言）
template <class T, class U> inline istream& operator>>(istream& is, pair<T, U>& p);
template <class T> inline istream& operator>>(istream& is, vector<T>& v);
template <class T, class U> inline ostream& operator<<(ostream& os, const pair<T, U>& p);
template <class T> inline ostream& operator<<(ostream& os, const vector<T>& v);
template <typename T, typename S> ostream &operator<<(ostream &os, const map<T, S> &mp);
template <typename T> ostream &operator<<(ostream &os, const set<T> &st);
template <typename T> ostream &operator<<(ostream &os, const multiset<T> &st);
template <typename T> ostream &operator<<(ostream &os, const unordered_set<T> &st);
template <typename T> ostream &operator<<(ostream &os, queue<T> q);
template <typename T> ostream &operator<<(ostream &os, deque<T> q);
template <typename T> ostream &operator<<(ostream &os, stack<T> st);
template <class T, class Container, class Compare> ostream &operator<<(ostream &os, priority_queue<T, Container, Compare> pq);

// 演算子オーバーロード
template <class T, class U> inline istream& operator>>(istream& is, pair<T, U>& p) { is >> p.first >> p.second; return is; }
template <class T> inline istream& operator>>(istream& is, vector<T>& v) { repe(x, v) is >> x; return is; }
template <class T, class U> inline ostream& operator<<(ostream& os, const pair<T, U>& p) { os << p.first << " " << p.second; return os; }
template <class T> inline ostream& operator<<(ostream& os, const vector<T>& v) { rep(i, sz(v)) { os << v.at(i); if (i != sz(v) - 1) os << " "; } return os; }
template <typename T, typename S> ostream &operator<<(ostream &os, const map<T, S> &mp) { for (auto &[key, val] : mp) { os << key << ":" << val << " "; } return os; }
template <typename T> ostream &operator<<(ostream &os, const set<T> &st) { auto itr = st.begin(); for (int i = 0; i < (int)st.size(); i++) { os << *itr << (i + 1 != (int)st.size() ? " " : ""); itr++; } return os; }
template <typename T> ostream &operator<<(ostream &os, const multiset<T> &st) { auto itr = st.begin(); for (int i = 0; i < (int)st.size(); i++) { os << *itr << (i + 1 != (int)st.size() ? " " : ""); itr++; } return os; }
template <typename T> ostream &operator<<(ostream &os, const unordered_set<T> &st) { ll cnt = 0; for (auto &e : st) { os << e << (++cnt != (int)st.size() ? " " : ""); } return os; }
template <typename T> ostream &operator<<(ostream &os, queue<T> q) { while (q.size()) { os << q.front() << " "; q.pop(); } return os; }
template <typename T> ostream &operator<<(ostream &os, deque<T> q) { while (q.size()) { os << q.front() << " "; q.pop_front(); } return os; }
template <typename T> ostream &operator<<(ostream &os, stack<T> st) { while (st.size()) { os << st.top() << " "; st.pop(); } return os; }
template <class T, class Container, class Compare> ostream &operator<<(ostream &os, priority_queue<T, Container, Compare> pq) { while (pq.size()) { os << pq.top() << " "; pq.pop(); } return os; }

template <typename T> void print_sep_end(string sep, string end, const T& val) { (void)sep; cout << val << end; };
template <typename T1, typename... T2> void print_sep_end(string sep, string end, const T1 &val, const T2 &...remain) {
    cout << val << sep;
    print_sep_end(sep, end, remain...);
};
template <typename... T> void print(const T &...args) { print_sep_end(" ", "\n", args...); };
template <typename... T> void flush() { cout << flush; };
template <typename... T> void print_and_flush(const T &...args) { print(args...); flush(); };
#define debug(...) debug_func(0, #__VA_ARGS__, __VA_ARGS__) // debug print
template <typename T> void input(T &a) { cin >> a; };
template <typename T1, typename... T2> void input(T1&a, T2 &...b) { cin >> a; input(b...); };
#ifdef LOCAL_TEST
template <typename T> void debug_func(int i, const T name) { (void)i; (void)name; cerr << endl; }
template <typename T1, typename T2, typename... T3> void debug_func(int i, const T1 &name, const T2 &a, const T3 &...b) {
    int scope = 0;
    for ( ; (scope != 0 || name[i] != ',') && name[i] != '\0'; i++ ) {
        cerr << name[i];
        if (name[i] == '(' || name[i] == '{') scope++;
        if (name[i] == ')' || name[i] == '}') scope--;
    }
    cerr << ":" << a << " ";
    debug_func(i + 1, name, b...);
}
template <typename T1, typename T2, typename... T3> void debug_func(int i, const T1 &name, T2 &a, T3 &...b) {
    int scope = 0;
    for ( ; (scope != 0 || name[i] != ',') && name[i] != '\0'; i++ ) {
        cerr << name[i];
        if (name[i] == '(' || name[i] == '{') scope++;
        if (name[i] == ')' || name[i] == '}') scope--;
    }
    cerr << ":" << a << " ";
    debug_func(i + 1, name, b...);
}
#endif
#ifndef LOCAL_TEST
template <typename... T>
void debug_func(T &...) {}
template <typename... T>
void debug_func(const T &...) {}
#endif
/**
 * @brief io.hpp
 * @docs docs/std/io.md
 */
