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
    Matrix<T> &operator+=(const Matrix<T> &b) {
        assert((*this).h == b.h && (*this).w == b.w);
        rep(i, (*this).h) rep(j, (*this).w) (*this)[i][j] += b[i][j];
        return (*this);
    }
    Matrix<T> &operator-=(const Matrix<T> &b) {
        assert((*this).h == b.h && (*this).w == b.w);
        rep(i, (*this).h) rep(j, (*this).w) (*this)[i][j] -= b[i][j];
        return (*this);
    }
    Matrix<T> &operator*=(const Matrix<T> &b) {
        assert((*this).w == b.h);
        vector<vector<T>> c((*this).h, vector<T>(b.w, T()));
        rep(i, (*this).h) rep(j, b.w) rep(k, (*this).w) {
            c[i][j] += (*this)[i][k] * b[k][j];
        }
        swap((*this).a, c);
        (*this).w = b.w;
        return (*this);
    }
    Matrix<T> operator+(const Matrix<T> &b) const {return (Matrix<T>(*this) += b); }
    Matrix<T> operator-(const Matrix<T> &b) const {return (Matrix<T>(*this) -= b); }
    Matrix<T> operator*(const Matrix<T> &b) const {return (Matrix<T>(*this) *= b); }
    Matrix<T> operator/(const Matrix<T> &b) const {return (Matrix<T>(*this) /= b); }

    bool operator==(const Matrix<T> &b) const {
        if ((*this).h != b.h || (*this).w != b.w) return false;
        rep(i, (*this).h) rep(j, (*this).w) if ((*this).a[i][j] != b[i][j]) return false;
        return true;
    }
    bool operator!=(const Matrix &b) const {
        return !((*this) == b);
    }

    friend ostream &operator<<(ostream &os, const Matrix &p) {
        rep(i, p.h) rep(j, p.w) {
            os << p[i][j];
            if (i == p.h - 1 && j == p.w - 1) { continue; }
            else if (j == p.w - 1) os << "\n";
            else os << " ";
        }
        return (os);
    }

    T determinant() const {
        assert((*this).h == (*this).w);
        Matrix<T> b(*this);
        T ret = 1;
        rep(i, (*this).h) {
            int idx = -1;
            rep(j, (*this).w) {
                if (b[j][i] != 0) {
                    idx = j;
                    break;
                }
            }
            if (idx == -1) return 0;
            if (i != idx) {
                ret *= T(-1);
                swap(b[i], b[idx]);
            }
            ret *= b[i][i];
            T inv = T(1) / b[i][i];
            rep(j, (*this).w) {
                b[i][j] *= inv;
            }
            rep(j, i+1, (*this).h) {
                T a = b[j][i];
                if (a == 0) continue;
                rep(k, i, (*this).w) {
                    b[j][k] -= b[i][k] * a;
                }
            }
        }
        return ret;
    }
};
template<typename T> Matrix<T> identity(int n) {
    vvec(T, rev, n, n, T(0));
    rep(i, n) rev[i][i] = 1;
    return Matrix<T>(rev);
};
template<typename T> Matrix<T> pow(Matrix<T> a, ll n) {
    assert(a.h == a.w);
    Matrix<T> res = identity<T>(a.h);
    while (n > 0) {
        if (n & 1) res = (res * a);
        if (n > 1) a = (a * a);
        n >>= 1;
    }
    return res;
};
/**
 * @brief matrix.hpp
 * @docs docs/matrix/matrix.md
 */
