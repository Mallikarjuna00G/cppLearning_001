/**
 * function templates
 */
#include <iostream>
using namespace std;

template <class T>
T sum(T a, T b) {
    return a + b;
}

int main() {
    int x = 7, y = 15;
    cout << sum(x, y) << endl;

    double p = 7.15, q = 15.54;
    cout << sum(p, q) << endl;
}