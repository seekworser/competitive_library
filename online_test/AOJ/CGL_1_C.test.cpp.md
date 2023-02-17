---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: competitive/geometry/base.hpp
    title: "\u5E7E\u4F55\u30E9\u30A4\u30D6\u30E9\u30EA\u30D9\u30FC\u30B9\u30AF\u30E9\
      \u30B9"
  - icon: ':heavy_check_mark:'
    path: competitive/geometry/counter_clockwise.hpp
    title: competitive/geometry/counter_clockwise.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/math/fraction.hpp
    title: competitive/math/fraction.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/std/io.hpp
    title: competitive/std/io.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/std/std.hpp
    title: competitive/std/std.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/1/CGL_1_C
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/1/CGL_1_C
  bundledCode: "#line 1 \"online_test/AOJ/CGL_1_C.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/1/CGL_1_C\"\
    \n#include <competitive/std/std.hpp>\n#include <competitive/math/fraction.hpp>\n\
    #include <competitive/geometry/base.hpp>\n#include <competitive/geometry/counter_clockwise.hpp>\n\
    #include <competitive/std/io.hpp>\n\nint main() {\n    using P = Point<Frac>;\n\
    \    ll x, y;\n    cin >> x >> y;\n    P p1(x, y);\n    cin >> x >> y;\n    P\
    \ p2(x, y);\n    Segment<Frac> s(p1, p2);\n    int q;\n    cin >> q;\n    rep(_,\
    \ q) {\n        cin >> x >> y;\n        P p3(x, y);\n        debug(s, p3);\n \
    \       switch (ccw(s, p3)) {\n        case COUNTER_CLOCKWISE:\n            cout\
    \ << \"COUNTER_CLOCKWISE\\n\";\n            break;\n        case CLOCKWISE:\n\
    \            cout << \"CLOCKWISE\\n\";\n            break;\n        case ONLINE_BACK:\n\
    \            cout << \"ONLINE_BACK\\n\";\n            break;\n        case ONLINE_FRONT:\n\
    \            cout << \"ONLINE_FRONT\\n\";\n            break;\n        case ONSEGMENT:\n\
    \            cout << \"ON_SEGMENT\\n\";\n            break;\n        default:\n\
    \            break;\n        }\n    }\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/1/CGL_1_C\"\
    \n#include <competitive/std/std.hpp>\n#include <competitive/math/fraction.hpp>\n\
    #include <competitive/geometry/base.hpp>\n#include <competitive/geometry/counter_clockwise.hpp>\n\
    #include <competitive/std/io.hpp>\n\nint main() {\n    using P = Point<Frac>;\n\
    \    ll x, y;\n    cin >> x >> y;\n    P p1(x, y);\n    cin >> x >> y;\n    P\
    \ p2(x, y);\n    Segment<Frac> s(p1, p2);\n    int q;\n    cin >> q;\n    rep(_,\
    \ q) {\n        cin >> x >> y;\n        P p3(x, y);\n        debug(s, p3);\n \
    \       switch (ccw(s, p3)) {\n        case COUNTER_CLOCKWISE:\n            cout\
    \ << \"COUNTER_CLOCKWISE\\n\";\n            break;\n        case CLOCKWISE:\n\
    \            cout << \"CLOCKWISE\\n\";\n            break;\n        case ONLINE_BACK:\n\
    \            cout << \"ONLINE_BACK\\n\";\n            break;\n        case ONLINE_FRONT:\n\
    \            cout << \"ONLINE_FRONT\\n\";\n            break;\n        case ONSEGMENT:\n\
    \            cout << \"ON_SEGMENT\\n\";\n            break;\n        default:\n\
    \            break;\n        }\n    }\n}\n"
  dependsOn:
  - competitive/std/std.hpp
  - competitive/math/fraction.hpp
  - competitive/geometry/base.hpp
  - competitive/geometry/counter_clockwise.hpp
  - competitive/std/io.hpp
  isVerificationFile: true
  path: online_test/AOJ/CGL_1_C.test.cpp
  requiredBy: []
  timestamp: '2023-02-17 21:43:12+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: online_test/AOJ/CGL_1_C.test.cpp
layout: document
redirect_from:
- /verify/online_test/AOJ/CGL_1_C.test.cpp
- /verify/online_test/AOJ/CGL_1_C.test.cpp.html
title: online_test/AOJ/CGL_1_C.test.cpp
---
