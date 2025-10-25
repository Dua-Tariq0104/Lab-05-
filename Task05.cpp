#include <iostream>
using namespace std;

int main() {
    int num1 = 247;
    int num2 = 129;
    int answer;
    
    cout << "  " << num1 << endl;
    cout << "+ " << num2 << " = ";
    cin >> answer;
    
    if (answer == num1 + num2)
        cout << "Congratulations! That's correct." << endl;
    else
        cout << "Incorrect. The correct answer is " << num1 + num2 << "." << endl;

    return 0;
}
