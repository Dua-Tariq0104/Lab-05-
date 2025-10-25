#include <iostream>
using namespace std;

int main() {
    int units;
    double price = 99.0, discount = 0.0, total;

    cout << "Enter number of units sold: ";
    cin >> units;

    if (units <= 0) {
        cout << "Invalid number of units" << endl;
        return 0;
    }

    if (units >= 100)
        discount = 0.50;
    else if (units >= 50)
        discount = 0.40;
    else if (units >= 20)
        discount = 0.30;
    else if (units >= 10)
        discount = 0.20;

    total = units * price * (1 - discount);
    cout << "Total cost: $" << total << endl;

    return 0;
}
