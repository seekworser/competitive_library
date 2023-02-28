---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: atcoder/internal_bit.hpp
    title: atcoder/internal_bit.hpp
  - icon: ':warning:'
    path: atcoder/internal_math.hpp
    title: atcoder/internal_math.hpp
  - icon: ':warning:'
    path: atcoder/internal_type_traits.hpp
    title: atcoder/internal_type_traits.hpp
  - icon: ':warning:'
    path: atcoder/modint.hpp
    title: atcoder/modint.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.11.2/x64/lib/python3.11/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n          \
    \         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\
    \  File \"/opt/hostedtoolcache/Python/3.11.2/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.11.2/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 312, in update\n    raise BundleErrorAt(path, i + 1, \"#pragma once found\
    \ in a non-first line\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ atcoder/convolution.hpp: line 3: #pragma once found in a non-first line\n"
  code: "// #ifndef ATCODER_CONVOLUTION_HPP\n// #define ATCODER_CONVOLUTION_HPP 1\n\
    #pragma once\n\n#include <algorithm>\n#include <array>\n#include <cassert>\n#include\
    \ <type_traits>\n#include <vector>\n\n#include \"atcoder/internal_bit.hpp\"\n\
    #include \"atcoder/modint.hpp\"\n\nnamespace atcoder {\n\nnamespace internal {\n\
    \ntemplate <class mint,\n          int g = internal::primitive_root<mint::mod()>,\n\
    \          internal::is_static_modint_t<mint>* = nullptr>\nstruct fft_info {\n\
    \    static constexpr int rank2 = bsf_constexpr(mint::mod() - 1);\n    std::array<mint,\
    \ rank2 + 1> root;   // root[i]^(2^i) == 1\n    std::array<mint, rank2 + 1> iroot;\
    \  // root[i] * iroot[i] == 1\n\n    std::array<mint, std::max(0, rank2 - 2 +\
    \ 1)> rate2;\n    std::array<mint, std::max(0, rank2 - 2 + 1)> irate2;\n\n   \
    \ std::array<mint, std::max(0, rank2 - 3 + 1)> rate3;\n    std::array<mint, std::max(0,\
    \ rank2 - 3 + 1)> irate3;\n\n    fft_info() {\n        root[rank2] = mint(g).pow((mint::mod()\
    \ - 1) >> rank2);\n        iroot[rank2] = root[rank2].inv();\n        for (int\
    \ i = rank2 - 1; i >= 0; i--) {\n            root[i] = root[i + 1] * root[i +\
    \ 1];\n            iroot[i] = iroot[i + 1] * iroot[i + 1];\n        }\n\n    \
    \    {\n            mint prod = 1, iprod = 1;\n            for (int i = 0; i <=\
    \ rank2 - 2; i++) {\n                rate2[i] = root[i + 2] * prod;\n        \
    \        irate2[i] = iroot[i + 2] * iprod;\n                prod *= iroot[i +\
    \ 2];\n                iprod *= root[i + 2];\n            }\n        }\n     \
    \   {\n            mint prod = 1, iprod = 1;\n            for (int i = 0; i <=\
    \ rank2 - 3; i++) {\n                rate3[i] = root[i + 3] * prod;\n        \
    \        irate3[i] = iroot[i + 3] * iprod;\n                prod *= iroot[i +\
    \ 3];\n                iprod *= root[i + 3];\n            }\n        }\n    }\n\
    };\n\ntemplate <class mint, internal::is_static_modint_t<mint>* = nullptr>\nvoid\
    \ butterfly(std::vector<mint>& a) {\n    int n = int(a.size());\n    int h = internal::ceil_pow2(n);\n\
    \n    static const fft_info<mint> info;\n\n    int len = 0;  // a[i, i+(n>>len),\
    \ i+2*(n>>len), ..] is transformed\n    while (len < h) {\n        if (h - len\
    \ == 1) {\n            int p = 1 << (h - len - 1);\n            mint rot = 1;\n\
    \            for (int s = 0; s < (1 << len); s++) {\n                int offset\
    \ = s << (h - len);\n                for (int i = 0; i < p; i++) {\n         \
    \           auto l = a[i + offset];\n                    auto r = a[i + offset\
    \ + p] * rot;\n                    a[i + offset] = l + r;\n                  \
    \  a[i + offset + p] = l - r;\n                }\n                if (s + 1 !=\
    \ (1 << len))\n                    rot *= info.rate2[bsf(~(unsigned int)(s))];\n\
    \            }\n            len++;\n        } else {\n            // 4-base\n\
    \            int p = 1 << (h - len - 2);\n            mint rot = 1, imag = info.root[2];\n\
    \            for (int s = 0; s < (1 << len); s++) {\n                mint rot2\
    \ = rot * rot;\n                mint rot3 = rot2 * rot;\n                int offset\
    \ = s << (h - len);\n                for (int i = 0; i < p; i++) {\n         \
    \           auto mod2 = 1ULL * mint::mod() * mint::mod();\n                  \
    \  auto a0 = 1ULL * a[i + offset].val();\n                    auto a1 = 1ULL *\
    \ a[i + offset + p].val() * rot.val();\n                    auto a2 = 1ULL * a[i\
    \ + offset + 2 * p].val() * rot2.val();\n                    auto a3 = 1ULL *\
    \ a[i + offset + 3 * p].val() * rot3.val();\n                    auto a1na3imag\
    \ =\n                        1ULL * mint(a1 + mod2 - a3).val() * imag.val();\n\
    \                    auto na2 = mod2 - a2;\n                    a[i + offset]\
    \ = a0 + a2 + a1 + a3;\n                    a[i + offset + 1 * p] = a0 + a2 +\
    \ (2 * mod2 - (a1 + a3));\n                    a[i + offset + 2 * p] = a0 + na2\
    \ + a1na3imag;\n                    a[i + offset + 3 * p] = a0 + na2 + (mod2 -\
    \ a1na3imag);\n                }\n                if (s + 1 != (1 << len))\n \
    \                   rot *= info.rate3[bsf(~(unsigned int)(s))];\n            }\n\
    \            len += 2;\n        }\n    }\n}\n\ntemplate <class mint, internal::is_static_modint_t<mint>*\
    \ = nullptr>\nvoid butterfly_inv(std::vector<mint>& a) {\n    int n = int(a.size());\n\
    \    int h = internal::ceil_pow2(n);\n\n    static const fft_info<mint> info;\n\
    \n    int len = h;  // a[i, i+(n>>len), i+2*(n>>len), ..] is transformed\n   \
    \ while (len) {\n        if (len == 1) {\n            int p = 1 << (h - len);\n\
    \            mint irot = 1;\n            for (int s = 0; s < (1 << (len - 1));\
    \ s++) {\n                int offset = s << (h - len + 1);\n                for\
    \ (int i = 0; i < p; i++) {\n                    auto l = a[i + offset];\n   \
    \                 auto r = a[i + offset + p];\n                    a[i + offset]\
    \ = l + r;\n                    a[i + offset + p] =\n                        (unsigned\
    \ long long)(mint::mod() + l.val() - r.val()) *\n                        irot.val();\n\
    \                    ;\n                }\n                if (s + 1 != (1 <<\
    \ (len - 1)))\n                    irot *= info.irate2[bsf(~(unsigned int)(s))];\n\
    \            }\n            len--;\n        } else {\n            // 4-base\n\
    \            int p = 1 << (h - len);\n            mint irot = 1, iimag = info.iroot[2];\n\
    \            for (int s = 0; s < (1 << (len - 2)); s++) {\n                mint\
    \ irot2 = irot * irot;\n                mint irot3 = irot2 * irot;\n         \
    \       int offset = s << (h - len + 2);\n                for (int i = 0; i <\
    \ p; i++) {\n                    auto a0 = 1ULL * a[i + offset + 0 * p].val();\n\
    \                    auto a1 = 1ULL * a[i + offset + 1 * p].val();\n         \
    \           auto a2 = 1ULL * a[i + offset + 2 * p].val();\n                  \
    \  auto a3 = 1ULL * a[i + offset + 3 * p].val();\n\n                    auto a2na3iimag\
    \ =\n                        1ULL *\n                        mint((mint::mod()\
    \ + a2 - a3) * iimag.val()).val();\n\n                    a[i + offset] = a0 +\
    \ a1 + a2 + a3;\n                    a[i + offset + 1 * p] =\n               \
    \         (a0 + (mint::mod() - a1) + a2na3iimag) * irot.val();\n             \
    \       a[i + offset + 2 * p] =\n                        (a0 + a1 + (mint::mod()\
    \ - a2) + (mint::mod() - a3)) *\n                        irot2.val();\n      \
    \              a[i + offset + 3 * p] =\n                        (a0 + (mint::mod()\
    \ - a1) + (mint::mod() - a2na3iimag)) *\n                        irot3.val();\n\
    \                }\n                if (s + 1 != (1 << (len - 2)))\n         \
    \           irot *= info.irate3[bsf(~(unsigned int)(s))];\n            }\n   \
    \         len -= 2;\n        }\n    }\n}\n\ntemplate <class mint, internal::is_static_modint_t<mint>*\
    \ = nullptr>\nstd::vector<mint> convolution_naive(const std::vector<mint>& a,\n\
    \                                    const std::vector<mint>& b) {\n    int n\
    \ = int(a.size()), m = int(b.size());\n    std::vector<mint> ans(n + m - 1);\n\
    \    if (n < m) {\n        for (int j = 0; j < m; j++) {\n            for (int\
    \ i = 0; i < n; i++) {\n                ans[i + j] += a[i] * b[j];\n         \
    \   }\n        }\n    } else {\n        for (int i = 0; i < n; i++) {\n      \
    \      for (int j = 0; j < m; j++) {\n                ans[i + j] += a[i] * b[j];\n\
    \            }\n        }\n    }\n    return ans;\n}\n\ntemplate <class mint,\
    \ internal::is_static_modint_t<mint>* = nullptr>\nstd::vector<mint> convolution_fft(std::vector<mint>\
    \ a, std::vector<mint> b) {\n    int n = int(a.size()), m = int(b.size());\n \
    \   int z = 1 << internal::ceil_pow2(n + m - 1);\n    a.resize(z);\n    internal::butterfly(a);\n\
    \    b.resize(z);\n    internal::butterfly(b);\n    for (int i = 0; i < z; i++)\
    \ {\n        a[i] *= b[i];\n    }\n    internal::butterfly_inv(a);\n    a.resize(n\
    \ + m - 1);\n    mint iz = mint(z).inv();\n    for (int i = 0; i < n + m - 1;\
    \ i++) a[i] *= iz;\n    return a;\n}\n\n}  // namespace internal\n\ntemplate <class\
    \ mint, internal::is_static_modint_t<mint>* = nullptr>\nstd::vector<mint> convolution(std::vector<mint>&&\
    \ a, std::vector<mint>&& b) {\n    int n = int(a.size()), m = int(b.size());\n\
    \    if (!n || !m) return {};\n    if (std::min(n, m) <= 60) return convolution_naive(a,\
    \ b);\n    return internal::convolution_fft(a, b);\n}\n\ntemplate <class mint,\
    \ internal::is_static_modint_t<mint>* = nullptr>\nstd::vector<mint> convolution(const\
    \ std::vector<mint>& a,\n                              const std::vector<mint>&\
    \ b) {\n    int n = int(a.size()), m = int(b.size());\n    if (!n || !m) return\
    \ {};\n    if (std::min(n, m) <= 60) return convolution_naive(a, b);\n    return\
    \ internal::convolution_fft(a, b);\n}\n\ntemplate <unsigned int mod = 998244353,\n\
    \          class T,\n          std::enable_if_t<internal::is_integral<T>::value>*\
    \ = nullptr>\nstd::vector<T> convolution(const std::vector<T>& a, const std::vector<T>&\
    \ b) {\n    int n = int(a.size()), m = int(b.size());\n    if (!n || !m) return\
    \ {};\n\n    using mint = static_modint<mod>;\n    std::vector<mint> a2(n), b2(m);\n\
    \    for (int i = 0; i < n; i++) {\n        a2[i] = mint(a[i]);\n    }\n    for\
    \ (int i = 0; i < m; i++) {\n        b2[i] = mint(b[i]);\n    }\n    auto c2 =\
    \ convolution(move(a2), move(b2));\n    std::vector<T> c(n + m - 1);\n    for\
    \ (int i = 0; i < n + m - 1; i++) {\n        c[i] = c2[i].val();\n    }\n    return\
    \ c;\n}\n\nstd::vector<long long> convolution_ll(const std::vector<long long>&\
    \ a,\n                                      const std::vector<long long>& b) {\n\
    \    int n = int(a.size()), m = int(b.size());\n    if (!n || !m) return {};\n\
    \n    static constexpr unsigned long long MOD1 = 754974721;  // 2^24\n    static\
    \ constexpr unsigned long long MOD2 = 167772161;  // 2^25\n    static constexpr\
    \ unsigned long long MOD3 = 469762049;  // 2^26\n    static constexpr unsigned\
    \ long long M2M3 = MOD2 * MOD3;\n    static constexpr unsigned long long M1M3\
    \ = MOD1 * MOD3;\n    static constexpr unsigned long long M1M2 = MOD1 * MOD2;\n\
    \    static constexpr unsigned long long M1M2M3 = MOD1 * MOD2 * MOD3;\n\n    static\
    \ constexpr unsigned long long i1 =\n        internal::inv_gcd(MOD2 * MOD3, MOD1).second;\n\
    \    static constexpr unsigned long long i2 =\n        internal::inv_gcd(MOD1\
    \ * MOD3, MOD2).second;\n    static constexpr unsigned long long i3 =\n      \
    \  internal::inv_gcd(MOD1 * MOD2, MOD3).second;\n\n    auto c1 = convolution<MOD1>(a,\
    \ b);\n    auto c2 = convolution<MOD2>(a, b);\n    auto c3 = convolution<MOD3>(a,\
    \ b);\n\n    std::vector<long long> c(n + m - 1);\n    for (int i = 0; i < n +\
    \ m - 1; i++) {\n        unsigned long long x = 0;\n        x += (c1[i] * i1)\
    \ % MOD1 * M2M3;\n        x += (c2[i] * i2) % MOD2 * M1M3;\n        x += (c3[i]\
    \ * i3) % MOD3 * M1M2;\n        // B = 2^63, -B <= x, r(real value) < B\n    \
    \    // (x, x - M, x - 2M, or x - 3M) = r (mod 2B)\n        // r = c1[i] (mod\
    \ MOD1)\n        // focus on MOD1\n        // r = x, x - M', x - 2M', x - 3M'\
    \ (M' = M % 2^64) (mod 2B)\n        // r = x,\n        //     x - M' + (0 or 2B),\n\
    \        //     x - 2M' + (0, 2B or 4B),\n        //     x - 3M' + (0, 2B, 4B\
    \ or 6B) (without mod!)\n        // (r - x) = 0, (0)\n        //           - M'\
    \ + (0 or 2B), (1)\n        //           -2M' + (0 or 2B or 4B), (2)\n       \
    \ //           -3M' + (0 or 2B or 4B or 6B) (3) (mod MOD1)\n        // we checked\
    \ that\n        //   ((1) mod MOD1) mod 5 = 2\n        //   ((2) mod MOD1) mod\
    \ 5 = 3\n        //   ((3) mod MOD1) mod 5 = 4\n        long long diff =\n   \
    \         c1[i] - internal::safe_mod((long long)(x), (long long)(MOD1));\n   \
    \     if (diff < 0) diff += MOD1;\n        static constexpr unsigned long long\
    \ offset[5] = {\n            0, 0, M1M2M3, 2 * M1M2M3, 3 * M1M2M3};\n        x\
    \ -= offset[diff % 5];\n        c[i] = x;\n    }\n\n    return c;\n}\n\n}  //\
    \ namespace atcoder\n\n// #endif  // ATCODER_CONVOLUTION_HPP\n"
  dependsOn:
  - atcoder/internal_bit.hpp
  - atcoder/modint.hpp
  - atcoder/internal_math.hpp
  - atcoder/internal_type_traits.hpp
  isVerificationFile: false
  path: atcoder/convolution.hpp
  requiredBy: []
  timestamp: '2023-02-28 16:59:41+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: atcoder/convolution.hpp
layout: document
redirect_from:
- /library/atcoder/convolution.hpp
- /library/atcoder/convolution.hpp.html
title: atcoder/convolution.hpp
---
