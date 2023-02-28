#include "competitive/std/std.hpp"
#include "competitive/math/f2.hpp"
#include "competitive/std/io.hpp"
int main() {
    cout << "Constructor" << "\n";
    {
        F2 a(true);
        cout << a << endl;
        a = false;
        cout << a << endl;
        a = 0;
        cout << a << endl;
        a = 1;
        cout << a << endl;
        a = 2;
        cout << a << endl;
        a = 0LL;
        cout << a << endl;
        a = -1LL;
        cout << a << endl;
        a = -2LL;
        cout << a << endl;
    }
    cout << "Operations" << "\n";
    {
        F2 a(true), b(false);
        cout << a + a << endl;
        cout << a + b << endl;
        cout << b + a << endl;
        cout << b + b << endl;
        cout << a - a << endl;
        cout << a - b << endl;
        cout << b - a << endl;
        cout << b - b << endl;
        cout << a * a << endl;
        cout << a * b << endl;
        cout << b * a << endl;
        cout << b * b << endl;
        cout << a / a << endl;
        cout << b / a << endl;
    }
    cout << "Increment, Decrement" << "\n";
    {
        F2 a(true);
        cout << a << endl;
        ++a;
        cout << a << endl;
        ++a;
        cout << a << endl;
        --a;
        cout << a << endl;
        --a;
        cout << a << endl;
        a++;
        cout << a << endl;
        a++;
        cout << a << endl;
        a--;
        cout << a << endl;
        a--;
        cout << a << endl;
    }
    cout << "Comparison" << "\n";
    {
        F2 a(true);
        F2 b(false);
        cout << (a == a) << endl;
        cout << (a == b) << endl;
        cout << (b == a) << endl;
        cout << (b == b) << endl;
        cout << (a != a) << endl;
        cout << (a != b) << endl;
        cout << (b != a) << endl;
        cout << (b != b) << endl;
    }
}