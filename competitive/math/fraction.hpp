#ifndef COMPETITIVE_MATH_FRACTION_HPP
#define COMPETITIVE_MATH_FRACTION_HPP 1
#include <competitive/std/std.hpp>
struct Frac {
    ll num;
    ll den;
    Frac (ll _num, ll _den) : num(_num), den(_den) {
        // assert(_den != 0);
        reduce();
    }

    Frac inv() const { return Frac((*this).den, (*this).num); }
    Frac &operator+=(const Frac &x) {
        (*this).num = (*this).num * x.den + x.num * (*this).den;
        (*this).den = (*this).den * x.den;
        reduce();
        return (*this);
    }
    Frac &operator-=(const Frac &x) {
        (*this).num = (*this).num * x.den - x.num * (*this).den;
        (*this).den = (*this).den * x.den;
        reduce();
        return (*this);
    }
    Frac &operator*=(const Frac &x) {
        (*this).num = (*this).num * x.num;
        (*this).den = (*this).den * x.den;
        reduce();
        return (*this);
    }
    Frac &operator/=(const Frac &x) {
        (*this) *= x.inv();
        reduce();
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

    friend ostream& operator<<(ostream& os, const Frac &x) { os << x.num << "/" << x.den; return os; }
    private:
    void reduce() {
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
#endif // COMPETITIVE_MATH_FRACTION_HPP