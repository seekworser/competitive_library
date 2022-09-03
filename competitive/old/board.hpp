#ifndef COMPETITIVE_HELPER_BOARD_HPP
#define COMPETITIVE_HELPER_BOARD_HPP 1
#include <comp/std/std.hpp>
const vector<pii> DXY = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
const vector<pii> DDXY = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
const vector<tuple<int, int, int>> DXYZ = {{-1, 0, 0}, {1, 0, 0}, {0, -1, 0}, {0, 1, 0}, {0, 0, -1}, {0, 0, 1}};
// template <typename T> std::vector<T> make_vector(std::size_t size) {
//     return std::vector<T>(size);
// };
// template <typename T> auto make_vector(std::vector<size_t> sizes) {
//     size_t first = sizes[0];
//     vector<size_t> nsizes = sizes;
//     nsizes.erase(nsizes.begin());
//     if (sizes.size() != 1) {
//         auto inner = make_vector<T>(nsizes);
//         return std::vector<decltype(inner)>(first, inner);
//     } else {
//         auto inner = make_vector<T>(nsizes[0]);
//         return std::vector<decltype(inner)>(first, inner);
//     }
// };
template<class T> class BoardHelper{
    private:
    ll oned_size;
    vector<ll> mul_for_dim;

    public:
    int dimension;
    vector<ll> board_size;

    Board (vector<ll> bs) : dimension(bs.size()), board_size(bs), mul_for_dim(bs.size()) {
        mul_for_dim[dimension-1] = 1;
        for (int i=dimension - 2; i >= 0; i--) {
            mul_for_dim[i] = mul_for_dim[i+1] * board_size[i+1];
        }
        oned_size = mul_for_dim[0] * board_size[0];
        auto board = make;
    }

    ll to_1d(vector<ll> const ind) {
        assert(ind.size() == dimension);
        ll rev = 0;
        for (int i=0; i<dimension; i++) {
            assert(0 <= ind[i] && ind[i] < board_size[i]);
            rev += ind[i] * mul_for_dim[i];
        }
        return rev;
    }
    vector<ll> to_nd(ll ind) {
        assert(0 <= ind && ind < oned_size);
        vector<ll> rev;
        for (int i=0; i<dimension; i++) {
            rev.push_back(ind / mul_for_dim[i]);
            ind %= mul_for_dim[i];
        }
        return rev;
    }
    bool in_board(vector<ll> const ind) {
        if (ind.size() != dimension) return false;
        bool rev = true;
        for (int i=0; i<dimension; i++) {
            if (ind[i] < 0 || board_size[i] <= ind[i]) {
                rev = false;
                break;
            }
        }
        return rev;
    }
    bool in_board(ll ind) {
        return (0 <= ind && ind < oned_size);
    }
    operator[]()
};
#endif //COMPETITIVE_HELPER_BOARD_HPP