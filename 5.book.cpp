#include <iostream>
using namespace std;

class BOOK {
private:
    int BOOK_NO;
    char BOOKTITLE[20];
    float PRICE;
    float TOTAL_COST(int N) {
        return PRICE * N;
    }
public:
    void INPUT() {
        cout << "Enter Book Number: ";
        cin >> BOOK_NO;
        cout << "Enter Book Title: ";
        cin >> BOOKTITLE;
        cout << "Enter Price: ";
        cin >> PRICE;
    }
    void PURCHASE() {
        int n;
        cout << "Enter number of copies: ";
        cin >> n;
        float total = TOTAL_COST(n);
        cout << "Total Cost: " << total << endl;
    }
};

int main() {
    BOOK b;
    b.INPUT();
    b.PURCHASE();
    return 0;
}