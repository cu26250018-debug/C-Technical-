/*
Name: Aayush Kumar
CU ID: CU26250018
Question: Find all roots of a quadratic equation ax^2 + bx + c = 0.
*/
#include <iostream>
#include <cmath>
#include <complex>
#include <iomanip>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        if (b == 0) {
            if (c == 0) cout << "Infinitely many solutions.\n";
            else cout << "No solution.\n";
        } else {
            cout << "This is a linear equation. Root = " << -c / b << '\n';
        }
        return 0;
    }

    double discriminant = b * b - 4 * a * c;
    cout << fixed << setprecision(2);

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Two distinct real roots: " << root1 << " and " << root2 << '\n';
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        cout << "Two equal real roots: " << root << " and " << root << '\n';
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * abs(a));
        cout << "Two complex roots: " << realPart << " + " << imaginaryPart
             << "i and " << realPart << " - " << imaginaryPart << "i\n";
    }
    return 0;
}
