/**
 * functions
 * default arguments
 */
#include <iostream>
using namespace std;

int area(int x, int y = 1) {
    return x * y;
}

int main() {
    cout << area(8, 5) << endl;
    cout << area(6) << endl;
}