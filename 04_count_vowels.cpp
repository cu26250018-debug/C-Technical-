#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    cout << "Aayush Kumar | CU ID: CU26250018\n";

    string text;
    int vowelCount = 0;

    cout << "Enter a string: ";
    getline(cin, text);

    for (char ch : text) {
        ch = static_cast<char>(tolower(static_cast<unsigned char>(ch)));

        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u') {
            vowelCount++;
        }
    }

    cout << "Number of vowels: " << vowelCount << '\n';
    return 0;
}
