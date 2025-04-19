/**
 * Dynamic memory allocation
 */
#include <iostream>
using namespace std;

int main() {
    int size = 8;

    int *p = new int[size];

    p[0] = 128;
    p[1] = 888;
    p[2] = 9;

    cout << *(p + 1);
}