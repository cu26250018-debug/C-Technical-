#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Aayush Kumar | CU ID: CU26250018\n";

    string text;
    cout << "Enter a string: ";
    getline(cin, text);

    for (char &ch : text) {
        if (ch >= 'a' && ch <= 'z') {
            ch = (ch == 'z') ? 'a' : ch + 1;
        } else if (ch >= 'A' && ch <= 'Z') {
            ch = (ch == 'Z') ? 'A' : ch + 1;
        }
    }

    cout << "Updated string: " << text << '\n';
    return 0;
}
