#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const string symbols[] = {"🍒", "🔔", "🍋", "💎", "🍊"};

void spinSlotMachine(string &s1, string &s2, string &s3) {
    s1 = symbols[rand() % 5];
    s2 = symbols[rand() % 5];
    s3 = symbols[rand() % 5];
}

int main() {
    srand(time(0));

    string slot1, slot2, slot3;
    char choice;

    do {
        cout << "\nSpinning the slot machine... 🎰" << endl;
        spinSlotMachine(slot1, slot2, slot3);

        cout << slot1 << " | " << slot2 << " | " << slot3 << endl;

        if (slot1 == slot2 && slot2 == slot3) {
            cout << "Jackpot! You win! 🎉" << endl;
        } else {
            cout << "Try again! 🍀" << endl;
        }

        cout << "Do you want to spin again? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Thanks for playing!" << endl;

    return 0;
}