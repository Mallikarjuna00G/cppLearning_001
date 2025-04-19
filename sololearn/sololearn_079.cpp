/**
 * classes:
 * constructor
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

        void setName(string x) {
            name = x;
        }

        string getName() {
            return name;
        }
};

int main() {
    myClass myObj;

    return 0;
}