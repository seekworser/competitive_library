#pragma once
#include "competitive/std/std.hpp"
namespace splay {
    template <typename T> struct SplayTree {
        struct node {
            T val;
            node* left;
            node* right;
            node() = default;
            node(T val, node* left, node* right) : val(val), left(left), right(right) {};
        };
        node* root;
        int size;
        SplayTree() : root(&NIL), size(0) {};
        ~SplayTree() { clear(); }

        void insert(T x) {
            size++;
            if (root == &NIL) {
                root = new node(x, &NIL, &NIL);
                return;
            }
            root = splay(x, root);
            node* rootn = new node(x, &NIL, &NIL);
            if (x == root->val) return;
            if (x < root->val) {
                rootn->right = root;
                rootn->left = root->left;
                root->left = &NIL;
                root = rootn;
            } else {
                rootn->left = root;
                rootn->right = root->right;
                root->right = &NIL;
                root = rootn;
            }
            return;
        }

        void erase(T x) {
            if (root == &NIL) {
                return;
            }
            root = splay(x, root);
            if (x != root->val) return;
            size--;
            if (root->left == &NIL) {
                node* newroot = root->right;
                delete root;
                root = newroot;
                return;
            }
            node* newroot = splay(x, root->left);
            newroot->right = root->right;
            delete root;
            root = newroot;
            return;
        }

        bool contains(T x) {
            if (root == &NIL) {
                return false;
            }
            root = splay(x, root);
            return root->val == x;
        }

        void clear() {
            clear_subtree(root);
            size = 0;
            root = &NIL;
            return;
        }

        friend std::ostream& operator<<(std::ostream& os, const SplayTree<T>& st) {
            auto dfs = [&] (auto self, SplayTree<T>::node* n, T par) -> void {
                if (n == &st.NIL) return;
                T lval = T();
                T rval = T();
                if (n->left != &st.NIL) lval = n->left->val;
                if (n->right != &st.NIL) rval = n->right->val;
                os << n->val << " -> [" << lval << ',' << rval << ']' << '\n';
                self(self, n->left, n->val);
                self(self, n->right, n->val);
                return;
            };
            dfs(dfs, st.root, T());
            return os;
        };

        private:
        node NIL;
        node* rotate_right(node* n) {
            node* lnode = n->left;
            n->left = lnode->right;
            lnode->right = n;
            return lnode;
        };
        node* rotate_left(node* n) {
            node* rnode = n->right;
            n->right = rnode->left;
            rnode->left = n;
            return rnode;
        };
        node* splay(T x, node* n) {
            node newwnode(T(), &NIL, &NIL);
            node* wnode = &newwnode;
            node* rnode = &newwnode;
            node* lnode = &newwnode;
            while (true) {
                if (n->val == x) {break;}
                else if (x < n->val) {
                    if (n->left == &NIL) break;
                    if (x < n->left->val) {
                        n = rotate_right(n);
                        if (n->left == &NIL) break;
                    }
                    rnode->left = n;
                    rnode = n;
                    n = n->left;
                } else {
                    if (n->right == &NIL) break;
                    if (x > n->right->val) {
                        n = rotate_left(n);
                        if (n->right == &NIL) break;
                    }
                    lnode->right = n;
                    lnode = n;
                    n = n->right;
                }
            }
            rnode->left = n->right;
            lnode->right = n->left;
            n->left = wnode->right;
            n->right = wnode->left;
            return n;
        }
        void clear_subtree(node* n) {
            if (n == &NIL) return;
            clear_subtree(n->left);
            clear_subtree(n->right);
            delete n;
            return;
        }
    };
};
template<typename T> using SplayTree = splay::SplayTree<T>;
/**
 * @brief Splay木
 * @docs docs/data_structure/splay_tree.md
 */