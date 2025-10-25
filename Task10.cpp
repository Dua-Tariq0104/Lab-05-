#include <iostream>
using namespace std;

int main() {
    double total_calories;
    double fat_grams;
    double calories_from_fat;
    double fat_percentage;

    cout << "Enter the total number of calories in the food: ";
    cin >> total_calories;

    while (total_calories < 0) {
        cout << "Error: Calories cannot be less than 0. Please re-enter: ";
        cin >> total_calories;
    }

    cout << "Enter the number of fat grams in the food: ";
    cin >> fat_grams;

    while (fat_grams < 0) {
        cout << "Error: Fat grams cannot be less than 0. Please re-enter: ";
        cin >> fat_grams;
    }

    calories_from_fat = fat_grams * 9;

    if (total_calories != 0 && calories_from_fat > total_calories) {
        cout << "Error: The number of calories from fat (" << calories_from_fat << ") cannot be greater than the total number of calories (" << total_calories << ")." << endl;
        cout << "Either the calories or fat grams were incorrectly entered." << endl;
    } else if (total_calories == 0) {
        cout << "Cannot calculate a percentage: Total calories entered is 0." << endl;
    } else {
        fat_percentage = (calories_from_fat / total_calories) * 100;

        cout << "Percentage of calories from fat: " << fat_percentage << "%" << endl;

        if (fat_percentage < 30) {
            cout << "This food is low in fat." << endl;
        }
    }

    return 0;
}
