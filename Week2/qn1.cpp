#include <fstream>
using namespace std;

int main() {
    ofstream outFile("NOTES.TXT");
    if(!outFile) {
        cout << "Unable to open file";
        return 1;
    }
    for(int i = 1; i <= 100; i++) {
        outFile << i << endl;
    }
    outFile.close();
    return 0;
}