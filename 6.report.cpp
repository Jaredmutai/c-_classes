#include <iostream>
using namespace std;

class REPORT {
private:
    int adno;
    char name[20];
    float marks[5];
    float average;
    void GETAVG() {
        float sum = 0;
        for(int i = 0; i < 5; i++)
            sum += marks[i];
        average = sum/5;
    }
public:
    void READINFO() {
        cout << "Enter admission number: ";
        cin >> adno;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter marks for 5 subjects:\n";
        for(int i = 0; i < 5; i++) {
            cout << "Subject " << i+1 << ": ";
            cin >> marks[i];
        }
        GETAVG();
    }
    void DISPLAYINFO() {
        cout << "Admission Number: " << adno << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: ";
        for(int i = 0; i < 5; i++)
            cout << marks[i] << " ";
        cout << "\nAverage: " << average << endl;
    }
};

int main() {
    REPORT r;
    r.READINFO();
    r.DISPLAYINFO();
    return 0;
}