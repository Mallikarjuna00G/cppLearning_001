/**
 * classes
 * pointers
 * arrow operator
 */
#include <iostream>
using namespace std;

class MyClass {
    public:
        MyClass();
        void myPrint();
};

MyClass::MyClass() {
    cout << "constructor" << endl;
}

void MyClass::myPrint() {
    cout << "Hello" << endl;
}

int main() {
    MyClass obj;
    MyClass *ptr = &obj;
    ptr -> myPrint();
}