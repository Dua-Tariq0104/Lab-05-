#include <iostream>
#include <string>
using namespace std;

int main() {
    string color1, color2;
    cout << "Enter first primary color: ";
    cin >> color1;
    cout << "Enter second primary color: ";
    cin >> color2;

    if ((color1 != "red" && color1 != "blue" && color1 != "yellow") ||
        (color2 != "red" && color2 != "blue" && color2 != "yellow"))
        cout << "Error: Invalid color" << endl;
    else if ((color1 == "red" && color2 == "blue") || (color1 == "blue" && color2 == "red"))
        cout << "Purple" << endl;
    else if ((color1 == "red" && color2 == "yellow") || (color1 == "yellow" && color2 == "red"))
        cout << "Orange" << endl;
    else if ((color1 == "blue" && color2 == "yellow") || (color1 == "yellow" && color2 == "blue"))
        cout << "Green" << endl;
    else
        cout << "Same colors entered" << endl;

    return 0;
}
