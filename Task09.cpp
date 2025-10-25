#include <iostream>
using namespace std;

int main() {
    double weight;
    double distance;
    double rate_per_500_miles;
    double total_charges;

    cout << "Enter the weight of the package in kilograms: ";
    cin >> weight;
    while (weight <= 0 || weight > 20) {
        cout << "Invalid weight. Weight must be greater than 0 kg and not more than 20 kg." << endl;
        cout << "Enter the weight of the package in kilograms: ";
        cin >> weight;
    }

    cout << "Enter the distance to be shipped in miles: ";
    cin >> distance;
    while (distance < 10 || distance > 3000) {
        cout << "Invalid distance. Distance must be between 10 miles and 3,000 miles." << endl;
        cout << "Enter the distance to be shipped in miles: ";
        cin >> distance;
    }

    if (weight <= 2.0) {
        rate_per_500_miles = 1.10;
    } else if (weight <= 6.0) {
        rate_per_500_miles = 2.20;
    } else if (weight <= 10.0) {
        rate_per_500_miles = 3.70;
    } else {
        rate_per_500_miles = 4.80;
    }

    double segments = ceil(distance / 500.0);

    total_charges = segments * rate_per_500_miles;

    cout << "Shipping Charges: $" << total_charges << endl;

    return 0;
}
