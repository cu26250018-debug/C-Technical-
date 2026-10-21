#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    cout << "Aayush Kumar | CU ID: CU26250018\n";
    cout << "CGPA Calculator\n";

    int n;
    cout << "Enter number of courses: ";
    cin >> n;

    if (n <= 0) {
        cout << "Number of courses must be greater than zero.\n";
        return 0;
    }

    vector<double> credits(n), gradePoints(n);
    double totalCredits = 0.0, totalWeightedPoints = 0.0;

    for (int i = 0; i < n; i++) {
        cout << "\nCourse " << i + 1 << " credit: ";
        cin >> credits[i];
        cout << "Course " << i + 1 << " grade point (0 to 10): ";
        cin >> gradePoints[i];

        if (credits[i] <= 0 || gradePoints[i] < 0 || gradePoints[i] > 10) {
            cout << "Invalid input. Credits must be positive and grade points must be 0 to 10.\n";
            return 0;
        }

        totalCredits += credits[i];
        totalWeightedPoints += credits[i] * gradePoints[i];
    }

    double cgpa = totalWeightedPoints / totalCredits;

    cout << fixed << setprecision(2);
    cout << "\nTotal credits: " << totalCredits << '\n';
    cout << "Total weighted grade points: " << totalWeightedPoints << '\n';
    cout << "CGPA: " << cgpa << '\n';
    cout << "\nNote: Enter grade points according to your university's grading rules.\n";

    return 0;
}
