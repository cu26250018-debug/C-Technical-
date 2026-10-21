#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Aayush Kumar | CU ID: CU26250018\n";
    cout << "\nScientific Calculator\n";
    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    cout << "5. Square root\n6. Power (x^y)\n7. Sine\n8. Cosine\n";
    int choice;
    double a, b;

    cout << "Choose an operation: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result = " << a + b << '\n';
            break;
        case 2:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result = " << a - b << '\n';
            break;
        case 3:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result = " << a * b << '\n';
            break;
        case 4:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            if (b == 0)
                cout << "Error: division by zero is not allowed.\n";
            else
                cout << "Result = " << a / b << '\n';
            break;
        case 5:
            cout << "Enter a number: ";
            cin >> a;
            if (a < 0)
                cout << "Error: square root of a negative number is not real.\n";
            else
                cout << "Result = " << sqrt(a) << '\n';
            break;
        case 6:
            cout << "Enter base and exponent: ";
            cin >> a >> b;
            cout << "Result = " << pow(a, b) << '\n';
            break;
        case 7:
            cout << "Enter angle in degrees: ";
            cin >> a;
            cout << "sin(" << a << ") = " << sin(a * acos(-1.0) / 180.0) << '\n';
            break;
        case 8:
            cout << "Enter angle in degrees: ";
            cin >> a;
            cout << "cos(" << a << ") = " << cos(a * acos(-1.0) / 180.0) << '\n';
            break;
        default:
            cout << "Invalid choice.\n";
    }

    return 0;
}
