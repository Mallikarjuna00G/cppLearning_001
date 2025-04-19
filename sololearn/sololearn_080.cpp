/**
 * classes:
 * constructor parameters
 */
#include <iostream>
#include <string>
using namespace std;

class myClass {
    private:
        string name;
    public:
        myClass() {
            cout << "Hey";
        }

        myClass(string nm) {
            setName(nm);
        }

        void setName(string x) {
            name = x;
        }

        string getName() {
            return name;
        }
};

int main() {
    myClass myObj;
    myClass ob1("David");
    myClass ob2("Amy");

    cout << ob1.getName() << endl;
    cout << ob2.getName() << endl;
    return 0;
}