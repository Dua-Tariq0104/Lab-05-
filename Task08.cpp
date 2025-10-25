#include <iostream>
using namespace std;

int main() {
    int age, activities;
    double fee, reduction;

    cout << "Enter age: ";
    cin >> age;
    if (age < 0) {
        cout << "Invalid age" << endl;
        return 0;
    }

    cout << "Enter number of activities attended: ";
    cin >> activities;
    if (activities < 0) {
        cout << "Invalid number of activities" << endl;
        return 0;
    }

    if (age <= 6) {
        fee = 5;
        reduction = 0.75;
    } else if (age <= 12) {
        fee = 10;
        reduction = 1.25;
    } else if (age <= 18) {
        fee = 15;
        reduction = 2;
    } else {
        fee = 25;
        reduction = 2;
    }

    fee -= reduction * activities;
    if (fee < 1)
        fee = 1;

    cout << "Membership fee: $" << fee << endl;

    return 0;
}
