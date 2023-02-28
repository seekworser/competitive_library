#include "competitive/std/std.hpp"
#include "competitive/math/bit.hpp"
#include "competitive/std/io.hpp"
using namespace bit;
#define printnv(...) printnv_func(0, #__VA_ARGS__, __VA_ARGS__) // debug print
template <typename T>
void printnv_func(int i, T name) {
    (void)i;
    (void)name;
    cout << endl;
}
template <typename T1, typename T2, typename... T3>
void printnv_func(int i, const T1 &name, const T2 &a, const T3 &...b) {
  for ( ; name[i] != ',' && name[i] != '\0'; i++ ) cout << name[i];
  cout << ":" << a << " ";
  printnv_func(i + 1, name, b...);
}
int main() {
    cout << "lb" << "\n";
    {
        printnv(lb(0));
        printnv(lb(1));
        printnv(lb(2));
        printnv(lb(10));
        printnv(lb(15));
        printnv(lb(1068));
        printnv(lb(6981));
        printnv(lb(-1));
        printnv(lb(-10));
        printnv(lb(-277));
        printnv(lb(-99637));
        printnv(lb(INT_MAX)); // 2147483647
        printnv(lb(INT_MIN)); // -2147483648
        printnv(lb(0LL));
        printnv(lb(1LL));
        printnv(lb(2LL));
        printnv(lb(10LL));
        printnv(lb(15LL));
        printnv(lb(1068LL));
        printnv(lb(6981LL));
        printnv(lb(9671836294871LL));
        printnv(lb(8274639184756LL));
        printnv(lb(-1LL));
        printnv(lb(-10LL));
        printnv(lb(-277LL));
        printnv(lb(-99637LL));
        printnv(lb(-2847391650019LL));
        printnv(lb(82736591827627LL));
        printnv(lb(LLONG_MAX)); // 9223372036854775807
        printnv(lb(LLONG_MIN)); // -9223372036854775808
    }
}