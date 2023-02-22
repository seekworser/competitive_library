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
  bundledCode: "#line 1 \"competitive/algorithm/minimum_excludant.hpp\"\n\n\n#include\
    \ <competitive/std/std.hpp>\n// return index_of a for longest common subsequence\n\
    template <class T> struct Mex {\nprivate:\n    set<pair<T, T>> s;\n\npublic:\n\
    \    Mex(T inf=INF) {\n        s.emplace(-inf, -inf);\n        s.emplace(inf,\
    \ inf);\n    }\n\n    bool contains(T x) const {\n        auto it = prev(s.lower_bound(make_pair(x+1,\
    \ x+1)));\n        auto [l, u] = *it;\n        return l <= x && x <= u;\n    }\n\
    \n    bool insert(T x) {\n        auto nit = s.lower_bound(make_pair(x+1, x+1));\n\
    \        auto it = prev(nit);\n        auto [l, u] = *it;\n        auto [nl, nu]\
    \ = *nit;\n        if (l <= x && x <= u) return false;\n        if (u == x-1)\
    \ {\n            if (nl == x+1) {\n                s.erase(it);\n            \
    \    s.erase(nit);\n                s.emplace(l, nu);\n            } else {\n\
    \                s.erase(it);\n                s.emplace(l, x);\n            }\n\
    \        } else {\n            if (nl == x+1) {\n                s.erase(nit);\n\
    \                s.emplace(x, nu);\n            } else {\n                s.emplace(x,\
    \ x);\n            }\n        }\n        return true;\n    }\n\n    bool erase(T\
    \ x) {\n        auto nit = s.lower_bound(make_pair(x+1, x+1));\n        auto it\
    \ = prev(nit);\n        auto [l, u] = *it;\n        if (x < l || u < x) return\
    \ false;\n        if (l == x) {\n            if (u == x) {\n                s.erase(it);\n\
    \            } else {\n                s.erase(it);\n                s.emplace(l+1,\
    \ u);\n            }\n            return true;\n        }\n        if (u == x)\
    \ {\n            s.erase(it);\n            s.emplace(l, u-1);\n            return\
    \ true;\n        }\n        s.erase(it);\n        s.emplace(l, x-1);\n       \
    \ s.emplace(x+1, u);\n        return true;\n    }\n\n    T mex(T x = 0) const\
    \ {\n        auto [l, u] = *prev(s.lower_bound(make_pair(x+1, x+1)));\n      \
    \  if (l <= x && x <= u) {\n            return u+1;\n        } else {\n      \
    \      return x;\n        }\n    }\n};\n\n"
  code: "#ifndef COMPETITIVE_ALGORITHM_MEX_HPP\n#define COMPETITIVE_ALGORITHM_MEX_HPP\
    \ 1\n#include <competitive/std/std.hpp>\n// return index_of a for longest common\
    \ subsequence\ntemplate <class T> struct Mex {\nprivate:\n    set<pair<T, T>>\
    \ s;\n\npublic:\n    Mex(T inf=INF) {\n        s.emplace(-inf, -inf);\n      \
    \  s.emplace(inf, inf);\n    }\n\n    bool contains(T x) const {\n        auto\
    \ it = prev(s.lower_bound(make_pair(x+1, x+1)));\n        auto [l, u] = *it;\n\
    \        return l <= x && x <= u;\n    }\n\n    bool insert(T x) {\n        auto\
    \ nit = s.lower_bound(make_pair(x+1, x+1));\n        auto it = prev(nit);\n  \
    \      auto [l, u] = *it;\n        auto [nl, nu] = *nit;\n        if (l <= x &&\
    \ x <= u) return false;\n        if (u == x-1) {\n            if (nl == x+1) {\n\
    \                s.erase(it);\n                s.erase(nit);\n               \
    \ s.emplace(l, nu);\n            } else {\n                s.erase(it);\n    \
    \            s.emplace(l, x);\n            }\n        } else {\n            if\
    \ (nl == x+1) {\n                s.erase(nit);\n                s.emplace(x, nu);\n\
    \            } else {\n                s.emplace(x, x);\n            }\n     \
    \   }\n        return true;\n    }\n\n    bool erase(T x) {\n        auto nit\
    \ = s.lower_bound(make_pair(x+1, x+1));\n        auto it = prev(nit);\n      \
    \  auto [l, u] = *it;\n        if (x < l || u < x) return false;\n        if (l\
    \ == x) {\n            if (u == x) {\n                s.erase(it);\n         \
    \   } else {\n                s.erase(it);\n                s.emplace(l+1, u);\n\
    \            }\n            return true;\n        }\n        if (u == x) {\n \
    \           s.erase(it);\n            s.emplace(l, u-1);\n            return true;\n\
    \        }\n        s.erase(it);\n        s.emplace(l, x-1);\n        s.emplace(x+1,\
    \ u);\n        return true;\n    }\n\n    T mex(T x = 0) const {\n        auto\
    \ [l, u] = *prev(s.lower_bound(make_pair(x+1, x+1)));\n        if (l <= x && x\
    \ <= u) {\n            return u+1;\n        } else {\n            return x;\n\
    \        }\n    }\n};\n#endif // COMPETITIVE_ALGORITHM_MEX_HPP"
  dependsOn:
  - competitive/std/std.hpp
  isVerificationFile: false
  path: competitive/algorithm/minimum_excludant.hpp
  requiredBy: []
  timestamp: '2023-02-22 09:47:28+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: competitive/algorithm/minimum_excludant.hpp
layout: document
redirect_from:
- /library/competitive/algorithm/minimum_excludant.hpp
- /library/competitive/algorithm/minimum_excludant.hpp.html
title: competitive/algorithm/minimum_excludant.hpp
---
