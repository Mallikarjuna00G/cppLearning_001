/**
 * classes
 * encapsulation
 */
#include <iostream>
#include <string>
using namespace std;

class myClass {
    public:
        string name;
};

int main() {
    myClass myObj;
    myObj.name = "Sololearn";
    cout << myObj.name;
}