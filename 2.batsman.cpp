#include <iostream>
using namespace std;

class batsman {
private:
    int bcode;
    char bname[20];
    int innings, notout, runs;
    float batavg;
    void calcavg() {
        batavg = (innings - notout) ? (float)runs/(innings - notout) : 0;
    }
public:
    void readdata() {
        cout << "Enter batsman code: ";
        cin >> bcode;
        cout << "Enter batsman name: ";
        cin >> bname;
        cout << "Enter innings: ";
        cin >> innings;
        cout << "Enter not out: ";
        cin >> notout;
        cout << "Enter runs: ";
        cin >> runs;
        calcavg();
    }
    void displaydata() {
        cout << "Batsman Code: " << bcode << endl;
        cout << "Name: " << bname << endl;
        cout << "Innings: " << innings << endl;
        cout << "Not Out: " << notout << endl;
        cout << "Runs: " << runs << endl;
        cout << "Batting Average: " << batavg << endl;
    }
};

int main() {
    batsman b;
    b.readdata();
    b.displaydata();
    return 0;
}