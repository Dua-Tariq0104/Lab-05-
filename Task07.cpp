#include <iostream>
using namespace std;

int main() {
    int books, points;

    cout << "Enter the number of books purchased: ";
    cin >> books;

    if (books == 0)
        points = 0;
    else if (books == 1)
        points = 5;
    else if (books == 2)
        points = 15;
    else if (books == 3)
        points = 30;
    else if (books >= 4)
        points = 60;
    else
        points = 0;

    cout << "Points awarded: " << points << endl;

    return 0;
}
