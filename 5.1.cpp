#include <iostream>

using namespace std;

int rollDice() {
    return rand() % 6 + 1;
}

int main() {
    srand(time(0));

    int userScore = 0;
    int computerScore = 0;

    for (int i = 0; i < 3; ++i) {
        cout << "Player rolls the dice..." << endl;
        int userRoll1 = rollDice();
        int userRoll2 = rollDice();
        int userTotal = userRoll1 + userRoll2;
        cout << "Player rolled: " << userRoll1 << " and " << userRoll2 << " (total: " << userTotal << ")" << endl;
        userScore += userTotal;

        cout << "Computer rolls the dice..." << endl;
        int compRoll1 = rollDice();
        int compRoll2 = rollDice();
        int compTotal = compRoll1 + compRoll2;
        cout << "Computer rolled: " << compRoll1 << " and " << compRoll2 << " (total: " << compTotal << ")" << endl;
        computerScore += compTotal;
    }

    cout << "Player's score: " << userScore << endl;
    cout << "Computer's score: " << computerScore << endl;
    if (userScore > computerScore) {
        cout << "Player wins!" << endl;
    }
    else if (computerScore > userScore) {
        cout << "Computer wins!" << endl;
    }
    else {
        cout << "Draw" << endl;
    }

}


