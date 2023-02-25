---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: competitive/std/std.hpp
    title: competitive/std/std.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: Mo's algorithm
    links: []
  bundledCode: "#line 1 \"competitive/algorithm/mo.hpp\"\n\n\n#include <competitive/std/std.hpp>\n\
    template<typename Rev_t> struct Mo {\n    int range_min, range_max;\n    using\
    \ query_t = tuple<int, int, int>;\n    vector<query_t> query;\n    Mo() {};\n\
    \    Mo(const vector<pii>& lr) : range_min(INF), range_max(-INF) {\n        rep(i,\
    \ sz(lr)) {\n            assert(lr[i].first <= lr[i].second);\n            query.emplace_back(lr[i].first,\
    \ lr[i].second, i);\n            chmin((*this).range_min, lr[i].first);\n    \
    \        chmax((*this).range_max, lr[i].second);\n        }\n    }\n    Mo(const\
    \ vi& l, const vi& r) : range_min(INF), range_max(-INF) {\n        assert(sz(l)\
    \ == sz(r));\n        rep(i, sz(l)) {\n            assert(l[i] <= r[i]);\n   \
    \         query.emplace_back(l[i], r[i], i);\n            chmin((*this).range_min,\
    \ l[i]);\n            chmax((*this).range_max, r[i]);\n        }\n    }\n    void\
    \ add_query(int l, int r) {\n        (*this).query.emplace_back(l, r, sz((*this).query));\n\
    \    }\n    template<typename AL, typename AR, typename DL, typename DR, typename\
    \ GET>\n    vector<Rev_t> answer(\n        const AL& add_left,\n        const\
    \ AR& add_right,\n        const DL& delete_left,\n        const DR& delete_right,\n\
    \        const GET& get,\n        int init_l = 0,\n        int init_r = 0\n  \
    \  ) {\n        assert(range_max >= range_min);\n        int q = sz(query);\n\
    \        int range = range_max - range_min;\n        int width = max<int>(1, 1.0\
    \ * range / max<double>(1.0, sqrt(q * 2.0 / 3.0)));\n        sort(all((*this).query),\
    \ [&](query_t a, query_t b) {\n            auto [la, ra, ida] = a;\n         \
    \   auto [lb, rb, idb] = b;\n            int ablock = la / width, bblock = lb\
    \ / width;\n            if (ablock != bblock) return ablock < bblock;\n      \
    \      if (ablock & 1) return ra < rb;\n            return ra > rb;\n        });\n\
    \        vector<Rev_t> rev(q);\n        int cl(init_l), cr(init_r);\n        rep(i,\
    \ q) {\n            auto [l, r, id] = query[i];\n            while (cl > l) {\
    \ cl--; add_left(cl); }\n            while (cr < r) { add_right(cr); cr++;}\n\
    \            while (cl < l) { delete_left(cl); cl++; }\n            while (cr\
    \ > r) { cr--; delete_right(cr); }\n            rev[id] = get();\n        }\n\
    \        return rev;\n    };\n    template<typename A, typename D, typename GET>\n\
    \    vector<Rev_t> answer(\n        const A& add,\n        const D& del,\n   \
    \     const GET& get,\n        int init_l = 0,\n        int init_r = 0\n    )\
    \ {\n        return (*this).answer(add, add, del, del, get, init_l, init_r);\n\
    \    }\n};\n/**\n * @brief Mo's algorithm\n*/\n\n"
  code: "#ifndef COMPETITIVE_ALGORITHM_MO_HPP\n#define COMPETITIVE_ALGORITHM_MO_HPP\
    \ 1\n#include <competitive/std/std.hpp>\ntemplate<typename Rev_t> struct Mo {\n\
    \    int range_min, range_max;\n    using query_t = tuple<int, int, int>;\n  \
    \  vector<query_t> query;\n    Mo() {};\n    Mo(const vector<pii>& lr) : range_min(INF),\
    \ range_max(-INF) {\n        rep(i, sz(lr)) {\n            assert(lr[i].first\
    \ <= lr[i].second);\n            query.emplace_back(lr[i].first, lr[i].second,\
    \ i);\n            chmin((*this).range_min, lr[i].first);\n            chmax((*this).range_max,\
    \ lr[i].second);\n        }\n    }\n    Mo(const vi& l, const vi& r) : range_min(INF),\
    \ range_max(-INF) {\n        assert(sz(l) == sz(r));\n        rep(i, sz(l)) {\n\
    \            assert(l[i] <= r[i]);\n            query.emplace_back(l[i], r[i],\
    \ i);\n            chmin((*this).range_min, l[i]);\n            chmax((*this).range_max,\
    \ r[i]);\n        }\n    }\n    void add_query(int l, int r) {\n        (*this).query.emplace_back(l,\
    \ r, sz((*this).query));\n    }\n    template<typename AL, typename AR, typename\
    \ DL, typename DR, typename GET>\n    vector<Rev_t> answer(\n        const AL&\
    \ add_left,\n        const AR& add_right,\n        const DL& delete_left,\n  \
    \      const DR& delete_right,\n        const GET& get,\n        int init_l =\
    \ 0,\n        int init_r = 0\n    ) {\n        assert(range_max >= range_min);\n\
    \        int q = sz(query);\n        int range = range_max - range_min;\n    \
    \    int width = max<int>(1, 1.0 * range / max<double>(1.0, sqrt(q * 2.0 / 3.0)));\n\
    \        sort(all((*this).query), [&](query_t a, query_t b) {\n            auto\
    \ [la, ra, ida] = a;\n            auto [lb, rb, idb] = b;\n            int ablock\
    \ = la / width, bblock = lb / width;\n            if (ablock != bblock) return\
    \ ablock < bblock;\n            if (ablock & 1) return ra < rb;\n            return\
    \ ra > rb;\n        });\n        vector<Rev_t> rev(q);\n        int cl(init_l),\
    \ cr(init_r);\n        rep(i, q) {\n            auto [l, r, id] = query[i];\n\
    \            while (cl > l) { cl--; add_left(cl); }\n            while (cr < r)\
    \ { add_right(cr); cr++;}\n            while (cl < l) { delete_left(cl); cl++;\
    \ }\n            while (cr > r) { cr--; delete_right(cr); }\n            rev[id]\
    \ = get();\n        }\n        return rev;\n    };\n    template<typename A, typename\
    \ D, typename GET>\n    vector<Rev_t> answer(\n        const A& add,\n       \
    \ const D& del,\n        const GET& get,\n        int init_l = 0,\n        int\
    \ init_r = 0\n    ) {\n        return (*this).answer(add, add, del, del, get,\
    \ init_l, init_r);\n    }\n};\n/**\n * @brief Mo's algorithm\n*/\n#endif // COMPETITIVE_ALGORITHM_MO_HPP"
  dependsOn:
  - competitive/std/std.hpp
  isVerificationFile: false
  path: competitive/algorithm/mo.hpp
  requiredBy: []
  timestamp: '2023-02-26 03:11:42+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: competitive/algorithm/mo.hpp
layout: document
redirect_from:
- /library/competitive/algorithm/mo.hpp
- /library/competitive/algorithm/mo.hpp.html
title: Mo's algorithm
---
