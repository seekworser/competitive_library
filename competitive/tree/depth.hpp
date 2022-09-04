#ifndef COMPETITIVE_TREE_DEPTH_HPP
#define COMPETITIVE_TREE_DEPTH_HPP 1
#include <competitive/std/std.hpp>
#include <competitive/graph/graph.hpp>
// return depth of the tree and deepest node number
template<class Cost> pair<Cost, int> depth(const Graph<Cost>& tree, int root, Cost identity=0) {
    vb seen(tree.n, false);
    Cost rev_d = identity;
    int rev_x = root;
    auto dfs = [&] (auto self, int x, int d) {
        if (seen[x]) return;
        seen[x] = true;
        repe(e, tree[x]) {
            self(self, e.to, d + e.cost);
        }
        if (chmax(rev_d, d)) rev_x = x;
        return;
    };
    dfs(dfs, root, 0);
    return {rev_d, rev_x};
}
#endif // COMPETITIVE_TREE_DEPTH_HPP