/*
Name: Aayush Kumar
CU ID: CU26250018
Question: Perform array operations using switch case:
addition, subtraction, multiplication, largest/smallest element, and average.
For arithmetic operations, corresponding elements of two arrays are used.
*/
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the arrays (1 to 100): ";
    cin >> n;

    if (n < 1 || n > 100) {
        cout << "Invalid array size.\n";
        return 0;
    }

    vector<double> a(n), b(n);
    cout << "Enter " << n << " elements for the first array:\n";
    for (int i = 0; i < n; ++i) cin >> a[i];

    cout << "Enter " << n << " elements for the second array:\n";
    for (int i = 0; i < n; ++i) cin >> b[i];

    int choice;
    cout << "\n--- Array Operations Menu ---\n"
         << "1. Add corresponding elements\n"
         << "2. Subtract corresponding elements (first - second)\n"
         << "3. Multiply corresponding elements\n"
         << "4. Find largest and smallest element in the first array\n"
         << "5. Calculate average of the first array\n"
         << "Enter your choice: ";
    cin >> choice;

    cout << fixed << setprecision(2);
    switch (choice) {
        case 1:
            cout << "Addition results: ";
            for (int i = 0; i < n; ++i) cout << a[i] + b[i] << ' ';
            cout << '\n';
            break;
        case 2:
            cout << "Subtraction results: ";
            for (int i = 0; i < n; ++i) cout << a[i] - b[i] << ' ';
            cout << '\n';
            break;
        case 3:
            cout << "Multiplication results: ";
            for (int i = 0; i < n; ++i) cout << a[i] * b[i] << ' ';
            cout << '\n';
            break;
        case 4: {
            double largest = a[0], smallest = a[0];
            for (int i = 1; i < n; ++i) {
                if (a[i] > largest) largest = a[i];
                if (a[i] < smallest) smallest = a[i];
            }
            cout << "Largest element in first array: " << largest << '\n';
            cout << "Smallest element in first array: " << smallest << '\n';
            break;
        }
        case 5: {
            double sum = 0;
            for (double value : a) sum += value;
            cout << "Average of the first array: " << sum / n << '\n';
            break;
        }
        default:
            cout << "Invalid choice. Please select a number from 1 to 5.\n";
    }
    return 0;
}
