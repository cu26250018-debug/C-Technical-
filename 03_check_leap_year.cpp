/*
Name: Aayush Kumar
CU ID: CU26250018
Question: Check whether a year is a leap year.
*/
#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if (year <= 0) {
        cout << "Please enter a positive year.\n";
    } else if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        cout << year << " is a leap year.\n";
    } else {
        cout << year << " is not a leap year.\n";
    }
    return 0;
}
