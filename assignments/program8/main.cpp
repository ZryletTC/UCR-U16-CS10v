#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

const bool CLEAR_SCREEN = true;

/// @brief Utilizes an escape character sequence to clear the screen
void clearScreen() {
    cout << endl;

    if (CLEAR_SCREEN) {
        cout << "\033c";
    }

    cout << endl;

    return;
}


/// @brief Draws the provided tic-tac-toe board to the screen
//  @param board is the tic-tac-toe board that should be drawn
void drawBoard(const vector < char >&gameBoard) {
    clearScreen();
    for (int i = 0; i < 9; i += 3) {
        cout << "  " << gameBoard.at(i) << "  |  " << gameBoard.at(i + 1) << "  |  "
            << gameBoard.at(i + 2) << "  " << endl;
        if (i < 6) {
            cout << "-----|-----|-----" << endl;
        }
    }
    cout << endl;

    return;
}



/// @brief Fills vector with characters starting at lower case a.
///
///     If the vector is size 3 then it will have characters a to c.
///     If the vector is size 5 then it will have characters a to e.
///     If the vector is size 26 then it will have characters a to z.
///
/// @param v the vector to initialize
/// @pre-condition the vector size will never be over 26
void initVector(vector <char> &v) {
    for (unsigned int i = 0; i < v.size(); i++){
        v.at(i) = 'a' + i;
    }
    return;
}


/// @brief Converts a character representing a cell to associated vector index
/// @param the position to be converted to a vector index
/// @return the integer index in the vector, should be 0 to (vector size - 1)
int convertPosition(char boardPosition) {
    return boardPosition-97;
}


/// @brief Predicate function to determine if a spot in board is available.
/// @param board the current tic-tac-toe board 
/// @param position is an index into vector to check if available
/// @return true if position's state is available (not marked) AND is in bounds
bool validPlacement(const vector<char>  &gameBoard, int positionIndex) {
    char placement = gameBoard.at(positionIndex);
    return (placement != 'O' && placement != 'X');
}

/// @brief Acquires a play from the user as to where to put her mark
///
///     Utilizes convertPosition and validPlacement functions to convert the
///     user input and then determine if the converted input is a valid play.
///
/// @param board the current tic-tac-toe board 
/// @return an integer index in board vector of a chosen available board spot
int getPlay(const vector<char> &gameBoard) {

    // TODO: implement function
    char boardPosition = ' ';
    int index = -1;

    do {
        cout << "Please choose a position: ";
        cin >> boardPosition;
        cout << endl;
        
        index = convertPosition(boardPosition);
    } while (!validPlacement(gameBoard, index));
    
    return index;
}


/// @brief Predicate function to determine if the game has been won
///
///     Winning conditions in tic-tac-toe require three marks from same 
///     player in a single row, column or diagonal.
///
/// @param board the current tic-tac-toe board 
/// @return true if the game has been won, false otherwise
bool gameWon(const vector<char> &gameBoard) {
    bool won = false;
    
    //test horizontal
    for (unsigned int i = 0; i < gameBoard.size(); i += 3){
        if ((gameBoard.at(i) == 'X' && gameBoard.at(i+1) == 'X' && gameBoard.at(i+2) == 'X') ||
            (gameBoard.at(i) == 'O' && gameBoard.at(i+1) == 'O' && gameBoard.at(i+2) == 'O')){
            won = true;
        }
            
    }
    
    //test vertical
    for (unsigned int i = 0; i < sqrt(gameBoard.size()); i++){
        if ((gameBoard.at(i) == 'X' && gameBoard.at(i+3) == 'X' && gameBoard.at(i+6) == 'X') ||
            (gameBoard.at(i) == 'O' && gameBoard.at(i+3) == 'O' && gameBoard.at(i+6) == 'O')){
            won = true;
        }
    }
    
    //test diagonals
    if ((gameBoard.at(0) == 'X' && gameBoard.at(4) == 'X' && gameBoard.at(8) == 'X') ||
        (gameBoard.at(0) == 'O' && gameBoard.at(4) == 'O' && gameBoard.at(8) == 'O')){
        won = true;
    }
    else if ((gameBoard.at(2) == 'X' && gameBoard.at(4) == 'X' && gameBoard.at(6) == 'X') ||
        (gameBoard.at(2) == 'O' && gameBoard.at(4) == 'O' && gameBoard.at(6) == 'O')){
        won = true;
    }
    
    return won;
}


/// @brief Predicate function to determine if the board is full
/// @param board the current tic-tac-toe board 
/// @return true iff the board is full (no cell is available)
bool boardFull(const vector<char> &gameBoard) {
    bool full = true;
    for (unsigned int i = 0; i < gameBoard.size(); i++){
        if (gameBoard.at(i) != 'O' && gameBoard.at(i) != 'X')
            full = false;
    }
    return full;
}


// Global constants for player representation
const int PLAYER1 = 0;
const int PLAYER2 = 1;

int main() {
    // Variables that you may find useful to utilize
    vector<char> gameBoard(9);
    int curPlay;
    int whosTurn = PLAYER1; // Player 1 always goes first and is 'X'

    initVector(gameBoard);

    drawBoard(gameBoard);


    while (!boardFull(gameBoard) && !gameWon(gameBoard)){

        curPlay = getPlay(gameBoard);

        if (whosTurn == PLAYER1){
            gameBoard.at(curPlay) = 'X';
            whosTurn = PLAYER2;
        }
        else {
            gameBoard.at(curPlay) = 'O';
            whosTurn = PLAYER1;
        }
        drawBoard(gameBoard);
    }

    if (gameWon(gameBoard)){
        if (whosTurn == PLAYER2)
            cout << "PLAYER 1 WINS!" << endl;
        else
            cout << "PLAYER 2 WINS!" << endl;
    }
    else {
        cout << "No one wins" << endl;
    }

    return 0;
}