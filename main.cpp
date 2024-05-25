#include <iostream>
#include<cmath>
using namespace std;

void Discount(int amount) {
    cout << "Enter your Bill Amount: ";
    cin >> amount;

    float disAmount;

    if(amount >=5000) {
        disAmount = amount - amount*(20/100.0);
        cout << disAmount << endl;
    } else {
        if (2000 <= amount < 5000) {
            disAmount = amount - amount * (10 / 100.0);
            cout << disAmount << endl;
        } else if (amount < 2000) {
            disAmount = amount - amount * (5 / 100.0);
            cout << disAmount << endl;
        }
    }
}
int main() {
    int amount;
    Discount(amount);
    return 0;
}