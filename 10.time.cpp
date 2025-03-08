#include <iostream>
using namespace std;

class TimeClass {  
private:
    int hours;
    int minutes;
public:
    void settime(int h, int m) {
        hours = h;
        minutes = m;
    }
    void showtime() {
        cout << hours << " hours " << minutes << " minutes" << endl;
    }
    TimeClass sum(TimeClass t) {  
        TimeClass temp;
        temp.hours = hours + t.hours;
        temp.minutes = minutes + t.minutes;
        if(temp.minutes >= 60) {
            temp.hours++;
            temp.minutes -= 60;
        }
        return temp;
    }
};

int main() {
    TimeClass t1, t2, t3;  
    t1.settime(2, 45);
    t2.settime(3, 30);
    t3 = t1.sum(t2);
    cout << "Times:\n";
    cout << "T1: "; t1.showtime();
    cout << "T2: "; t2.showtime();
    cout << "Sum: "; t3.showtime();
    return 0;
}