#ifndef COMPETITIVE_GRAPH_GRAPH_HPP
#define COMPETITIVE_GRAPH_GRAPH_HPP 1
#include <comp/std/std.hpp>
#include <boost/functional/hash.hpp>
#include <functional>

template <class Node, class Cost> class Graph{
    public:
    typedef unordered_set<Node, boost::hash<Node>> node_set_t;
    typedef unordered_map<Node, node_set_t> adjacent_set_t;
    typedef pair<Node, Node> node_pair_t;
    typedef unordered_map<node_pair_t, Cost, boost::hash<node_pair_t>> edge_set_t;
    node_set_t node_set;
    adjacent_set_t adjacent_set;
    adjacent_set_t adjacent_set_inv;
    edge_set_t edge_set;
    Graph() {};
    Graph(vector<Node> &vn) {
        rep(i, vn.size()) {
            node_set.insert(vn[i]);
            adjacent_set[vn[i]] = node_set_t();
        }
    };
    Graph(int n) {vector<int> vn(n); rep(i, n) vn[i] = i; new (this)Graph(vn);};
    Graph(ll n) {vector<ll> vn(n); rep(i, n) vn[i] = i; new (this)Graph(vn);};

    void add_node(Node n) {
        if (node_set.count(n) == 0){
            node_set.insert(n);
            adjacent_set[n] = node_set_t();
        }
    }
    void add_edge(Node from, Node to, Cost c) {
        assert(node_set.count(from) == 1 && node_set.count(to) == 1);
        adjacent_set[from].insert(to);
        adjacent_set_inv[to].insert(from);
        edge_set[{from, to}] = c;
    }
};
template<typename Node, typename Cost> inline ostream &operator<<(ostream& os, Graph<Node, Cost> G) {
    ll count = 0;
    repe(e, G.edge_set) {
        typename Graph<Node, Cost>::node_pair_t node_pair = e.first;
        Cost cost = e.second;
        count++;
        os << node_pair.first << " " << node_pair.second << " " << cost;
        if (count != sz(G.edge_set)) os << endl;
    }
    return os;
};
#endif // COMPETITIVE_GRAPH_GRAPH_HPP