/**
 * classes:
 * composition
 */
#include <iostream>
#include <string>
using namespace std;

class Birthday {
    private:
        int month;
        int day;
        int year;
    public:
        Birthday(int m, int d, int y) : month(m), day(d), year(y) {}

        void printDate() {
            cout << month << "/" << day << "/" << year << endl;
        }
};

class Person {
    private:
        string name;
        Birthday bd;
    public:
        Person(string n, Birthday b) : name(n), bd(b) {}
        void printInfo() {
            cout << name << endl;
            bd.printDate();
        } 
};

int main() {
    Birthday bd(2, 21, 1985);
    Person p("David", bd);
    p.printInfo();
}