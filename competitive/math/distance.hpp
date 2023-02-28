#pragma once
#include "competitive/std/std.hpp"
template<class T> T dist(T s, T t) {
    return std::abs(s - t);
};
template<class T> double euclid(pair<T, T> s, pair<T, T> t) {
    auto square = [](T a) {return a*a;};
    return sqrt(square(s.first - t.first) + square(s.second - t.second));
};
template<class T> double euclid(tuple<T, T, T> s, tuple<T, T, T> t) {
    auto [s1, s2, s3] = s;
    auto [t1, t2, t3] = t;
    auto square = [](T a) {return a*a;};
    return sqrt(square(s1 - t1) + square(s2 - t2) + square(s3 - t3));
};
template<class T> T euclid_square(pair<T, T> s, pair<T, T> t) {
    auto square = [](T a) {return a*a;};
    return square(s.first - t.first) + square(s.second - t.second);
};
template<class T> T euclid_square(tuple<T, T, T> s, tuple<T, T, T> t) {
    auto [s1, s2, s3] = s;
    auto [t1, t2, t3] = t;
    auto square = [](T a) {return a*a;};
    return square(s1 - t1) + square(s2 - t2) + square(s3 - t3);
};
template<class T> T manhattan(pair<T, T> s, pair<T, T> t) {
    return abs(s.first - t.first) + abs(s.second - t.second);
};
/**
 * @brief distance.hpp
 * @docs docs/math/distance.md
 */
