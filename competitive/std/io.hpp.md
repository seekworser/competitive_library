---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: competitive/std/std.hpp
    title: competitive/std/std.hpp
  _extendedRequiredBy:
  - icon: ':warning:'
    path: online_test/AOJ/NTL_1_D.cpp
    title: online_test/AOJ/NTL_1_D.cpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/ALDS_1_10_C.test.cpp
    title: online_test/AOJ/ALDS_1_10_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/CGL_1_A.test.cpp
    title: online_test/AOJ/CGL_1_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/CGL_1_B.test.cpp
    title: online_test/AOJ/CGL_1_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/CGL_1_C.test.cpp
    title: online_test/AOJ/CGL_1_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/CGL_2_A.test.cpp
    title: online_test/AOJ/CGL_2_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/CGL_2_B.test.cpp
    title: online_test/AOJ/CGL_2_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/CGL_2_C.test.cpp
    title: online_test/AOJ/CGL_2_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/CGL_2_D.test.cpp
    title: online_test/AOJ/CGL_2_D.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/CGL_3_A.test.cpp
    title: online_test/AOJ/CGL_3_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/CGL_3_B.test.cpp
    title: online_test/AOJ/CGL_3_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/CGL_4_A.test.cpp
    title: online_test/AOJ/CGL_4_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/DPL_1_D.test.cpp
    title: online_test/AOJ/DPL_1_D.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/DSL_2_F.test.cpp
    title: online_test/AOJ/DSL_2_F.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/DSL_2_G.test.cpp
    title: online_test/AOJ/DSL_2_G.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/DSL_2_H.test.cpp
    title: online_test/AOJ/DSL_2_H.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/DSL_2_I.test.cpp
    title: online_test/AOJ/DSL_2_I.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/GRL_1_A.test.cpp
    title: online_test/AOJ/GRL_1_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/GRL_1_C.test.cpp
    title: online_test/AOJ/GRL_1_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/ITPI_1_A.test.cpp
    title: online_test/AOJ/ITPI_1_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/library-checker/aplusb.test.cpp
    title: online_test/library-checker/aplusb.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/library-checker/longest_increasing_subsequence.test.cpp
    title: online_test/library-checker/longest_increasing_subsequence.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/library-checker/shortest_path_dijkstra.test.cpp
    title: online_test/library-checker/shortest_path_dijkstra.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/library-checker/shortest_path_fast_dijkstra.test.cpp
    title: online_test/library-checker/shortest_path_fast_dijkstra.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/library-checker/static_range_sum.test.cpp
    title: online_test/library-checker/static_range_sum.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/yukicoder/yuki-hello-world.test.cpp
    title: online_test/yukicoder/yuki-hello-world.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"competitive/std/io.hpp\"\n\n\n#include <competitive/std/std.hpp>\n\
    // \u6F14\u7B97\u5B50\u30AA\u30FC\u30D0\u30FC\u30ED\u30FC\u30C9\uFF08\u30D7\u30ED\
    \u30C8\u30BF\u30A4\u30D7\u5BA3\u8A00\uFF09\ntemplate <class T, class U> inline\
    \ istream& operator>>(istream& is, pair<T, U>& p);\ntemplate <class T> inline\
    \ istream& operator>>(istream& is, vector<T>& v);\ntemplate <class T, class U>\
    \ inline ostream& operator<<(ostream& os, const pair<T, U>& p);\ntemplate <class\
    \ T> inline ostream& operator<<(ostream& os, const vector<T>& v);\ntemplate <typename\
    \ T, typename S> ostream &operator<<(ostream &os, const map<T, S> &mp);\ntemplate\
    \ <typename T> ostream &operator<<(ostream &os, const set<T> &st);\ntemplate <typename\
    \ T> ostream &operator<<(ostream &os, const multiset<T> &st);\ntemplate <typename\
    \ T> ostream &operator<<(ostream &os, queue<T> q);\ntemplate <typename T> ostream\
    \ &operator<<(ostream &os, deque<T> q);\ntemplate <typename T> ostream &operator<<(ostream\
    \ &os, stack<T> st);\ntemplate <class T, class Container, class Compare> ostream\
    \ &operator<<(ostream &os, priority_queue<T, Container, Compare> pq);\n\n// \u6F14\
    \u7B97\u5B50\u30AA\u30FC\u30D0\u30FC\u30ED\u30FC\u30C9\ntemplate <class T, class\
    \ U> inline istream& operator>>(istream& is, pair<T, U>& p) { is >> p.first >>\
    \ p.second; return is; }\ntemplate <class T> inline istream& operator>>(istream&\
    \ is, vector<T>& v) { repe(x, v) is >> x; return is; }\ntemplate <class T, class\
    \ U> inline ostream& operator<<(ostream& os, const pair<T, U>& p) { os << p.first\
    \ << \" \" << p.second; return os; }\ntemplate <class T> inline ostream& operator<<(ostream&\
    \ os, const vector<T>& v) { rep(i, sz(v)) { os << v.at(i); if (i != sz(v) - 1)\
    \ os << \" \"; } return os; }\ntemplate <typename T, typename S> ostream &operator<<(ostream\
    \ &os, const map<T, S> &mp) { for (auto &[key, val] : mp) { os << key << \":\"\
    \ << val << \" \"; } return os; }\ntemplate <typename T> ostream &operator<<(ostream\
    \ &os, const set<T> &st) { auto itr = st.begin(); for (int i = 0; i < (int)st.size();\
    \ i++) { os << *itr << (i + 1 != (int)st.size() ? \" \" : \"\"); itr++; } return\
    \ os; }\ntemplate <typename T> ostream &operator<<(ostream &os, const multiset<T>\
    \ &st) { auto itr = st.begin(); for (int i = 0; i < (int)st.size(); i++) { os\
    \ << *itr << (i + 1 != (int)st.size() ? \" \" : \"\"); itr++; } return os; }\n\
    template <typename T> ostream &operator<<(ostream &os, queue<T> q) { while (q.size())\
    \ { os << q.front() << \" \"; q.pop(); } return os; }\ntemplate <typename T> ostream\
    \ &operator<<(ostream &os, deque<T> q) { while (q.size()) { os << q.front() <<\
    \ \" \"; q.pop_front(); } return os; }\ntemplate <typename T> ostream &operator<<(ostream\
    \ &os, stack<T> st) { while (st.size()) { os << st.top() << \" \"; st.pop(); }\
    \ return os; }\ntemplate <class T, class Container, class Compare> ostream &operator<<(ostream\
    \ &os, priority_queue<T, Container, Compare> pq) { while (pq.size()) { os << pq.top()\
    \ << \" \"; pq.pop(); } return os; }\ntemplate <class T> inline vector<T>& operator--(vector<T>&\
    \ v) { repe(x, v) --x; return v; }\ntemplate <class T> inline vector<T>& operator++(vector<T>&\
    \ v) { repe(x, v) ++x; return v; }\n\ntemplate <typename T> void print_sep_end(string\
    \ sep, string end, const T& val) { (void)sep; cout << val << end; };\ntemplate\
    \ <typename T1, typename... T2> void print_sep_end(string sep, string end, const\
    \ T1 &val, const T2 &...remain) {\n    cout << val << sep;\n    print_sep_end(sep,\
    \ end, remain...);\n};\ntemplate <typename... T> void print(const T&...args) {print_sep_end(\"\
    \ \", \"\\n\", args...);};\n#define debug(...) debug_func(0, #__VA_ARGS__, __VA_ARGS__)\
    \ // debug print\n#ifdef LOCAL_TEST\ntemplate <typename T>\nvoid debug_func(int\
    \ i, T name) { (void)i; (void)name; cerr << endl; }\ntemplate <typename T1, typename\
    \ T2, typename... T3> void debug_func(int i, const T1 &name, const T2 &a, const\
    \ T3 &...b) {\n    for ( ; name[i] != ',' && name[i] != '\\0'; i++ ) cerr << name[i];\n\
    \    cerr << \":\" << a << \" \";\n    debug_func(i + 1, name, b...);\n}\n#endif\n\
    #ifndef LOCAL_TEST\ntemplate <typename... T>\nvoid debug_func(const T &...) {}\n\
    #endif\n\n"
  code: "#ifndef COMPETITIVE_STD_IO_HPP\n#define COMPETITIVE_STD_IO_HPP 1\n#include\
    \ <competitive/std/std.hpp>\n// \u6F14\u7B97\u5B50\u30AA\u30FC\u30D0\u30FC\u30ED\
    \u30FC\u30C9\uFF08\u30D7\u30ED\u30C8\u30BF\u30A4\u30D7\u5BA3\u8A00\uFF09\ntemplate\
    \ <class T, class U> inline istream& operator>>(istream& is, pair<T, U>& p);\n\
    template <class T> inline istream& operator>>(istream& is, vector<T>& v);\ntemplate\
    \ <class T, class U> inline ostream& operator<<(ostream& os, const pair<T, U>&\
    \ p);\ntemplate <class T> inline ostream& operator<<(ostream& os, const vector<T>&\
    \ v);\ntemplate <typename T, typename S> ostream &operator<<(ostream &os, const\
    \ map<T, S> &mp);\ntemplate <typename T> ostream &operator<<(ostream &os, const\
    \ set<T> &st);\ntemplate <typename T> ostream &operator<<(ostream &os, const multiset<T>\
    \ &st);\ntemplate <typename T> ostream &operator<<(ostream &os, queue<T> q);\n\
    template <typename T> ostream &operator<<(ostream &os, deque<T> q);\ntemplate\
    \ <typename T> ostream &operator<<(ostream &os, stack<T> st);\ntemplate <class\
    \ T, class Container, class Compare> ostream &operator<<(ostream &os, priority_queue<T,\
    \ Container, Compare> pq);\n\n// \u6F14\u7B97\u5B50\u30AA\u30FC\u30D0\u30FC\u30ED\
    \u30FC\u30C9\ntemplate <class T, class U> inline istream& operator>>(istream&\
    \ is, pair<T, U>& p) { is >> p.first >> p.second; return is; }\ntemplate <class\
    \ T> inline istream& operator>>(istream& is, vector<T>& v) { repe(x, v) is >>\
    \ x; return is; }\ntemplate <class T, class U> inline ostream& operator<<(ostream&\
    \ os, const pair<T, U>& p) { os << p.first << \" \" << p.second; return os; }\n\
    template <class T> inline ostream& operator<<(ostream& os, const vector<T>& v)\
    \ { rep(i, sz(v)) { os << v.at(i); if (i != sz(v) - 1) os << \" \"; } return os;\
    \ }\ntemplate <typename T, typename S> ostream &operator<<(ostream &os, const\
    \ map<T, S> &mp) { for (auto &[key, val] : mp) { os << key << \":\" << val <<\
    \ \" \"; } return os; }\ntemplate <typename T> ostream &operator<<(ostream &os,\
    \ const set<T> &st) { auto itr = st.begin(); for (int i = 0; i < (int)st.size();\
    \ i++) { os << *itr << (i + 1 != (int)st.size() ? \" \" : \"\"); itr++; } return\
    \ os; }\ntemplate <typename T> ostream &operator<<(ostream &os, const multiset<T>\
    \ &st) { auto itr = st.begin(); for (int i = 0; i < (int)st.size(); i++) { os\
    \ << *itr << (i + 1 != (int)st.size() ? \" \" : \"\"); itr++; } return os; }\n\
    template <typename T> ostream &operator<<(ostream &os, queue<T> q) { while (q.size())\
    \ { os << q.front() << \" \"; q.pop(); } return os; }\ntemplate <typename T> ostream\
    \ &operator<<(ostream &os, deque<T> q) { while (q.size()) { os << q.front() <<\
    \ \" \"; q.pop_front(); } return os; }\ntemplate <typename T> ostream &operator<<(ostream\
    \ &os, stack<T> st) { while (st.size()) { os << st.top() << \" \"; st.pop(); }\
    \ return os; }\ntemplate <class T, class Container, class Compare> ostream &operator<<(ostream\
    \ &os, priority_queue<T, Container, Compare> pq) { while (pq.size()) { os << pq.top()\
    \ << \" \"; pq.pop(); } return os; }\ntemplate <class T> inline vector<T>& operator--(vector<T>&\
    \ v) { repe(x, v) --x; return v; }\ntemplate <class T> inline vector<T>& operator++(vector<T>&\
    \ v) { repe(x, v) ++x; return v; }\n\ntemplate <typename T> void print_sep_end(string\
    \ sep, string end, const T& val) { (void)sep; cout << val << end; };\ntemplate\
    \ <typename T1, typename... T2> void print_sep_end(string sep, string end, const\
    \ T1 &val, const T2 &...remain) {\n    cout << val << sep;\n    print_sep_end(sep,\
    \ end, remain...);\n};\ntemplate <typename... T> void print(const T&...args) {print_sep_end(\"\
    \ \", \"\\n\", args...);};\n#define debug(...) debug_func(0, #__VA_ARGS__, __VA_ARGS__)\
    \ // debug print\n#ifdef LOCAL_TEST\ntemplate <typename T>\nvoid debug_func(int\
    \ i, T name) { (void)i; (void)name; cerr << endl; }\ntemplate <typename T1, typename\
    \ T2, typename... T3> void debug_func(int i, const T1 &name, const T2 &a, const\
    \ T3 &...b) {\n    for ( ; name[i] != ',' && name[i] != '\\0'; i++ ) cerr << name[i];\n\
    \    cerr << \":\" << a << \" \";\n    debug_func(i + 1, name, b...);\n}\n#endif\n\
    #ifndef LOCAL_TEST\ntemplate <typename... T>\nvoid debug_func(const T &...) {}\n\
    #endif\n#endif // COMPETITIVE_STD_IO_HPP\n"
  dependsOn:
  - competitive/std/std.hpp
  isVerificationFile: false
  path: competitive/std/io.hpp
  requiredBy:
  - online_test/AOJ/NTL_1_D.cpp
  timestamp: '2023-02-22 09:47:28+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - online_test/yukicoder/yuki-hello-world.test.cpp
  - online_test/library-checker/shortest_path_dijkstra.test.cpp
  - online_test/library-checker/static_range_sum.test.cpp
  - online_test/library-checker/shortest_path_fast_dijkstra.test.cpp
  - online_test/library-checker/longest_increasing_subsequence.test.cpp
  - online_test/library-checker/aplusb.test.cpp
  - online_test/AOJ/CGL_2_C.test.cpp
  - online_test/AOJ/CGL_2_B.test.cpp
  - online_test/AOJ/ALDS_1_10_C.test.cpp
  - online_test/AOJ/CGL_1_A.test.cpp
  - online_test/AOJ/CGL_2_A.test.cpp
  - online_test/AOJ/CGL_1_B.test.cpp
  - online_test/AOJ/DSL_2_I.test.cpp
  - online_test/AOJ/CGL_1_C.test.cpp
  - online_test/AOJ/GRL_1_A.test.cpp
  - online_test/AOJ/ITPI_1_A.test.cpp
  - online_test/AOJ/CGL_3_B.test.cpp
  - online_test/AOJ/DPL_1_D.test.cpp
  - online_test/AOJ/DSL_2_G.test.cpp
  - online_test/AOJ/GRL_1_C.test.cpp
  - online_test/AOJ/CGL_4_A.test.cpp
  - online_test/AOJ/DSL_2_F.test.cpp
  - online_test/AOJ/DSL_2_H.test.cpp
  - online_test/AOJ/CGL_3_A.test.cpp
  - online_test/AOJ/CGL_2_D.test.cpp
documentation_of: competitive/std/io.hpp
layout: document
redirect_from:
- /library/competitive/std/io.hpp
- /library/competitive/std/io.hpp.html
title: competitive/std/io.hpp
---
