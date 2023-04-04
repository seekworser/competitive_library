#pragma once
#include "competitive/std/std.hpp"
template <typename Val, typename Key> struct Compress {
    vector<Key> coordinates;
    vector<Val> val;
    Compress() = default;
    Compress(const vector<Key> &_coordinates, Val default_val) {
        coordinates = _coordinates;
        uniq(coordinates);
        sort(all(coordinates));
        val = vector<Val>(sz(coordinates), default_val);
    }
    int pos(const Key key) const {
        auto iter = lower_bound(all(coordinates), key);
        assert(iter != coordinates.end() && *iter == key);
        return distance(coordinates.begin(), iter);
    }
    Val &operator[](const Key key) {
        return val[pos(key)];
    }
    Key &key_at(const int i) const {
        return coordinates[i];
    }
};
/**
 * @brief 座標圧縮
 * @docs docs/helper/compress.md
 */
