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
  bundledCode: "#line 1 \"competitive/helper/board_helper.hpp\"\n\n\n#include <competitive/std/std.hpp>\n\
    const vector<pii> DXY = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};\nconst vector<pii>\
    \ DDXY = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};\n\
    const vector<tuple<int, int, int>> DXYZ = {{-1, 0, 0}, {1, 0, 0}, {0, -1, 0},\
    \ {0, 1, 0}, {0, 0, -1}, {0, 0, 1}};\nclass BoardHelper{\n    private:\n    ll\
    \ oned_size;\n    vector<ll> mul_for_dim;\n\n    public:\n    int dimension;\n\
    \    vector<ll> board_size;\n\n    BoardHelper (vector<ll> bs) : mul_for_dim(bs.size()),\
    \ dimension(bs.size()), board_size(bs) {\n        mul_for_dim[dimension-1] = 1;\n\
    \        for (int i=dimension - 2; i >= 0; i--) {\n            mul_for_dim[i]\
    \ = mul_for_dim[i+1] * board_size[i+1];\n        }\n        oned_size = mul_for_dim[0]\
    \ * board_size[0];\n    }\n\n    template<typename... Arg> ll to_1d(Arg... ind)\
    \ {\n        int count = 0;\n        ll rev = 0;\n        for (ll i : initializer_list<ll>{ind...})\
    \ {\n            assert(count < dimension);\n            assert(0 <= i && i <\
    \ board_size[count]);\n            rev += i * mul_for_dim[count];\n          \
    \  count++;\n        }\n        assert(count == dimension);\n        return rev;\n\
    \    }\n    vector<ll> to_nd(ll ind) {\n        assert(0 <= ind && ind < oned_size);\n\
    \        vector<ll> rev;\n        for (int i=0; i<dimension; i++) {\n        \
    \    rev.push_back(ind / mul_for_dim[i]);\n            ind %= mul_for_dim[i];\n\
    \        }\n        return rev;\n    }\n    bool in_board(const vector<ll> &ind)\
    \ {\n        if (sz(ind) != dimension) return false;\n        bool rev = true;\n\
    \        for (int i=0; i<dimension; i++) {\n            if (ind[i] < 0 || board_size[i]\
    \ <= ind[i]) {\n                rev = false;\n                break;\n       \
    \     }\n        }\n        return rev;\n    }\n    template<typename... Arg>\
    \ bool in_board(Arg... ind) {\n        int count = 0;\n        for (ll i : initializer_list<ll>{ind...})\
    \ {\n            if (count >= dimension) return false;\n            if (i < 0\
    \ || board_size[count] <= i) {\n                return false;\n            }\n\
    \            count++;\n        }\n        return true;\n    }\n};\n\n"
  code: "#ifndef COMPETITIVE_HELPER_BOARD_HPP\n#define COMPETITIVE_HELPER_BOARD_HPP\
    \ 1\n#include <competitive/std/std.hpp>\nconst vector<pii> DXY = {{-1, 0}, {1,\
    \ 0}, {0, -1}, {0, 1}};\nconst vector<pii> DDXY = {{-1, -1}, {-1, 0}, {-1, 1},\
    \ {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};\nconst vector<tuple<int, int, int>>\
    \ DXYZ = {{-1, 0, 0}, {1, 0, 0}, {0, -1, 0}, {0, 1, 0}, {0, 0, -1}, {0, 0, 1}};\n\
    class BoardHelper{\n    private:\n    ll oned_size;\n    vector<ll> mul_for_dim;\n\
    \n    public:\n    int dimension;\n    vector<ll> board_size;\n\n    BoardHelper\
    \ (vector<ll> bs) : mul_for_dim(bs.size()), dimension(bs.size()), board_size(bs)\
    \ {\n        mul_for_dim[dimension-1] = 1;\n        for (int i=dimension - 2;\
    \ i >= 0; i--) {\n            mul_for_dim[i] = mul_for_dim[i+1] * board_size[i+1];\n\
    \        }\n        oned_size = mul_for_dim[0] * board_size[0];\n    }\n\n   \
    \ template<typename... Arg> ll to_1d(Arg... ind) {\n        int count = 0;\n \
    \       ll rev = 0;\n        for (ll i : initializer_list<ll>{ind...}) {\n   \
    \         assert(count < dimension);\n            assert(0 <= i && i < board_size[count]);\n\
    \            rev += i * mul_for_dim[count];\n            count++;\n        }\n\
    \        assert(count == dimension);\n        return rev;\n    }\n    vector<ll>\
    \ to_nd(ll ind) {\n        assert(0 <= ind && ind < oned_size);\n        vector<ll>\
    \ rev;\n        for (int i=0; i<dimension; i++) {\n            rev.push_back(ind\
    \ / mul_for_dim[i]);\n            ind %= mul_for_dim[i];\n        }\n        return\
    \ rev;\n    }\n    bool in_board(const vector<ll> &ind) {\n        if (sz(ind)\
    \ != dimension) return false;\n        bool rev = true;\n        for (int i=0;\
    \ i<dimension; i++) {\n            if (ind[i] < 0 || board_size[i] <= ind[i])\
    \ {\n                rev = false;\n                break;\n            }\n   \
    \     }\n        return rev;\n    }\n    template<typename... Arg> bool in_board(Arg...\
    \ ind) {\n        int count = 0;\n        for (ll i : initializer_list<ll>{ind...})\
    \ {\n            if (count >= dimension) return false;\n            if (i < 0\
    \ || board_size[count] <= i) {\n                return false;\n            }\n\
    \            count++;\n        }\n        return true;\n    }\n};\n#endif //COMPETITIVE_HELPER_BOARD_HPP"
  dependsOn:
  - competitive/std/std.hpp
  isVerificationFile: false
  path: competitive/helper/board_helper.hpp
  requiredBy: []
  timestamp: '2023-02-22 09:47:28+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: competitive/helper/board_helper.hpp
layout: document
redirect_from:
- /library/competitive/helper/board_helper.hpp
- /library/competitive/helper/board_helper.hpp.html
title: competitive/helper/board_helper.hpp
---
