---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: competitive/data_structure/bit.hpp
    title: competitive/data_structure/bit.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/std/std.hpp
    title: competitive/std/std.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"competitive/math/inversion_num.hpp\"\n\n\n#include <competitive/std/std.hpp>\n\
    #include <competitive/data_structure/bit.hpp>\ntemplate<class T> ll inversion_number(vector<T>\
    \ &a) {\n    ll ans = 0;\n    BIT<ll> b(a.size());\n    vector<T> sorted_a = a;\n\
    \    sort(all(sorted_a));\n    map<T, ll> ind_map;\n    rep(i, a.size()) ind_map[sorted_a[i]]\
    \ = i;\n    rep(i, a.size()) {\n        ans += i - b.sum_from_left(ind_map[a[i]]);\n\
    \        b.add(ind_map[a[i]], 1);\n    }\n    return ans;\n}\n\n"
  code: "#ifndef COMPETITIVE_MATH_INVERSIONNUM_HPP\n#define COMPETITIVE_MATH_INVERSIONNUM_HPP\
    \ 1\n#include <competitive/std/std.hpp>\n#include <competitive/data_structure/bit.hpp>\n\
    template<class T> ll inversion_number(vector<T> &a) {\n    ll ans = 0;\n    BIT<ll>\
    \ b(a.size());\n    vector<T> sorted_a = a;\n    sort(all(sorted_a));\n    map<T,\
    \ ll> ind_map;\n    rep(i, a.size()) ind_map[sorted_a[i]] = i;\n    rep(i, a.size())\
    \ {\n        ans += i - b.sum_from_left(ind_map[a[i]]);\n        b.add(ind_map[a[i]],\
    \ 1);\n    }\n    return ans;\n}\n#endif //COMPETITIVE_MATH_INVERSIONNUM_HPP"
  dependsOn:
  - competitive/std/std.hpp
  - competitive/data_structure/bit.hpp
  isVerificationFile: false
  path: competitive/math/inversion_num.hpp
  requiredBy: []
  timestamp: '2023-02-17 21:43:12+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: competitive/math/inversion_num.hpp
layout: document
redirect_from:
- /library/competitive/math/inversion_num.hpp
- /library/competitive/math/inversion_num.hpp.html
title: competitive/math/inversion_num.hpp
---
