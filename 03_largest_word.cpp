#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    cout << "Aayush Kumar | CU ID: CU26250018\n";

    string sentence, word, largestWord;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    stringstream input(sentence);
    while (input >> word) {
        // Remove common punctuation from the ends of each word.
        while (!word.empty() && ispunct(static_cast<unsigned char>(word.front()))) {
            word.erase(word.begin());
        }
        while (!word.empty() && ispunct(static_cast<unsigned char>(word.back()))) {
            word.pop_back();
        }

        if (word.length() > largestWord.length()) {
            largestWord = word;
        }
    }

    if (largestWord.empty()) {
        cout << "No word found.\n";
    } else {
        cout << "Largest word: " << largestWord << '\n';
        cout << "Length: " << largestWord.length() << '\n';
    }

    return 0;
}
