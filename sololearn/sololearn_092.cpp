/**
 * classes:
 * inheritance,
 * contructor and destructor of base class re not inherited by derived class.
 */
#include <iostream>
using namespace std;

class Mother {
    public:
        Mother() {
            cout << "Mother ctor" << endl;
        }
        ~Mother() {
            cout << "Mother dtor" << endl;
        }
};

class Daughter: public Mother {
    public:
        Daughter() {
            cout << "Daughter ctor" << endl;
        }
        ~Daughter() {
            cout << "Daughter dtor" << endl;
        }
};

int main() {
    Daughter m;
}