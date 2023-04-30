#pragma once
#include "competitive/std/std.hpp"
template<typename T> struct SortedSet {
    protected:
    static const int BUCKET_RATIO = 50;
    static const int REBUILD_RATIO = 170;

    public:
    vector<vector<T>> a;
    protected:
    int _sz;
    void build(const vector<T> &ai) {
        _sz = sz(ai);
        int bucket_size = max<int>(sqrtll(_sz / BUCKET_RATIO), 1);
        a = vector<vector<T>>(bucket_size);
        rep(i, bucket_size) {
            ll s = _sz * i / bucket_size;
            ll t = min<int>(_sz * (i+1) / bucket_size, _sz);
            rep(j, s, t) a[i].push_back(ai[j]);
        }
    }
    void build() {
        vector<T> ai;
        rep(i, sz(a)) rep(j, sz(a[i])) ai.push_back(a[i][j]);
        build(ai);
    }
    int find_bucket(T x) {
        if (sz(a) == 0) return 0;
        rep(i, sz(a)) {
            if (x <= a[i].back()) return i;
        }
        return sz(a) - 1;
    }

    struct Iterator {
        SortedSet<T>& ss;
        int p1, p2;
        Iterator() = delete;
        Iterator(SortedSet<T>& _ss, int _p1, int _p2) : ss(_ss), p1(_p1), p2(_p2) {}
        const T& operator*() const { return ss.a[p1][p2]; }
        Iterator& operator++() {
            assert(p1 != sz(ss.a));
            p2++;
            if (p2 == sz(ss.a[p1])) {p1++; p2 = 0;}
            return *this;
        }
        Iterator& operator--() {
            assert(p1 != 0 || p2 != 0);
            p2--;
            if(p2 < 0) {p1--; p2 = sz(ss.a[p1]) - 1;}
            return *this;
        }
        Iterator operator++(int) { Iterator iter(*this); ++(*this); return iter;}
        Iterator operator--(int) { Iterator iter(*this); --(*this); return iter;}
        Iterator& operator+=(int rhs) {
            p2 += rhs;
            while (p1 < sz(ss.a) && p2 >= sz(ss.a[p1])) { p2 -= sz(ss.a[p1++]); }
            return *this;
        }
        Iterator& operator-=(int rhs) {
            p2 -= rhs;
            while (p1 >= 0 && p2 < 0) { p2 += sz(ss.a[--p1]); }
            return *this;
        }
        friend Iterator operator+(const Iterator& iter, int x) { return Iterator(iter) += x; }
        friend Iterator operator+(int x, const Iterator& iter) { return Iterator(iter) += x; }
        friend Iterator operator-(const Iterator& iter, int x) { return Iterator(iter) -= x; }
        friend Iterator operator-(int x, const Iterator& iter) { return Iterator(iter) -= x; }
        friend int operator-(const Iterator& lhs, const Iterator& rhs) {
            int rev = 0;
            int lp1 = lhs.p1;
            int lp2 = lhs.p2;
            while (rhs.p1 > lp1) { lp2 -= sz(lhs.ss.a[lp1++]); }
            while (rhs.p1 < lp1) { lp2 += sz(lhs.ss.a[--lp1]); }
            return lp2 - rhs.p2;
        }
        bool operator==(const Iterator& iter) { return this->p1 == iter.p1 && this->p2 == iter.p2; }
        bool operator!=(const Iterator& iter) { return !(*this == iter); }
        Iterator& operator=(const Iterator& iter) { ss = iter.ss; p1 = iter.p1; p2 = iter.p2; return *this; }
    };

    public:
    SortedSet() = default;
    template<typename Iterable>
    explicit SortedSet(const Iterable& _a) : _sz(sz(_a)) {
        vector<T> ai(_sz);
        auto iter = _a.begin();
        rep(i, _sz) ai[i] = *iter++;
        sort(all(ai));
        uniq(ai);
        build(ai);
    };
    explicit SortedSet(int n) : _sz(n) {
        vector<T> ai(n);
        build(ai);
    }
    explicit SortedSet(ll n) : _sz(n) {
        vector<T> ai(n);
        build(ai);
    }
    template<typename Iterator>
    SortedSet(const Iterator& begin, const Iterator end) {
        vector<T> ai;
        auto iter = begin;
        while(iter != end) ai.push_back(*iter++);
        size = sz(ai);
        sort(all(ai));
        build(ai);
    };

    int size() const {return _sz;}
    Iterator begin() {return Iterator(*this, 0, 0);}
    Iterator end() {return Iterator(*this, sz(a), 0);}

    bool insert(T x) {
        if (_sz == 0) {
            a = {{x}};
            _sz++;
            return true;
        }
        int pos = find_bucket(x);
        auto iter = std::lower_bound(all(a[pos]), x);
        if (iter != a[pos].end() && *iter == x) return false;
        a[pos].insert(iter, x);
        _sz++;
        if (sz(a[pos]) > sz(a) * REBUILD_RATIO) build();
        return true;
    }

    bool erase(T x) {
        if (_sz == 0) return false;
        int pos = find_bucket(x);
        auto iter = std::lower_bound(all(a[pos]), x);
        if (iter == a[pos].end() && *iter != x) return false;
        a[pos].erase(iter);
        _sz--;
        if (sz(a[pos]) == 0) build();
        return true;
    }

    bool contains(T x) {
        if (_sz == 0) return false;
        int pos = find_bucket(x);
        auto iter = lower_bound(all(a[pos]), x);
        return iter != a[pos].end() && *iter == x;
    }

    T operator[](int x) {
        assert(0 <= x && x < _sz);
        rep(i, sz(a)) {
            if (x < sz(a[i])) return a[i][x];
            x -= sz(a[i]);
        }
        return -1;
    }
    Iterator lower_bound(T x) {
        rep(i, sz(a)) {
            if (a[i].back() >= x) {
                auto iter = std::lower_bound(all(a[i]), x);
                return Iterator(*this, i, distance(a[i].begin(), iter));
            }
        }
        return end();
    }
    Iterator upper_bound(T x) {
        rep(i, sz(a)) {
            if (a[i].back() > x) {
                auto iter = std::upper_bound(all(a[i]), x);
                return Iterator(*this, i, distance(a[i].begin(), iter));
            }
        }
        return end();
    }
};
template<typename T> struct SortedMultiSet : public SortedSet<T> {
    using SortedSet<T>::SortedSet;
    template<typename Iterable>
    explicit SortedMultiSet(const Iterable& _a) {
        SortedSet<T>::_sz = sz(_a);
        vector<T> ai(SortedSet<T>::_sz);
        auto iter = _a.begin();
        rep(i, SortedSet<T>::_sz) ai[i] = *iter++;
        sort(all(ai));
        SortedSet<T>::build(ai);
    };

    bool insert(T x) {
        if (SortedSet<T>::_sz == 0) {
            SortedSet<T>::a = {{x}};
            SortedSet<T>::_sz++;
            return true;
        }
        int pos = SortedSet<T>::find_bucket(x);
        auto iter = std::lower_bound(all(SortedSet<T>::a[pos]), x);
        SortedSet<T>::a[pos].insert(iter, x);
        SortedSet<T>::_sz++;
        if (sz(SortedSet<T>::a[pos]) > sz(SortedSet<T>::a) * SortedSet<T>::REBUILD_RATIO) SortedSet<T>::build();
        return true;
    }
};
template <typename T> ostream &operator<<(ostream &os, SortedSet<T> &st) { auto itr = st.begin(); for (int i = 0; i < (int)st.size(); i++) { os << *itr << (i + 1 != (int)st.size() ? " " : ""); itr++; } return os; }
template <typename T> ostream &operator<<(ostream &os, SortedMultiSet<T> &st) { auto itr = st.begin(); for (int i = 0; i < (int)st.size(); i++) { os << *itr << (i + 1 != (int)st.size() ? " " : ""); itr++; } return os; }
/**
 * @brief sorted_set
 * @docs docs/data_structure/sorted_set.md
 */
