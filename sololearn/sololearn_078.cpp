/**
 * classes:
 * access modifiers
 */
#include <iostream>
#include <string>
using namespace std;

class myClass {
    private:
        string name;

    public:
        void setName(string x) {
            name = x;
        }

        string getName() {
            return name;
        }
};

int main() {
    myClass myObj;
    myObj.setName("John");
    cout << myObj.getName();
    
    return 0;
}