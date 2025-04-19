/**
 * file handling
 * reading from file
 */
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream myFileO("test3.txt");

    myFileO << "This is cool!!!!\n";
    myFileO.close();

    string line;
    ifstream myFile("test3.txt");
    while(getline(myFile, line)) {
        cout << line << '\n';
    }
    myFile.close();
}