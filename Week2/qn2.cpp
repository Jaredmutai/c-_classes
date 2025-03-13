#include <fstream>
#include <iostream>
using namespace std;

int main() {
    string str = "Time is a great teacher but unfortunately it kills all its pupils. Berlioz";
    ofstream outFile("OUT.TXT");
    if(!outFile) {
        cout << "Unable to open file";
        return 1;
    }
    outFile << str;
    outFile.close();
    return 0;
}