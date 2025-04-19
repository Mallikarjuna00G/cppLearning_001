/**
 * working with files
 */
#include <fstream>
using namespace std;

int main() {
    ofstream myFile;
    myFile.open("text.txt");
    myFile << "Hello there... This is awesome";
    myFile.close();
}