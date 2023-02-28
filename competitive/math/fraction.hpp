#pragma once
#include "competitive/std/std.hpp"
struct Frac {
    ll num;
    ll den;
    Frac (ll _num, ll _den, bool reduce = true) : num(_num), den(_den) {
        if (reduce) (*this).reduce();
    }
    Frac (ll _num) : Frac(_num, 1) {}
    static ll redcue_limit;

    Frac inv() const { return Frac((*this).den, (*this).num); }
    Frac &operator+=(const Frac &x) {
        (*this).num = (*this).num * x.den + x.num * (*this).den;
        (*this).den = (*this).den * x.den;
        if ((*this).den > redcue_limit || (*this).num > redcue_limit) (*this).reduce();
        return (*this);
    }
    Frac &operator-=(const Frac &x) {
        (*this).num = (*this).num * x.den - x.num * (*this).den;
        (*this).den = (*this).den * x.den;
        if ((*this).den > redcue_limit || (*this).num > redcue_limit) (*this).reduce();
        return (*this);
    }
    Frac &operator*=(const Frac &x) {
        (*this).num = (*this).num * x.num;
        (*this).den = (*this).den * x.den;
        if ((*this).den > redcue_limit || (*this).num > redcue_limit) (*this).reduce();
        return (*this);
    }
    Frac &operator/=(const Frac &x) {
        (*this) *= x.inv();
        if ((*this).den > redcue_limit || (*this).num > redcue_limit) (*this).reduce();
        return (*this);
    }
    Frac operator+(const Frac &x) const { return (Frac(*this) += x); }
    Frac operator-(const Frac &x) const { return (Frac(*this) -= x); }
    Frac operator*(const Frac &x) const { return (Frac(*this) *= x); }
    Frac operator/(const Frac &x) const { return (Frac(*this) /= x); }

    Frac operator+() const { return *this; }
    Frac operator-() const { Frac x(-(*this).num, (*this).den); return x; }
    friend bool operator==(const Frac& lhs, const Frac& rhs) {
        return lhs.num * rhs.den == lhs.den * rhs.num;
    }
    friend bool operator!=(const Frac& lhs, const Frac& rhs) {
        return lhs.num * rhs.den != lhs.den * rhs.num;
    }
    friend bool operator>=(const Frac& lhs, const Frac& rhs) {
        return lhs.num * rhs.den >= lhs.den * rhs.num;
    }
    friend bool operator<=(const Frac& lhs, const Frac& rhs) {
        return lhs.num * rhs.den <= lhs.den * rhs.num;
    }
    friend bool operator>(const Frac& lhs, const Frac& rhs) {
        return lhs.num * rhs.den > lhs.den * rhs.num;
    }
    friend bool operator<(const Frac& lhs, const Frac& rhs) {
        return lhs.num * rhs.den < lhs.den * rhs.num;
    }

    double val() const {return (double)((*this).num) / (double)((*this).den); }
    friend ostream& operator<<(ostream& os, const Frac &x) { os << x.val(); return os; }
    void reduce() {
        assert((*this).den != 0 || (*this).num != 0);
        if ((*this).den == 0) { (*this).num = 1; return; }
        if ((*this).num == 0) { (*this).den = 1; return; }
        ll g = gcd((*this).num, (*this).den);
        (*this).num /= g;
        (*this).den /= g;
        if ((*this).den < 0) {
            (*this).num *= -1;
            (*this).den *= -1;
        }
        return;
    }
};
ll Frac::redcue_limit = 1000000000;
Frac pow(const Frac &a, ll n) {
    Frac res(1); Frac cur(a);
    while (n > 0) {
        if (n & 1) res *= cur;
        cur *= cur;
        n >>= 1;
    }
    return res;
}
Frac abs(const Frac &f) {
    Frac rev(f);
    if (rev.den * rev.num < 0) return -rev;
    return rev;
}
/**
 * @brief fraction.hpp
 * @docs docs/math/fraction.md
 */
