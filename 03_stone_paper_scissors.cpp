#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    cout << "Aayush Kumar | CU ID: CU26250018\n";
    cout << "Stone Paper Scissors Game\n";
    cout << "Enter 1 for Stone, 2 for Paper, 3 for Scissors: ";

    int userChoice;
    cin >> userChoice;

    if (userChoice < 1 || userChoice > 3) {
        cout << "Invalid choice. Please enter 1, 2, or 3.\n";
        return 0;
    }

    srand(static_cast<unsigned int>(time(nullptr)));
    int computerChoice = rand() % 3 + 1;

    const char* choices[] = {"", "Stone", "Paper", "Scissors"};
    cout << "You chose: " << choices[userChoice] << '\n';
    cout << "Computer chose: " << choices[computerChoice] << '\n';

    if (userChoice == computerChoice) {
        cout << "It's a draw!\n";
    } else if ((userChoice == 1 && computerChoice == 3) ||
               (userChoice == 2 && computerChoice == 1) ||
               (userChoice == 3 && computerChoice == 2)) {
        cout << "You win!\n";
    } else {
        cout << "Computer wins!\n";
    }

    return 0;
}
