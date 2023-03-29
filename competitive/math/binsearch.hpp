#pragma once
#include <functional>
//s~eでle(ans) = trueとなる最大のansを返す
template <class T, class F> T binsearch(T s, T e, F le) {
    T cmin = s;
    T cmax = e;
    while (cmin != cmax) {
        T p = (cmin + cmax + 1) / 2;
        if (le(p)) cmin = p;
        else cmax = p - 1;
    }
    return cmin;
}
//s~eでle(ans) = trueとなる最大のansを返す
template <class F> double binsearch_double(double s, double e, F le, double eps=1e-10) {
    double cmin = s;
    double cmax = e;
    while (abs(cmax - cmin) > eps * cmax && abs(cmax - cmin) > eps) {
        double p = (cmin + cmax) / 2;
        if (le(p)) cmin = p;
        else cmax = p;
    }
    return cmin;
}
//s~eで高々1つしか極値を持たないfについて極値を与える点を返す
template <class T, class F> T ternary_search(T s, T e, F f, double eps=1e-10) {
    T cmin = s;
    T cmax = e;
    while (cmax - cmin > (T)3) {
        T p1 = cmin + max<T>(1, (cmax - cmin) / 3);
        T p2 = cmax - max<T>(1, (cmax - cmin) / 3);
        if (f(p1) > f(p2)) cmin = p1;
        else cmax = p2;
    }
    T rev = cmin;
    auto val = f(cmin);
    rep(i, 4) {
        if (chmin<T>(val, f(cmin+i))) rev = cmin + i;
    }
    return rev;
}
//s~eで高々1つしか極値を持たないfについて極値を与える点を返す
template <class F> double ternary_search_double(double s, double e, F f, double eps=1e-10) {
    double cmin = s;
    double  cmax = e;
    while (abs(cmax - cmin) > eps) {
        double p1 = cmin + (cmax - cmin) / 3;
        double p2 = cmax - (cmax - cmin) / 3;
        if (f(p1) > f(p2)) cmin = p1;
        else cmax = p2;
    }
    return cmin;
}
/**
 * @brief binsearch.hpp
 * @docs docs/math/binsearch.md
 */
