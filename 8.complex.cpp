#include <iostream>
using namespace std;

class complex {
private:
    float real;
    float imag;
public:
    void set(float r, float i) {
        real = r;
        imag = i;
    }
    void disp() {
        cout << real << " + " << imag << "i" << endl;
    }
    complex sum(complex c) {
        complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

int main() {
    complex c1, c2, c3;
    c1.set(3.5, 2.5);
    c2.set(2.5, 1.5);
    c3 = c1.sum(c2);
    cout << "Complex numbers:\n";
    cout << "C1: "; c1.disp();
    cout << "C2: "; c2.disp();
    cout << "Sum: "; c3.disp();
    return 0;
}