#ifndef COMPETITIVE_GRAPH_GRAPH_HPP
#define COMPETITIVE_GRAPH_GRAPH_HPP 1
#include <competitive/std/std.hpp>
template <class Cost> class Graph{
    public:
    struct Edge {
        ll to;
        Cost cost;
        Edge(ll _to, Cost _cost) : to(_to), cost(_cost) {};
    };
    vector<vector<Edge>> adjacent_set;
    vector<vector<Edge>> adjacent_set_inv;
    ll n;
    Graph() {};
    Graph(int _n) : adjacent_set(_n), adjacent_set_inv(_n), n(_n) {};
    Graph(ll _n) : adjacent_set(_n), adjacent_set_inv(_n), n(_n) {};
    // Graph(ll _n) : n(0) {this->add_node(_n);};

    void add_node(ll _n) {
        rep(i, _n) {
            adjacent_set.push_back(vector<Edge>());
            adjacent_set_inv.push_back(vector<Edge>());
        }
        n += _n;
    }
    void add_edge(ll from, ll to, Cost c) {
        assert(0 <= from && from < sz(adjacent_set) && 0 <= to && to < sz(adjacent_set));
        adjacent_set[from].emplace_back(to, c);
        adjacent_set_inv[to].emplace_back(from, c);
    }
};
template<typename Cost> inline ostream &operator<<(ostream& os, Graph<Cost> G) {
    for (ll i; i < G.n; i++) {
        ll count = 0;
        for (typename Graph<Cost>::Edge e : G.adjacent_set[i]) {
            count++;
            os << i << " " << e.to << " " << e.cost;
            if (i != G.n - 1 || count != sz(G.adjacent_set[i]) - 1) os << endl;
        }
    }
    return os;
};
#endif // COMPETITIVE_GRAPH_GRAPH_HPP