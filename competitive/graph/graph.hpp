#pragma once
#include "competitive/std/std.hpp"
template <class Cost> struct Graph{
public:
    struct Edge {
        int to;
        Cost cost;
        Edge() {};
        Edge(int _to, Cost _cost) : to(_to), cost(_cost) {};
    };
    struct AdjacencyListRange{
        using iterator = typename std::vector<Edge>::const_iterator;
        iterator begi, endi;
        iterator begin() const { return begi; }
        iterator end() const { return endi; }
        int size() const { return (int)distance(begi, endi); }
        const Edge& operator[](int i) const { return begi[i]; }
    };
private:
public:
    vector<Edge> E;
    vector<int> I;
    int n;
    Graph() : n(0) {}
    Graph(int _n) : n(_n) {}
    Graph(int _n, const vector<int>& from, vector<int>& to, vector<Cost>& cost, bool rev = false) : n(_n) {
        vector<int> buf(n+1, 0);
        for(int i=0; i<(int)from.size(); i++){
            ++buf[from[i]];
            if (rev) ++buf[to[i]];
        }
        for(int i=1; i<=_n; i++) buf[i] += buf[i-1];
        E.resize(buf[n]);
        for(int i=(int)from.size()-1; i>=0; i--){
            int u = from[i];
            int v = to[i];
            Cost c = cost[i];
            E[--buf[u]] = Edge(v, c);
            if(rev) E[--buf[v]] = Edge(u, c);
        }
        I = move(buf);
    }
    AdjacencyListRange operator[](int u) const {
        return AdjacencyListRange{ E.begin() + I[u], E.begin() + I[u+1] };
    }
    int num_vertices() const { return n; }
    int size() const { return num_vertices(); }
    int num_edges() const { return E.size(); }
    // Graph reversed_edges() const {
    //     Graph res;
    //     int _n = res.n = n;
    //     std::vector<int> buf(n+1, 0);
    //     for(int v : E) ++buf[v];
    //     for(int i=1; i<=n; i++) buf[i] += buf[i-1];
    //     res.E.resize(buf[n]);
    //     for(int u=0; u<n; u++) for(int v : operator[](u)) res.E[--buf[v]] = u;
    //     res.I = std::move(buf);
    //     return res;
    // }
};
template <class T> ostream& operator<<(ostream& os, Graph<T> g) {
    bool first = true;
    rep(i, g.n) repe(e, g[i]) {
        if (first) first = false;
        else os << endl;
        os << i << "->" << e.to << ": " << e.cost;
    }
    return os;
}
/**
 * @brief graph.hpp
 * @docs docs/graph/graph.md
 */
