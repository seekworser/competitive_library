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
  code: "#n\u306E\u7D20\u6570\u5224\u5B9A\ndef is_prime(n):\n    if n == 1:\n    \
    \    return False\n    for i in range(2,int(n**0.5)+1):\n        if n % i == 0:\n\
    \            return False\n    return True\n\n#n\u306E\u7D04\u6570\u5217\u6319\
    \ndef divisor(n):\n    ass = []\n    for i in range(1,int(n**0.5)+1):\n      \
    \  if n%i == 0:\n            ass.append(i)\n            if i**2 == n:\n      \
    \          continue\n            ass.append(n//i)\n    return ass #sort\u3055\u308C\
    \u3066\u3044\u306A\u3044\n\n#n\u306E\u7D20\u56E0\u6570\u5206\u89E3(O(n**0.5)\n\
    def prime_factor(n):\n    ass = []\n    for i in range(2,int(n**0.5)+1):\n   \
    \     while n % i==0:\n            ass.append(i)\n            n = n//i\n    if\
    \ n != 1:\n        ass.append(n)\n    return ass\n\n#[[\u7D20\u56E0\u6570,\u6570\
    ]]\u3092\u51FA\u529B\ndef fctr1(n):\n    f=[]\n    c=0\n    r=int(n**0.5)\n  \
    \  for i in range(2,r+2):\n        while n%i==0:\n            c+=1\n         \
    \   n=n//i\n        if c!=0:\n            f.append([i,c])\n            c=0\n \
    \   if n!=1:\n        f.append([n,1])\n    return f\n\n#n\u4EE5\u4E0B\u306E\u7D20\
    \u6570\u5217\u6319\ndef primes(n):\n    ass = []\n    is_prime = [True] * (n +\
    \ 1)\n    is_prime[0] = False\n    is_prime[1] = False\n    for i in range(2,\
    \ int(n**0.5) + 1):\n        if not is_prime[i]:\n            continue\n     \
    \   for j in range(i * 2, n + 1, i):\n            is_prime[j] = False\n    for\
    \ i in range(len(is_prime)):\n        if is_prime[i]:\n            ass.append(i)\n\
    \    return ass\n\n#a\u4EE5\u4E0Ab\u672A\u6E80\u306E\u7D20\u6570\u5217\u6319\n\
    def segment_sieve(a,b):\n    ass = []\n    is_prime_small = [True] * (int(b**0.5)+1)\n\
    \    is_prime = [True] * (b-a)\n    for i in range(2,int(b**0.5)):\n        if\
    \ is_prime_small[i]:\n            j = 2*i\n            while j**2 < b:\n     \
    \           is_prime_small[j] = False\n                j += i\n            j =\
    \ max(2*i,((a+i-1)//i)*i)\n            while j < b:\n                is_prime[j-a]\
    \ = False\n                j += i\n    for i in range(len(is_prime)):\n      \
    \  if is_prime[i]:\n            ass.append(a+i)\n    if ass[0] == 1:\n       \
    \ del ass[0]\n    return ass\n\n#####################\nprint(is_prime(53))\nprint(sorted(divisor(20)))\
    \ #sort\u3057\u3066\u308B\nprint(prime_factor(18))\nprint(fctr1(60))\nprint(primes(100))\n\
    print((segment_sieve(1,101)))"
  dependsOn: []
  isVerificationFile: false
  path: competitive/python/primes.py
  requiredBy: []
  timestamp: '2023-02-16 23:48:21+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: competitive/python/primes.py
layout: document
redirect_from:
- /library/competitive/python/primes.py
- /library/competitive/python/primes.py.html
title: competitive/python/primes.py
---
