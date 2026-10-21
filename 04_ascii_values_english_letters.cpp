/*
Name: Aayush Kumar
CU ID: CU26250018
Question: Display ASCII values of English letters a-z and A-Z.
*/
#include <iostream>
using namespace std;

int main() {
    cout << "Lowercase English letters (a-z):\n";
    for (char ch = 'a'; ch <= 'z'; ++ch) {
        cout << ch << " = " << static_cast<int>(ch) << '\n';
    }

    cout << "\nUppercase English letters (A-Z):\n";
    for (char ch = 'A'; ch <= 'Z'; ++ch) {
        cout << ch << " = " << static_cast<int>(ch) << '\n';
    }
    return 0;
}
