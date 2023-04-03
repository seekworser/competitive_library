#pragma once
#include "competitive/std/std.hpp"
random_device seed_gen;
mt19937_64 engine(seed_gen());
ll randint(ll min, ll max) {
    assert(min <= max);
    return engine() % (max - min + 1) + min;
}
vl randvec(int n, ll min, ll max) {
    vl rev(n);
    rep(i, n) rev[i] = randint(min, max);
    return rev;
}
/**
 * @brief Random ベースライブラリ
 * @docs docs/random/random_base.md
 */
