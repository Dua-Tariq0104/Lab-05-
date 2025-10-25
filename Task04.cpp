#include <iostream>
using namespace std;

int main() {
    int month, year, days;
    cout << "Enter a month (1-12): ";
    cin >> month;
    cout << "Enter a year: ";
    cin >> year;

    bool leap;
    if (year % 100 == 0)
        leap = (year % 400 == 0);
    else
        leap = (year % 4 == 0);

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        days = 31;
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        days = 30;
    else if (month == 2)
        days = leap ? 29 : 28;
    else {
        cout << "Invalid month" << endl;
        return 0;
    }

    cout << days << " days" << endl;
    return 0;
}
