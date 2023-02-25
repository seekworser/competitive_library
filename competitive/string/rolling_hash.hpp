#ifndef COMPETITIVE_STRING_ROLLINGHASH_HPP
#define COMPETITIVE_STRING_ROLLINGHASH_HPP 1
#include <competitive/std/std.hpp>
using hash_t = unsigned long long;
using hash_vector_t = vector<hash_t>;
constexpr hash_t RHMOD = (1UL << 61) - 1;
constexpr hash_t RHR = 37;

namespace internal {
    const hash_t MASK30 = (1UL << 30) - 1;
    const hash_t MASK31 = (1UL << 31) - 1;
    const hash_t MASK61 = RHMOD;

    //mod 2^61-1を計算する関数
    hash_t CalcMod(hash_t x) {
        hash_t xu = x >> 61;
        hash_t xd = x & MASK61;
        hash_t res = xu + xd;
        if (res >= RHMOD) res -= RHMOD;
        return res;
    }

    //a*b mod 2^61-1を返す関数(最後にModを取る)
    hash_t Mul(hash_t a, hash_t b) {
        hash_t au = a >> 31;
        hash_t ad = a & MASK31;
        hash_t bu = b >> 31;
        hash_t bd = b & MASK31;
        hash_t mid = ad * bu + au * bd;
        hash_t midu = mid >> 30;
        hash_t midd = mid & MASK30;
        return CalcMod(au * bu * 2 + midu + (midd << 31) + ad * bd);
    }

    hash_t Pow(hash_t a, hash_t n) {
        hash_t res = 1;
        while (n > 0) {
            if (n & 1) res = Mul(res, a);
            a = Mul(a, a);
            n >>= 1;
        }
        return res;
    }
}

struct RollingHash {
    private:
    static bool initialized;
    static int hash_size;
    static vector<hash_t> base;
    static vector<hash_t> base_inv;

    public:
    vector<hash_vector_t> cum;
    template<typename T> RollingHash(vector<T> &a, int hash_size=3, ll maxa=1e9) {
        if(!initialized) (*this).init_base(hash_size, maxa);
        (*this).calc(a);
    };
    RollingHash(string &a, int hash_size=3, ll maxa=1e9) {
        if(!initialized) (*this).init_base(hash_size, maxa);
        (*this).calc(a);
    }

    void init_base(int hash_size, ll maxa) {
        (*this).hash_size = hash_size;
        random_device seed_gen;
        mt19937 engine(seed_gen());
        while (sz(base) < hash_size) {
            hash_t k = 0;
            hash_t b = internal::Pow(RHR, k);
            while (b <= maxa || gcd(RHMOD-1, b) != 1) {
                k = engine();
                b = internal::Pow(RHR, k);
            }
            base.push_back(b);
            base_inv.push_back(internal::Pow(b, RHMOD-2));
        }
        initialized = true;
    }

    template<typename T> void calc(vector<T> const &a) {
        cum = vector<hash_vector_t>(sz(a)+1, vector<hash_t>(hash_size, 0));
        rep(i, hash_size) {
            hash_t base_pow = 1;
            rep(j, sz(a)) {
                cum[j+1][i] = internal::CalcMod(cum[j][i] + internal::Mul(a[j], base_pow));
                base_pow = internal::Mul(base_pow, (*this).base[i]);
            }
        }
    }

    void calc(string const &a) {
        vector<char> _a(a.begin(), a.end());
        calc(_a);
    };

    vector<hash_t> query(int l, int r) {
        assert(l <= r);
        assert(0 <= l && r < sz(cum));
        vector<hash_t> rev(hash_size);
        rep(i, hash_size) {
            rev[i] = internal::Mul(cum[r][i] + RHMOD - cum[l][i], internal::Pow((*this).base_inv[i], l));
        }
        return rev;
    }

    template <class T> vector<hash_vector_t> calc_hash(vector<T> const &a, int k){
        assert(sz(a) >= k);
        vector<hash_vector_t> res(sz(a) - k + 1, vector<hash_t>(hash_size));
        vector<hash_t> base_pow(hash_size);
        rep(i, hash_size) base_pow[i] = internal::Pow(this->base[i], k);

        rep(i, hash_size) {
            // 先頭のハッシュ計算
            hash_t b = this->base[i];
            hash_t sh = 0;
            rep(j, k){ sh = internal::CalcMod(internal::Mul(sh, b) + a[j]); }
            res[0][i] = sh;

            // sをずらしてハッシュ値を更新
            rep(j, sz(a) - k){
                sh = internal::CalcMod(internal::Mul(sh, b) + a[j+k] + RHMOD - internal::Mul(a[j], base_pow[i]));
                res[j+1][i] = sh;
            }
        }
        return res;
    }

    vector<hash_vector_t> calc_hash(string const &a, int k) {
        vector<char> _a(a.begin(), a.end());
        return calc_hash(_a, k);
    };
};
bool RollingHash::initialized = false;
int RollingHash::hash_size = 3;
vector<hash_t> RollingHash::base(0);
vector<hash_t> RollingHash::base_inv(0);
#endif // COMPETITIVE_STRING_ROLLINGHASH_HPP