#include <iostream>
#include <string>
using namespace std;

class Flight {
private:
    int FlightNo;
    string Destination;
    float Distance;
    float Fuel;
    void CALFUEL() {
        if(Distance <= 1000)
            Fuel = 500;
        else if(Distance <= 2000)
            Fuel = 1100;
        else
            Fuel = 2200;
    }
public:
    void FEEDINFO() {
        cout << "Enter Flight Number: ";
        cin >> FlightNo;
        cout << "Enter Destination: ";
        cin >> Destination;
        cout << "Enter Distance: ";
        cin >> Distance;
        CALFUEL();
    }
    void SHOWINFO() {
        cout << "Flight Number: " << FlightNo << endl;
        cout << "Destination: " << Destination << endl;
        cout << "Distance: " << Distance << endl;
        cout << "Fuel: " << Fuel << endl;
    }
};

int main() {
    Flight f;
    f.FEEDINFO();
    f.SHOWINFO();
    return 0;
}