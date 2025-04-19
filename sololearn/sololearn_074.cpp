/**
 * functions:
 * overloading
 */
#include <iostream>
using namespace std;

void sum(int x, int y) {
    cout << x + y << endl;
}

void sum(double x, double y) {
    cout << x + y << endl;
}

int main() {
    sum(42, 31);
    sum(3.14, 5.66);
}