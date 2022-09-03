#ifndef COMPETITIVE_HELPER_BOARD_HPP
#define COMPETITIVE_HELPER_BOARD_HPP 1
#include <competitive/std/std.hpp>
const vector<pii> DXY = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
const vector<pii> DDXY = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
const vector<tuple<int, int, int>> DXYZ = {{-1, 0, 0}, {1, 0, 0}, {0, -1, 0}, {0, 1, 0}, {0, 0, -1}, {0, 0, 1}};
class BoardHelper{
    private:
    ll oned_size;
    vector<ll> mul_for_dim;

    public:
    int dimension;
    vector<ll> board_size;

    BoardHelper (vector<ll> bs) : mul_for_dim(bs.size()), dimension(bs.size()), board_size(bs) {
        mul_for_dim[dimension-1] = 1;
        for (int i=dimension - 2; i >= 0; i--) {
            mul_for_dim[i] = mul_for_dim[i+1] * board_size[i+1];
        }
        oned_size = mul_for_dim[0] * board_size[0];
    }

    template<typename... Arg> ll to_1d(Arg... ind) {
        int count = 0;
        ll rev = 0;
        for (ll i : initializer_list<ll>{ind...}) {
            assert(count < dimension);
            assert(0 <= i && i < board_size[count]);
            rev += i * mul_for_dim[count];
            count++;
        }
        assert(count == dimension);
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
    bool in_board(const vector<ll> &ind) {
        if (sz(ind) != dimension) return false;
        bool rev = true;
        for (int i=0; i<dimension; i++) {
            if (ind[i] < 0 || board_size[i] <= ind[i]) {
                rev = false;
                break;
            }
        }
        return rev;
    }
    template<typename... Arg> bool in_board(Arg... ind) {
        int count = 0;
        for (ll i : initializer_list<ll>{ind...}) {
            if (count >= dimension) return false;
            if (i < 0 || board_size[count] <= i) {
                return false;
            }
            count++;
        }
        return true;
    }
};
#endif //COMPETITIVE_HELPER_BOARD_HPP