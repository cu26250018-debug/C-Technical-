#include <iostream>
using namespace std;

int main() {
    cout << "Aayush Kumar | CU ID: CU26250018\n";

    int sum = 0;

    for (int i = 1; i <= 12; i++) {
        sum += i * i;
    }

    cout << "Sum of squares from 1 to 12 = " << sum << '\n';
    return 0;
}
