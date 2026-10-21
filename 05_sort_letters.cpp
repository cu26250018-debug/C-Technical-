#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    cout << "Aayush Kumar | CU ID: CU26250018\n";

    string text;
    cout << "Enter a string: ";
    getline(cin, text);

    // Sorts all characters, including spaces and punctuation.
    sort(text.begin(), text.end());

    cout << "Sorted string: " << text << '\n';
    return 0;
}
