---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: atcoder/internal_bit.hpp
    title: atcoder/internal_bit.hpp
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: competitive/data_structure/lazysegtree.hpp
    title: "\u9045\u5EF6\u30BB\u30B0\u30E1\u30F3\u30C8\u6728\uFF08\u30E9\u30C3\u30D1\
      \u30FC\uFF09"
  - icon: ':heavy_check_mark:'
    path: competitive/tree/heavy_light_decomposition.hpp
    title: "HL\u5206\u89E3 (Heavy Light Decomposition)"
  _extendedVerifiedWith:
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
    path: online_test/AOJ/GRL_5_C.test.cpp
    title: online_test/AOJ/GRL_5_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/library-checker/lca_hld.test.cpp
    title: online_test/library-checker/lca_hld.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/yukicoder/yuki-399.test.cpp
    title: online_test/yukicoder/yuki-399.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"atcoder/lazysegtree.hpp\"\n#include <algorithm>\n#include\
    \ <cassert>\n#include <iostream>\n#include <vector>\n\n#line 2 \"atcoder/internal_bit.hpp\"\
    \n#ifdef _MSC_VER\n#include <intrin.h>\n#endif\n\nnamespace atcoder {\n\nnamespace\
    \ internal {\n\n// @param n `0 <= n`\n// @return minimum non-negative `x` s.t.\
    \ `n <= 2**x`\nint ceil_pow2(int n) {\n    int x = 0;\n    while ((1U << x) <\
    \ (unsigned int)(n)) x++;\n    return x;\n}\n\n// @param n `1 <= n`\n// @return\
    \ minimum non-negative `x` s.t. `(n & (1 << x)) != 0`\nconstexpr int bsf_constexpr(unsigned\
    \ int n) {\n    int x = 0;\n    while (!(n & (1 << x))) x++;\n    return x;\n\
    }\n\n// @param n `1 <= n`\n// @return minimum non-negative `x` s.t. `(n & (1 <<\
    \ x)) != 0`\nint bsf(unsigned int n) {\n#ifdef _MSC_VER\n    unsigned long index;\n\
    \    _BitScanForward(&index, n);\n    return index;\n#else\n    return __builtin_ctz(n);\n\
    #endif\n}\n\n}  // namespace internal\n\n}  // namespace atcoder\n#line 8 \"atcoder/lazysegtree.hpp\"\
    \n\nnamespace atcoder {\n\ntemplate <class S,\n          S (*_op)(S, S),\n   \
    \       S (*_e)(),\n          class F,\n          S (*_mapping)(F, S),\n     \
    \     F (*_composition)(F, F),\n          F (*_id)()>\nstruct lazy_segtree {\n\
    \  public:\n    S (*op)(S, S) = _op;\n    S (*e)() = _e;\n    S (*mapping)(F,\
    \ S) = _mapping;\n    F (*composition)(F, F) = _composition;\n    F (*id)() =\
    \ _id;\n    lazy_segtree() : lazy_segtree(0) {}\n    explicit lazy_segtree(int\
    \ n) : lazy_segtree(std::vector<S>(n, _e())) {}\n    explicit lazy_segtree(const\
    \ std::vector<S>& v) : _n(int(v.size())) {\n        log = internal::ceil_pow2(_n);\n\
    \        size = 1 << log;\n        d = std::vector<S>(2 * size, e());\n      \
    \  lz = std::vector<F>(size, id());\n        for (int i = 0; i < _n; i++) d[size\
    \ + i] = v[i];\n        for (int i = size - 1; i >= 1; i--) {\n            update(i);\n\
    \        }\n    }\n\n    void set(int p, S x) {\n        assert(0 <= p && p <\
    \ _n);\n        p += size;\n        for (int i = log; i >= 1; i--) push(p >> i);\n\
    \        d[p] = x;\n        for (int i = 1; i <= log; i++) update(p >> i);\n \
    \   }\n\n    void add(int p, S x) {\n        assert(0 <= p && p < _n);\n     \
    \   (*this).set(p, (*this).get(p) + x);\n    }\n\n    S get(int p) {\n       \
    \ assert(0 <= p && p < _n);\n        p += size;\n        for (int i = log; i >=\
    \ 1; i--) push(p >> i);\n        return d[p];\n    }\n\n    S prod(int l, int\
    \ r) {\n        assert(0 <= l && l <= r && r <= _n);\n        if (l == r) return\
    \ e();\n\n        l += size;\n        r += size;\n\n        for (int i = log;\
    \ i >= 1; i--) {\n            if (((l >> i) << i) != l) push(l >> i);\n      \
    \      if (((r >> i) << i) != r) push((r - 1) >> i);\n        }\n\n        S sml\
    \ = e(), smr = e();\n        while (l < r) {\n            if (l & 1) sml = op(sml,\
    \ d[l++]);\n            if (r & 1) smr = op(d[--r], smr);\n            l >>= 1;\n\
    \            r >>= 1;\n        }\n\n        return op(sml, smr);\n    }\n\n  \
    \  S all_prod() { return d[1]; }\n\n    void apply(int p, F f) {\n        assert(0\
    \ <= p && p < _n);\n        p += size;\n        for (int i = log; i >= 1; i--)\
    \ push(p >> i);\n        d[p] = mapping(f, d[p]);\n        for (int i = 1; i <=\
    \ log; i++) update(p >> i);\n    }\n    void apply(int l, int r, F f) {\n    \
    \    assert(0 <= l && l <= r && r <= _n);\n        if (l == r) return;\n\n   \
    \     l += size;\n        r += size;\n\n        for (int i = log; i >= 1; i--)\
    \ {\n            if (((l >> i) << i) != l) push(l >> i);\n            if (((r\
    \ >> i) << i) != r) push((r - 1) >> i);\n        }\n\n        {\n            int\
    \ l2 = l, r2 = r;\n            while (l < r) {\n                if (l & 1) all_apply(l++,\
    \ f);\n                if (r & 1) all_apply(--r, f);\n                l >>= 1;\n\
    \                r >>= 1;\n            }\n            l = l2;\n            r =\
    \ r2;\n        }\n\n        for (int i = 1; i <= log; i++) {\n            if (((l\
    \ >> i) << i) != l) update(l >> i);\n            if (((r >> i) << i) != r) update((r\
    \ - 1) >> i);\n        }\n    }\n\n    template <bool (*g)(S)> int max_right(int\
    \ l) {\n        return max_right(l, [](S x) { return g(x); });\n    }\n    template\
    \ <class G> int max_right(int l, G g) {\n        assert(0 <= l && l <= _n);\n\
    \        assert(g(e()));\n        if (l == _n) return _n;\n        l += size;\n\
    \        for (int i = log; i >= 1; i--) push(l >> i);\n        S sm = e();\n \
    \       do {\n            while (l % 2 == 0) l >>= 1;\n            if (!g(op(sm,\
    \ d[l]))) {\n                while (l < size) {\n                    push(l);\n\
    \                    l = (2 * l);\n                    if (g(op(sm, d[l]))) {\n\
    \                        sm = op(sm, d[l]);\n                        l++;\n  \
    \                  }\n                }\n                return l - size;\n  \
    \          }\n            sm = op(sm, d[l]);\n            l++;\n        } while\
    \ ((l & -l) != l);\n        return _n;\n    }\n\n    template <bool (*g)(S)> int\
    \ min_left(int r) {\n        return min_left(r, [](S x) { return g(x); });\n \
    \   }\n    template <class G> int min_left(int r, G g) {\n        assert(0 <=\
    \ r && r <= _n);\n        assert(g(e()));\n        if (r == 0) return 0;\n   \
    \     r += size;\n        for (int i = log; i >= 1; i--) push((r - 1) >> i);\n\
    \        S sm = e();\n        do {\n            r--;\n            while (r > 1\
    \ && (r % 2)) r >>= 1;\n            if (!g(op(d[r], sm))) {\n                while\
    \ (r < size) {\n                    push(r);\n                    r = (2 * r +\
    \ 1);\n                    if (g(op(d[r], sm))) {\n                        sm\
    \ = op(d[r], sm);\n                        r--;\n                    }\n     \
    \           }\n                return r + 1 - size;\n            }\n         \
    \   sm = op(d[r], sm);\n        } while ((r & -r) != r);\n        return 0;\n\
    \    }\n\n    int n() {return (*this)._n;}\n\n  private:\n    int _n, size, log;\n\
    \    std::vector<S> d;\n    std::vector<F> lz;\n\n    void update(int k) { d[k]\
    \ = op(d[2 * k], d[2 * k + 1]); }\n    void all_apply(int k, F f) {\n        d[k]\
    \ = mapping(f, d[k]);\n        if (k < size) lz[k] = composition(f, lz[k]);\n\
    \    }\n    void push(int k) {\n        all_apply(2 * k, lz[k]);\n        all_apply(2\
    \ * k + 1, lz[k]);\n        lz[k] = id();\n    }\n};\n\n}  // namespace atcoder\n"
  code: "#pragma once\n#include <algorithm>\n#include <cassert>\n#include <iostream>\n\
    #include <vector>\n\n#include \"atcoder/internal_bit.hpp\"\n\nnamespace atcoder\
    \ {\n\ntemplate <class S,\n          S (*_op)(S, S),\n          S (*_e)(),\n \
    \         class F,\n          S (*_mapping)(F, S),\n          F (*_composition)(F,\
    \ F),\n          F (*_id)()>\nstruct lazy_segtree {\n  public:\n    S (*op)(S,\
    \ S) = _op;\n    S (*e)() = _e;\n    S (*mapping)(F, S) = _mapping;\n    F (*composition)(F,\
    \ F) = _composition;\n    F (*id)() = _id;\n    lazy_segtree() : lazy_segtree(0)\
    \ {}\n    explicit lazy_segtree(int n) : lazy_segtree(std::vector<S>(n, _e()))\
    \ {}\n    explicit lazy_segtree(const std::vector<S>& v) : _n(int(v.size())) {\n\
    \        log = internal::ceil_pow2(_n);\n        size = 1 << log;\n        d =\
    \ std::vector<S>(2 * size, e());\n        lz = std::vector<F>(size, id());\n \
    \       for (int i = 0; i < _n; i++) d[size + i] = v[i];\n        for (int i =\
    \ size - 1; i >= 1; i--) {\n            update(i);\n        }\n    }\n\n    void\
    \ set(int p, S x) {\n        assert(0 <= p && p < _n);\n        p += size;\n \
    \       for (int i = log; i >= 1; i--) push(p >> i);\n        d[p] = x;\n    \
    \    for (int i = 1; i <= log; i++) update(p >> i);\n    }\n\n    void add(int\
    \ p, S x) {\n        assert(0 <= p && p < _n);\n        (*this).set(p, (*this).get(p)\
    \ + x);\n    }\n\n    S get(int p) {\n        assert(0 <= p && p < _n);\n    \
    \    p += size;\n        for (int i = log; i >= 1; i--) push(p >> i);\n      \
    \  return d[p];\n    }\n\n    S prod(int l, int r) {\n        assert(0 <= l &&\
    \ l <= r && r <= _n);\n        if (l == r) return e();\n\n        l += size;\n\
    \        r += size;\n\n        for (int i = log; i >= 1; i--) {\n            if\
    \ (((l >> i) << i) != l) push(l >> i);\n            if (((r >> i) << i) != r)\
    \ push((r - 1) >> i);\n        }\n\n        S sml = e(), smr = e();\n        while\
    \ (l < r) {\n            if (l & 1) sml = op(sml, d[l++]);\n            if (r\
    \ & 1) smr = op(d[--r], smr);\n            l >>= 1;\n            r >>= 1;\n  \
    \      }\n\n        return op(sml, smr);\n    }\n\n    S all_prod() { return d[1];\
    \ }\n\n    void apply(int p, F f) {\n        assert(0 <= p && p < _n);\n     \
    \   p += size;\n        for (int i = log; i >= 1; i--) push(p >> i);\n       \
    \ d[p] = mapping(f, d[p]);\n        for (int i = 1; i <= log; i++) update(p >>\
    \ i);\n    }\n    void apply(int l, int r, F f) {\n        assert(0 <= l && l\
    \ <= r && r <= _n);\n        if (l == r) return;\n\n        l += size;\n     \
    \   r += size;\n\n        for (int i = log; i >= 1; i--) {\n            if (((l\
    \ >> i) << i) != l) push(l >> i);\n            if (((r >> i) << i) != r) push((r\
    \ - 1) >> i);\n        }\n\n        {\n            int l2 = l, r2 = r;\n     \
    \       while (l < r) {\n                if (l & 1) all_apply(l++, f);\n     \
    \           if (r & 1) all_apply(--r, f);\n                l >>= 1;\n        \
    \        r >>= 1;\n            }\n            l = l2;\n            r = r2;\n \
    \       }\n\n        for (int i = 1; i <= log; i++) {\n            if (((l >>\
    \ i) << i) != l) update(l >> i);\n            if (((r >> i) << i) != r) update((r\
    \ - 1) >> i);\n        }\n    }\n\n    template <bool (*g)(S)> int max_right(int\
    \ l) {\n        return max_right(l, [](S x) { return g(x); });\n    }\n    template\
    \ <class G> int max_right(int l, G g) {\n        assert(0 <= l && l <= _n);\n\
    \        assert(g(e()));\n        if (l == _n) return _n;\n        l += size;\n\
    \        for (int i = log; i >= 1; i--) push(l >> i);\n        S sm = e();\n \
    \       do {\n            while (l % 2 == 0) l >>= 1;\n            if (!g(op(sm,\
    \ d[l]))) {\n                while (l < size) {\n                    push(l);\n\
    \                    l = (2 * l);\n                    if (g(op(sm, d[l]))) {\n\
    \                        sm = op(sm, d[l]);\n                        l++;\n  \
    \                  }\n                }\n                return l - size;\n  \
    \          }\n            sm = op(sm, d[l]);\n            l++;\n        } while\
    \ ((l & -l) != l);\n        return _n;\n    }\n\n    template <bool (*g)(S)> int\
    \ min_left(int r) {\n        return min_left(r, [](S x) { return g(x); });\n \
    \   }\n    template <class G> int min_left(int r, G g) {\n        assert(0 <=\
    \ r && r <= _n);\n        assert(g(e()));\n        if (r == 0) return 0;\n   \
    \     r += size;\n        for (int i = log; i >= 1; i--) push((r - 1) >> i);\n\
    \        S sm = e();\n        do {\n            r--;\n            while (r > 1\
    \ && (r % 2)) r >>= 1;\n            if (!g(op(d[r], sm))) {\n                while\
    \ (r < size) {\n                    push(r);\n                    r = (2 * r +\
    \ 1);\n                    if (g(op(d[r], sm))) {\n                        sm\
    \ = op(d[r], sm);\n                        r--;\n                    }\n     \
    \           }\n                return r + 1 - size;\n            }\n         \
    \   sm = op(d[r], sm);\n        } while ((r & -r) != r);\n        return 0;\n\
    \    }\n\n    int n() {return (*this)._n;}\n\n  private:\n    int _n, size, log;\n\
    \    std::vector<S> d;\n    std::vector<F> lz;\n\n    void update(int k) { d[k]\
    \ = op(d[2 * k], d[2 * k + 1]); }\n    void all_apply(int k, F f) {\n        d[k]\
    \ = mapping(f, d[k]);\n        if (k < size) lz[k] = composition(f, lz[k]);\n\
    \    }\n    void push(int k) {\n        all_apply(2 * k, lz[k]);\n        all_apply(2\
    \ * k + 1, lz[k]);\n        lz[k] = id();\n    }\n};\n\n}  // namespace atcoder\n"
  dependsOn:
  - atcoder/internal_bit.hpp
  isVerificationFile: false
  path: atcoder/lazysegtree.hpp
  requiredBy:
  - competitive/tree/heavy_light_decomposition.hpp
  - competitive/data_structure/lazysegtree.hpp
  timestamp: '2023-04-11 04:33:35+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - online_test/AOJ/DSL_2_H.test.cpp
  - online_test/AOJ/GRL_5_C.test.cpp
  - online_test/AOJ/DSL_2_G.test.cpp
  - online_test/AOJ/DSL_2_F.test.cpp
  - online_test/AOJ/DSL_2_I.test.cpp
  - online_test/yukicoder/yuki-399.test.cpp
  - online_test/library-checker/lca_hld.test.cpp
documentation_of: atcoder/lazysegtree.hpp
layout: document
redirect_from:
- /library/atcoder/lazysegtree.hpp
- /library/atcoder/lazysegtree.hpp.html
title: atcoder/lazysegtree.hpp
---
