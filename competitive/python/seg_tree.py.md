---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: py
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.11.1/x64/lib/python3.11/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n          \
    \         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\
    \  File \"/opt/hostedtoolcache/Python/3.11.1/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/python.py\"\
    , line 96, in bundle\n    raise NotImplementedError\nNotImplementedError\n"
  code: "class SegTree:\n    \"\"\"\n    init(init_val, ide_ele): \u914D\u5217init_val\u3067\
    \u521D\u671F\u5316 O(N)\n    update(k, x): k\u756A\u76EE\u306E\u5024\u3092x\u306B\
    \u66F4\u65B0 O(logN)\n    query(l, r): \u533A\u9593[l, r)\u3092segfunc\u3057\u305F\
    \u3082\u306E\u3092\u8FD4\u3059 O(logN)\n    \"\"\"\n    def __init__(self, l:\
    \ list, f: callable=lambda x, y: x + y, identity: int=0):\n        \"\"\"\n  \
    \      l: \u914D\u5217\u306E\u521D\u671F\u5024\n        f: \u533A\u9593\u306B\u3057\
    \u305F\u3044\u64CD\u4F5C\n        e: \u5358\u4F4D\u5143\n        n: \u8981\u7D20\
    \u6570\n        num: n\u4EE5\u4E0A\u306E\u6700\u5C0F\u306E2\u306E\u3079\u304D\u4E57\
    \n        tree: \u30BB\u30B0\u30E1\u30F3\u30C8\u6728(1-index)\n        \"\"\"\n\
    \        n = len(l)\n        self.f = f\n        self.identity = identity\n  \
    \      self.num = 1 << (n - 1).bit_length()\n        self.tree = [self.identity]\
    \ * 2 * self.num\n        # \u914D\u5217\u306E\u5024\u3092\u8449\u306B\u30BB\u30C3\
    \u30C8\n        for i in range(n):\n            self.tree[self.num + i] = l[i]\n\
    \        # \u69CB\u7BC9\u3057\u3066\u3044\u304F\n        for i in range(self.num\
    \ - 1, 0, -1):\n            self.tree[i] = self.f(self.tree[2 * i], self.tree[2\
    \ * i + 1])\n\n    def update(self, k: int, x):\n        \"\"\"\n        k\u756A\
    \u76EE\u306E\u5024\u3092x\u306B\u66F4\u65B0\n        k: index(0-index)\n     \
    \   x: update value\n        \"\"\"\n        k += self.num\n        self.tree[k]\
    \ = x\n        while k > 1:\n            self.tree[k >> 1] = self.f(self.tree[k],\
    \ self.tree[k ^ 1])\n            k >>= 1\n\n    def query(self, l: int, r: int):\n\
    \        \"\"\"\n        [l, r)\u306Esegfunc\u3057\u305F\u3082\u306E\u3092\u5F97\
    \u308B\n        l: index(0-index)\n        r: index(0-index)\n        \"\"\"\n\
    \        res = self.identity\n\n        l += self.num\n        r += self.num\n\
    \        while l < r:\n            if l & 1:\n                res = self.f(res,\
    \ self.tree[l])\n                l += 1\n            if r & 1:\n             \
    \   res = self.f(res, self.tree[r - 1])\n            l >>= 1\n            r >>=\
    \ 1\n        return res\n\nst = SegTree(list(range(100)))\nprint(st.query(0, 100))"
  dependsOn: []
  isVerificationFile: false
  path: competitive/python/seg_tree.py
  requiredBy: []
  timestamp: '2023-02-16 23:48:21+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: competitive/python/seg_tree.py
layout: document
redirect_from:
- /library/competitive/python/seg_tree.py
- /library/competitive/python/seg_tree.py.html
title: competitive/python/seg_tree.py
---
