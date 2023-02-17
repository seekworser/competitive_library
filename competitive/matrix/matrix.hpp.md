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
  bundledCode: "#line 1 \"competitive/matrix/matrix.hpp\"\n\n\n#include <competitive/std/std.hpp>\n\
    template <class T>\nstruct Matrix {\n  vector<vector<T> > A;\n\n  Matrix() = default;\n\
    \  Matrix(int n, int m) : A(n, vector<T>(m, T())) {}\n  Matrix(int n) : A(n, vector<T>(n,\
    \ T())){};\n\n  int H() const { return A.size(); }\n\n  int W() const { return\
    \ A[0].size(); }\n\n  int size() const { return A.size(); }\n\n  inline const\
    \ vector<T> &operator[](int k) const { return A[k]; }\n\n  inline vector<T> &operator[](int\
    \ k) { return A[k]; }\n\n  static Matrix I(int n) {\n    Matrix mat(n);\n    for\
    \ (int i = 0; i < n; i++) mat[i][i] = 1;\n    return (mat);\n  }\n\n  Matrix &operator+=(const\
    \ Matrix &B) {\n    int n = H(), m = W();\n    assert(n == B.H() && m == B.W());\n\
    \    for (int i = 0; i < n; i++)\n      for (int j = 0; j < m; j++) (*this)[i][j]\
    \ += B[i][j];\n    return (*this);\n  }\n\n  Matrix &operator-=(const Matrix &B)\
    \ {\n    int n = H(), m = W();\n    assert(n == B.H() && m == B.W());\n    for\
    \ (int i = 0; i < n; i++)\n      for (int j = 0; j < m; j++) (*this)[i][j] -=\
    \ B[i][j];\n    return (*this);\n  }\n\n  Matrix &operator*=(const Matrix &B)\
    \ {\n    int n = H(), m = B.W(), p = W();\n    assert(p == B.H());\n    vector<vector<T>\
    \ > C(n, vector<T>(m, T{}));\n    for (int i = 0; i < n; i++)\n      for (int\
    \ k = 0; k < p; k++)\n        for (int j = 0; j < m; j++) C[i][j] += (*this)[i][k]\
    \ * B[k][j];\n    A.swap(C);\n    return (*this);\n  }\n\n  // Matrix &operator^=(T\
    \ k) {\n  //   Matrix B = Matrix::I(H());\n  //   while (k > 0) {\n  //     if\
    \ (k & 1) B *= *this;\n  //     *this *= *this;\n  //     k >>= 1LL;\n  //   }\n\
    \  //   A.swap(B.A);\n  //   return (*this);\n  // }\n\n  Matrix operator+(const\
    \ Matrix &B) const { return (Matrix(*this) += B); }\n\n  Matrix operator-(const\
    \ Matrix &B) const { return (Matrix(*this) -= B); }\n\n  Matrix operator*(const\
    \ Matrix &B) const { return (Matrix(*this) *= B); }\n\n  // Matrix operator^(const\
    \ T k) const { return (Matrix(*this) ^= k); }\n\n  bool operator==(const Matrix\
    \ &B) const {\n    assert(H() == B.H() && W() == B.W());\n    for (int i = 0;\
    \ i < H(); i++)\n      for (int j = 0; j < W(); j++)\n        if (A[i][j] != B[i][j])\
    \ return false;\n    return true;\n  }\n\n  bool operator!=(const Matrix &B) const\
    \ {\n    assert(H() == B.H() && W() == B.W());\n    for (int i = 0; i < H(); i++)\n\
    \      for (int j = 0; j < W(); j++)\n        if (A[i][j] != B[i][j]) return true;\n\
    \    return false;\n  }\n\n  friend ostream &operator<<(ostream &os, const Matrix\
    \ &p) {\n    int n = p.H(), m = p.W();\n    for (int i = 0; i < n; i++) {\n  \
    \    for (int j = 0; j < m; j++) {\n        os << p[i][j];\n        if (i + 1\
    \ == n && j + 1 == m) { continue; }\n        else if (j + 1 == m) os << \"\\n\"\
    ;\n        else os << \" \";\n      }\n    }\n    return (os);\n  }\n\n  T determinant()\
    \ const {\n    Matrix B(*this);\n    assert(H() == W());\n    T ret = 1;\n   \
    \ for (int i = 0; i < H(); i++) {\n      int idx = -1;\n      for (int j = i;\
    \ j < W(); j++) {\n        if (B[j][i] != 0) {\n          idx = j;\n         \
    \ break;\n        }\n      }\n      if (idx == -1) return 0;\n      if (i != idx)\
    \ {\n        ret *= T(-1);\n        swap(B[i], B[idx]);\n      }\n      ret *=\
    \ B[i][i];\n      T inv = T(1) / B[i][i];\n      for (int j = 0; j < W(); j++)\
    \ {\n        B[i][j] *= inv;\n      }\n      for (int j = i + 1; j < H(); j++)\
    \ {\n        T a = B[j][i];\n        if (a == 0) continue;\n        for (int k\
    \ = i; k < W(); k++) {\n          B[j][k] -= B[i][k] * a;\n        }\n      }\n\
    \    }\n    return ret;\n  }\n};\n\n"
  code: "#ifndef COMPETITIVE_MATRIX_MATRIX_HPP\n#define COMPETITIVE_MATRIX_MATRIX_HPP\
    \ 1\n#include <competitive/std/std.hpp>\ntemplate <class T>\nstruct Matrix {\n\
    \  vector<vector<T> > A;\n\n  Matrix() = default;\n  Matrix(int n, int m) : A(n,\
    \ vector<T>(m, T())) {}\n  Matrix(int n) : A(n, vector<T>(n, T())){};\n\n  int\
    \ H() const { return A.size(); }\n\n  int W() const { return A[0].size(); }\n\n\
    \  int size() const { return A.size(); }\n\n  inline const vector<T> &operator[](int\
    \ k) const { return A[k]; }\n\n  inline vector<T> &operator[](int k) { return\
    \ A[k]; }\n\n  static Matrix I(int n) {\n    Matrix mat(n);\n    for (int i =\
    \ 0; i < n; i++) mat[i][i] = 1;\n    return (mat);\n  }\n\n  Matrix &operator+=(const\
    \ Matrix &B) {\n    int n = H(), m = W();\n    assert(n == B.H() && m == B.W());\n\
    \    for (int i = 0; i < n; i++)\n      for (int j = 0; j < m; j++) (*this)[i][j]\
    \ += B[i][j];\n    return (*this);\n  }\n\n  Matrix &operator-=(const Matrix &B)\
    \ {\n    int n = H(), m = W();\n    assert(n == B.H() && m == B.W());\n    for\
    \ (int i = 0; i < n; i++)\n      for (int j = 0; j < m; j++) (*this)[i][j] -=\
    \ B[i][j];\n    return (*this);\n  }\n\n  Matrix &operator*=(const Matrix &B)\
    \ {\n    int n = H(), m = B.W(), p = W();\n    assert(p == B.H());\n    vector<vector<T>\
    \ > C(n, vector<T>(m, T{}));\n    for (int i = 0; i < n; i++)\n      for (int\
    \ k = 0; k < p; k++)\n        for (int j = 0; j < m; j++) C[i][j] += (*this)[i][k]\
    \ * B[k][j];\n    A.swap(C);\n    return (*this);\n  }\n\n  // Matrix &operator^=(T\
    \ k) {\n  //   Matrix B = Matrix::I(H());\n  //   while (k > 0) {\n  //     if\
    \ (k & 1) B *= *this;\n  //     *this *= *this;\n  //     k >>= 1LL;\n  //   }\n\
    \  //   A.swap(B.A);\n  //   return (*this);\n  // }\n\n  Matrix operator+(const\
    \ Matrix &B) const { return (Matrix(*this) += B); }\n\n  Matrix operator-(const\
    \ Matrix &B) const { return (Matrix(*this) -= B); }\n\n  Matrix operator*(const\
    \ Matrix &B) const { return (Matrix(*this) *= B); }\n\n  // Matrix operator^(const\
    \ T k) const { return (Matrix(*this) ^= k); }\n\n  bool operator==(const Matrix\
    \ &B) const {\n    assert(H() == B.H() && W() == B.W());\n    for (int i = 0;\
    \ i < H(); i++)\n      for (int j = 0; j < W(); j++)\n        if (A[i][j] != B[i][j])\
    \ return false;\n    return true;\n  }\n\n  bool operator!=(const Matrix &B) const\
    \ {\n    assert(H() == B.H() && W() == B.W());\n    for (int i = 0; i < H(); i++)\n\
    \      for (int j = 0; j < W(); j++)\n        if (A[i][j] != B[i][j]) return true;\n\
    \    return false;\n  }\n\n  friend ostream &operator<<(ostream &os, const Matrix\
    \ &p) {\n    int n = p.H(), m = p.W();\n    for (int i = 0; i < n; i++) {\n  \
    \    for (int j = 0; j < m; j++) {\n        os << p[i][j];\n        if (i + 1\
    \ == n && j + 1 == m) { continue; }\n        else if (j + 1 == m) os << \"\\n\"\
    ;\n        else os << \" \";\n      }\n    }\n    return (os);\n  }\n\n  T determinant()\
    \ const {\n    Matrix B(*this);\n    assert(H() == W());\n    T ret = 1;\n   \
    \ for (int i = 0; i < H(); i++) {\n      int idx = -1;\n      for (int j = i;\
    \ j < W(); j++) {\n        if (B[j][i] != 0) {\n          idx = j;\n         \
    \ break;\n        }\n      }\n      if (idx == -1) return 0;\n      if (i != idx)\
    \ {\n        ret *= T(-1);\n        swap(B[i], B[idx]);\n      }\n      ret *=\
    \ B[i][i];\n      T inv = T(1) / B[i][i];\n      for (int j = 0; j < W(); j++)\
    \ {\n        B[i][j] *= inv;\n      }\n      for (int j = i + 1; j < H(); j++)\
    \ {\n        T a = B[j][i];\n        if (a == 0) continue;\n        for (int k\
    \ = i; k < W(); k++) {\n          B[j][k] -= B[i][k] * a;\n        }\n      }\n\
    \    }\n    return ret;\n  }\n};\n#endif // COMPETITIVE_MATRIX_MATRIX_HPP"
  dependsOn:
  - competitive/std/std.hpp
  isVerificationFile: false
  path: competitive/matrix/matrix.hpp
  requiredBy: []
  timestamp: '2023-02-17 21:43:12+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: competitive/matrix/matrix.hpp
layout: document
redirect_from:
- /library/competitive/matrix/matrix.hpp
- /library/competitive/matrix/matrix.hpp.html
title: competitive/matrix/matrix.hpp
---
