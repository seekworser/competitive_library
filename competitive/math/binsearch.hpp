#ifndef COMPETITIVE_MATH_BINSERCH_HPP
#define COMPETITIVE_MATH_BINSERCH_HPP 1
#include <functional>
//s~eでle(ans) = trueとなる最大のansを返す
template <class T> T binsearch(T s, T e, std::function<bool(T)> le) {
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
template <class T> T binsearch_double(T s, T e, std::function<bool(T)> le, double eps=1e-10) {
    T cmin = s;
    T cmax = e;
    while (abs(cmax - cmin) > eps) {
        T p = (cmin + cmax) / 2;
        if (le(p)) cmin = p;
        else cmax = p;
    }
    return cmin;
}
//s~eで高々1つしか極値を持たないfについて極値を与える点を返す
template <class T, class U> T ternary_search_double(T s, T e, std::function<U(T)> f, double eps=1e-10) {
    T cmin = s;
    T cmax = e;
    while (abs(cmax - cmin) > eps) {
        T p1 = cmin + (cmax - cmin) / 3;
        T p2 = cmax - (cmax - cmin) / 3;
        if (f(p1) > f(p2)) cmin = p1;
        else cmax = p2;
    }
    return cmin;
}
#endif // COMPETITIVE_MATH_BINSERCH_HPP