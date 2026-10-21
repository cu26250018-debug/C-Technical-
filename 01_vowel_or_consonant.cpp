/*
Name: Aayush Kumar
CU ID: CU26250018
Question: Check whether an English character is a vowel or consonant.
*/
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;
    cout << "Enter an English character: ";
    cin >> ch;

    if (!isalpha(static_cast<unsigned char>(ch))) {
        cout << "Invalid input: please enter an English alphabet character.\n";
        return 0;
    }

    char lower = static_cast<char>(tolower(static_cast<unsigned char>(ch)));
    if (lower == 'a' || lower == 'e' || lower == 'i' ||
        lower == 'o' || lower == 'u') {
        cout << ch << " is a vowel.\n";
    } else {
        cout << ch << " is a consonant.\n";
    }
    return 0;
}
