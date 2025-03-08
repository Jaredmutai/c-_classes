#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;
public:
    void set(int f, float i) {
        feet = f;
        inches = i;
    }
    void disp() {
        cout << feet << " feet " << inches << " inches" << endl;
    }
    Distance add(Distance d) {
        Distance temp;
        temp.feet = feet + d.feet;
        temp.inches = inches + d.inches;
        if(temp.inches >= 12) {
            temp.feet++;
            temp.inches -= 12;
        }
        return temp;
    }
};

int main() {
    Distance d1, d2, d3;
    d1.set(5, 6.5);
    d2.set(3, 8.5);
    d3 = d1.add(d2);
    cout << "Distances:\n";
    cout << "D1: "; d1.disp();
    cout << "D2: "; d2.disp();
    cout << "Sum: "; d3.disp();
    return 0;
}