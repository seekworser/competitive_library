#pragma once
#include "competitive/std/std.hpp"
template <typename T> struct Matrix {
    vector<vector<T> > a;
    int h, w;

    Matrix() = default;
    Matrix(int h, int w) : a(h, vector<T>(w, T())), h(h), w(w) {}
    Matrix(int n) : a(n, vector<T>(n, T())), h(n), w(n) {};
    Matrix(vector<vector<T>> a) : a(a), h(sz(a)), w(sz(a) ? sz(a[0]) : 0) {};

    inline const vector<T> &operator[](int k) const { return a[k]; }
    inline vector<T> &operator[](int k) { return a[k]; }
    template<typename T> Matrix<T> &operator+=(const Matrix<T> &b) {
        assert((*this).h == b.h && (*this).w == b.w);
        rep(i, (*this).h) rep(j, (*this).w) (*this)[i][j] += b[i][j];
        return (*this);
    }
    template<typename T> Matrix<T> &operator-=(const Matrix<T> &b) {
        assert((*this).h == b.h && (*this).w == b.w);
        rep(i, (*this).h) rep(j, (*this).w) (*this)[i][j] -= b[i][j];
      return (*this);
    }
    template<typename T> Matrix<T> &operator*=(const Matrix<T> &b) {
        assert((*this).w == b.h);
        vector<vector<T>> c((*this).h, vector<T>(b.w, T()));
        rep(i, (*this).h) rep(j, b.w) rep(k, (*this).w) {
            c[i][j] += (*this)[i][k] * b[k][j];
        }
        swap((*this).a, c);
        return (*this);
    }
    template<typename T> Matrix<T> operator+(const Matrix<T> &b) const {return (Matrix<T>(*this) += b); }
    template<typename T> Matrix<T> operator-(const Matrix<T> &b) const {return (Matrix<T>(*this) -= b); }
    template<typename T> Matrix<T> operator*(const Matrix<T> &b) const {return (Matrix<T>(*this) *= b); }
    template<typename T> Matrix<T> operator/(const Matrix<T> &b) const {return (Matrix<T>(*this) /= b); }

    bool operator==(const Matrix &b) const {
      if ((*this).h != b.h || (*this).w != b.w) return false;
      rep(i, (*this).h) rep(j, (*this).w) if (A[i][j] != B[i][j]) return false;
      return true;
    }

  bool operator!=(const Matrix &B) const {
    assert(H() == B.H() && W() == B.W());
    for (int i = 0; i < H(); i++)
      for (int j = 0; j < W(); j++)
        if (A[i][j] != B[i][j]) return true;
    return false;
  }

  friend ostream &operator<<(ostream &os, const Matrix &p) {
    int n = p.H(), m = p.W();
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        os << p[i][j];
        if (i + 1 == n && j + 1 == m) { continue; }
        else if (j + 1 == m) os << "\n";
        else os << " ";
      }
    }
    return (os);
  }

  T determinant() const {
    Matrix B(*this);
    assert(H() == W());
    T ret = 1;
    for (int i = 0; i < H(); i++) {
      int idx = -1;
      for (int j = i; j < W(); j++) {
        if (B[j][i] != 0) {
          idx = j;
          break;
        }
      }
      if (idx == -1) return 0;
      if (i != idx) {
        ret *= T(-1);
        swap(B[i], B[idx]);
      }
      ret *= B[i][i];
      T inv = T(1) / B[i][i];
      for (int j = 0; j < W(); j++) {
        B[i][j] *= inv;
      }
      for (int j = i + 1; j < H(); j++) {
        T a = B[j][i];
        if (a == 0) continue;
        for (int k = i; k < W(); k++) {
          B[j][k] -= B[i][k] * a;
        }
      }
    }
    return ret;
  }
};
template<typename T> Matrix<T> pow(Matrix<T> a, ll n) {
    assert(a.h == a.w);
    ll res = 1;
    while (n > 0) {
        if (n & 1) res = (res * a) % mod;
        if (n > 1) a = (a * a) % mod;
        n >>= 1;
    }
    return res;
}
/**
 * @brief matrix.hpp
 * @docs docs/matrix/matrix.md
 */
