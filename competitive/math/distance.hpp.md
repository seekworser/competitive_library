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
    links: []
  bundledCode: "#line 1 \"competitive/math/distance.hpp\"\n\n\n#include <competitive/std/std.hpp>\n\
    template<class T> T dist(T s, T t) {\n    return std::abs(s - t);\n};\ntemplate<class\
    \ T> double euclid(pair<T, T> s, pair<T, T> t) {\n    auto square = [](T a) {return\
    \ a*a;};\n    return sqrt(square(s.first - t.first) + square(s.second - t.second));\n\
    };\ntemplate<class T> double euclid(tuple<T, T, T> s, tuple<T, T, T> t) {\n  \
    \  auto [s1, s2, s3] = s;\n    auto [t1, t2, t3] = t;\n    auto square = [](T\
    \ a) {return a*a;};\n    return sqrt(square(s1 - t1) + square(s2 - t2) + square(s3\
    \ - t3));\n};\ntemplate<class T> T euclid_square(pair<T, T> s, pair<T, T> t) {\n\
    \    auto square = [](T a) {return a*a;};\n    return square(s.first - t.first)\
    \ + square(s.second - t.second);\n};\ntemplate<class T> T euclid_square(tuple<T,\
    \ T, T> s, tuple<T, T, T> t) {\n    auto [s1, s2, s3] = s;\n    auto [t1, t2,\
    \ t3] = t;\n    auto square = [](T a) {return a*a;};\n    return square(s1 - t1)\
    \ + square(s2 - t2) + square(s3 - t3);\n};\ntemplate<class T> T manhattan(pair<T,\
    \ T> s, pair<T, T> t) {\n    return abs(s.first - t.first) + abs(s.second - t.second);\n\
    };\n\n"
  code: "#ifndef COMPETITIVE_MATH_DISTANCE_HPP\n#define COMPETITIVE_MATH_DISTANCE_HPP\
    \ 1\n#include <competitive/std/std.hpp>\ntemplate<class T> T dist(T s, T t) {\n\
    \    return std::abs(s - t);\n};\ntemplate<class T> double euclid(pair<T, T> s,\
    \ pair<T, T> t) {\n    auto square = [](T a) {return a*a;};\n    return sqrt(square(s.first\
    \ - t.first) + square(s.second - t.second));\n};\ntemplate<class T> double euclid(tuple<T,\
    \ T, T> s, tuple<T, T, T> t) {\n    auto [s1, s2, s3] = s;\n    auto [t1, t2,\
    \ t3] = t;\n    auto square = [](T a) {return a*a;};\n    return sqrt(square(s1\
    \ - t1) + square(s2 - t2) + square(s3 - t3));\n};\ntemplate<class T> T euclid_square(pair<T,\
    \ T> s, pair<T, T> t) {\n    auto square = [](T a) {return a*a;};\n    return\
    \ square(s.first - t.first) + square(s.second - t.second);\n};\ntemplate<class\
    \ T> T euclid_square(tuple<T, T, T> s, tuple<T, T, T> t) {\n    auto [s1, s2,\
    \ s3] = s;\n    auto [t1, t2, t3] = t;\n    auto square = [](T a) {return a*a;};\n\
    \    return square(s1 - t1) + square(s2 - t2) + square(s3 - t3);\n};\ntemplate<class\
    \ T> T manhattan(pair<T, T> s, pair<T, T> t) {\n    return abs(s.first - t.first)\
    \ + abs(s.second - t.second);\n};\n#endif // COMPETITIVE_MATH_DISTANCE_HPP"
  dependsOn:
  - competitive/std/std.hpp
  isVerificationFile: false
  path: competitive/math/distance.hpp
  requiredBy: []
  timestamp: '2023-02-14 09:29:01+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: competitive/math/distance.hpp
layout: document
redirect_from:
- /library/competitive/math/distance.hpp
- /library/competitive/math/distance.hpp.html
title: competitive/math/distance.hpp
---
