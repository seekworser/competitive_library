#ifndef COMPETITIVE_MATH_DISTANCE_HPP
#define COMPETITIVE_MATH_DISTANCE_HPP 1
#include <competitive/std/std.hpp>
template<class T> T dist(T s, T t) {
    return std::abs(s - t);
};
template<class T> double euclid(pair<T, T> s, pair<T, T> t) {
    auto square = [](T a) {return a*a;};
    return sqrt(square(s.first - t.first) + square(s.second - t.second));
};
template<class T> T euclid_square(pair<T, T> s, pair<T, T> t) {
    auto square = [](T a) {return a*a;};
    return square(s.first - t.first) + square(s.second - t.second);
};
template<class T> T manhattan(pair<T, T> s, pair<T, T> t) {
    return abs(s.first - t.first) + abs(s.second - t.second);
};
#endif // COMPETITIVE_MATH_DISTANCE_HPP