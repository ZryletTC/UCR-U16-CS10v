#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int PLAYER1 = 0;
const int PLAYER2 = 1;
const int WINNING_SCORE = 100;


void printIntro(){
    cout << "Welcome to the dice game Pig!\nThe objective is to be first to score 100 points.\n";
}

int humanTurn(string playerName, int playerscore){
    int roll = 0;
    int newScore = playerscore;
    char answer = 'y';
    
    while (roll != 1 && answer != 'n' && newScore < WINNING_SCORE){
        cout << playerName << endl;
        roll = rand() % 6 + 1;
        if (roll != 1){
            cout << "You rolled a " << roll << endl;
            newScore += roll;
            cout << "Your score: " << newScore << endl;
            if (newScore < WINNING_SCORE){
                cout << "Do you want to roll again? (y/n): ";
                cin >> answer;
                cout << endl;
            }
        }
        else {
            cout << "You rolled a 1 (PIG!)\nYour turn is over\n";
            cout << "Your score: " << playerscore << endl << endl;
            return playerscore;
        }
    }
    
    return newScore;
}

int main() {
    srand(4444);

    // setup and initialize variables
    int turn = PLAYER1;
    int player1score = 0;
    int player2score = 0;
    string player1name;
    string player2name;

    printIntro();

    cout << "\nPlayer 1 - Enter your name: ";
    cin >> player1name;
    cout << "\nPlayer 2 - Enter your name: ";
    cin >> player2name;
    cout << endl;

    //play game
    while (player1score < WINNING_SCORE && player2score < WINNING_SCORE) {

        //player 1's turn or player 2's turn
        if (turn == PLAYER1) {
            player1score = humanTurn(player1name, player1score);
            turn = PLAYER2;
        }
        else {
            player2score = humanTurn(player2name, player2score);
            turn = PLAYER1;
        }
    }
    
    if (player1score > player2score)
        cout << endl << player1name << " wins!" << endl;
    else
        cout << endl << player2name << " wins!" << endl;

    return 0;
}