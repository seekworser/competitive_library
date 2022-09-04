#ifndef COMPETITIVE_TREE_DIAMETER_HPP
#define COMPETITIVE_TREE_DIAMETER_HPP 1
#include <competitive/std/std.hpp>
#include <competitive/tree/depth.hpp>
// return {diam, u, v} where diam: diameter, u, v: endpoints.
template<class Cost> tuple<Cost, int, int> diameter(const Graph<Cost>& tree){
    auto [_, u] = depth(tree, 0);
    auto [diam, v] = depth(tree, u);
    if (u > v) swap(u, v);
    return {diam, u, v};
}
#endif // COMPETITIVE_TREE_DIAMETER_HPP