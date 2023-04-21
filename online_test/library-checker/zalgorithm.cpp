#define PROBLEM "https://judge.yosupo.jp/problem/zalgorithm"
#include "competitive/std/std.hpp"
#include "competitive/string/z_algorithm.hpp"
#include "competitive/std/io.hpp"
int main() {
    string s;
    input(s);
    print(z_algorithm(s));
}