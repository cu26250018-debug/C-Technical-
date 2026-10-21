#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    cout << "Aayush Kumar | CU ID: CU26250018\n";

    string text;
    cout << "Enter a string: ";
    getline(cin, text);

    reverse(text.begin(), text.end());

    cout << "Reversed string: " << text << '\n';
    return 0;
}
