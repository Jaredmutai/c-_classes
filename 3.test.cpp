#include <iostream>
#include <string>
using namespace std;

class TEST {
private:
    int TestCode;
    string Description;
    int NoCandidate;
    int CenterReqd;
    int CALCNTR() {
        return (NoCandidate/100 + 1);
    }
public:
    void SCHEDULE() {
        cout << "Enter Test Code: ";
        cin >> TestCode;
        cout << "Enter Description: ";
        cin.ignore();
        getline(cin, Description);
        cout << "Enter Number of Candidates: ";
        cin >> NoCandidate;
        CenterReqd = CALCNTR();
    }
    void DISPTEST() {
        cout << "Test Code: " << TestCode << endl;
        cout << "Description: " << Description << endl;
        cout << "Number of Candidates: " << NoCandidate << endl;
        cout << "Centers Required: " << CenterReqd << endl;
    }
};

int main() {
    TEST t;
    t.SCHEDULE();
    t.DISPTEST();
    return 0;
}