#include <iostream>
using namespace std;

class student {
private:
    int admno;
    char sname[20];
    float eng, math, science;
    float total;
    float ctotal() {
        return eng + math + science;
    }
public:
    void Takedata() {
        cout << "Enter admission number: ";
        cin >> admno;
        cout << "Enter student name: ";
        cin >> sname;
        cout << "Enter English marks: ";
        cin >> eng;
        cout << "Enter Math marks: ";
        cin >> math;
        cout << "Enter Science marks: ";
        cin >> science;
        total = ctotal();
    }
    void Showdata() {
        cout << "Admission Number: " << admno << endl;
        cout << "Student Name: " << sname << endl;
        cout << "English: " << eng << endl;
        cout << "Math: " << math << endl;
        cout << "Science: " << science << endl;
        cout << "Total: " << total << endl;
    }
};

int main() {
    student s;
    s.Takedata();
    s.Showdata();
    return 0;
}