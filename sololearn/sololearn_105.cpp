/**
 * working with files
 * check if the file is open
 * writing to the file
 */
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream myFile("test2.txt");

    if(myFile.is_open()) {
        myFile << "This is so awesome...!!!\n";
    } else {
        cout << "Something went wrong" << endl;
    }
    myFile.close();

    return 0;
}