#pragma once
#include "competitive/std/std.hpp"
template<typename T> vi z_algorithm(vector<T>& vec) {
    int n = sz(vec);
    vi rev(n);
    rev[0] = n;
    int pos(1), len(0);
    while(pos < n) {
        while (pos + len < n && vec[pos+len] == vec[len]) len++;
        rev[pos] = len;
        pos++;
        if (len > 0) len--;
        ll written = 1;
        debug(pos, len);
        while (len > 0) {
            if (rev[written] >= len) break;
            rev[pos] = rev[written];
            len--; written++; pos++;
        }
        debug(pos, len);
    }
    return rev;
}
vi z_algorithm(string& s) {
    vector<char> vec(all(s));
    return z_algorithm(vec);
}
/**
 * @brief z_algorithm
 * @docs docs/string/z_algorithm.md
 */
