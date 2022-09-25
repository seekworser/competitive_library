#ifndef COMPETITIVE_MATH_F2_HPP
#define COMPETITIVE_MATH_F2_HPP 1
#include <competitive/std/std.hpp>
struct F2 {
    bool val;
    F2() : val(false) {}
    F2(bool b) : val(b) {}
    F2(int b) : val(b % 2) {}
    F2(long long b) : val(b % 2) {}

    F2 &operator+=(const F2 &x) { (*this).val ^= x.val; return (*this); }
    F2 &operator-=(const F2 &x) { (*this) += x; return (*this); }
    F2 &operator*=(const F2 &x) { (*this).val &= x.val; return (*this); }
    F2 &operator/=(const F2 &x) { assert(x.val); return (*this); }
    F2 operator+(const F2 &x) const { return (F2(*this) += x); }
    F2 operator-(const F2 &x) const { return (F2(*this) -= x); }
    F2 operator*(const F2 &x) const { return (F2(*this) *= x); }
    F2 operator/(const F2 &x) const { return (F2(*this) /= x); }

    F2 &operator++() {
        (*this).val = !(*this).val;
        return *this;
    }
    F2 operator++(int) {
        F2 result = *this;
        ++*this;
        return result;
    }
    F2 &operator--() {
        (*this).val = !(*this).val;
        return *this;
    }
    F2 operator--(int) {
        F2 result = *this;
        --*this;
        return result;
    }

    F2 operator+() const { return *this; }
    F2 operator-() const { return F2() - *this; }

    friend bool operator==(const F2& lhs, const F2& rhs) {
        return lhs.val == rhs.val;
    }
    friend bool operator!=(const F2& lhs, const F2& rhs) {
        return lhs.val != rhs.val;
    }
    friend ostream& operator<<(ostream& os, const F2 &x) { os << x.val; return os; }
};
#endif // COMPETITIVE_MATH_F2_HPP