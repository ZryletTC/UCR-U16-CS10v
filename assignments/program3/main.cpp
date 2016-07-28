#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string player1Name;
    int player1Yards;
    string player2Name;
    int player2Yards;
    string player3Name;
    int player3Yards;
    
    cout << "Enter player 1's name:";
    cin >> player1Name;
    cout << endl;
    cout << "Enter player 1's yards gained:";
    cin >> player1Yards;
    cout << endl;
    
    cout << "Enter player 2's name:";
    cin >> player2Name;
    cout << endl;
    cout << "Enter player 2's yards gained:";
    cin >> player2Yards;
    cout << endl;
    
    cout << "Enter player 3's name:";
    cin >> player3Name;
    cout << endl;
    cout << "Enter player 3's yards gained:";
    cin >> player3Yards;
    cout << endl;
    
    cout << endl;
    cout << "Player 1 - " << player1Name << ": " << player1Yards << endl;
    cout << "Player 2 - " << player2Name << ": " << player2Yards << endl;
    cout << "Player 3 - " << player3Name << ": " << player3Yards << endl;
    
    cout << endl;
    if (player1Yards > player2Yards && player2Yards > player3Yards){
        cout << "1. " << player1Name << ": " << player1Yards << endl;
        cout << "2. " << player2Name << ": " << player2Yards << endl;
        cout << "3. " << player3Name << ": " << player3Yards << endl;
    } else if (player1Yards > player3Yards && player3Yards > player2Yards){
        cout << "1. " << player1Name << ": " << player1Yards << endl;
        cout << "2. " << player3Name << ": " << player3Yards << endl;
        cout << "3. " << player2Name << ": " << player2Yards << endl;
    } else if (player2Yards > player1Yards && player1Yards > player3Yards){
        cout << "1. " << player2Name << ": " << player2Yards << endl;
        cout << "2. " << player1Name << ": " << player1Yards << endl;
        cout << "3. " << player3Name << ": " << player3Yards << endl;
    } else if (player2Yards > player3Yards && player3Yards > player1Yards){
        cout << "1. " << player2Name << ": " << player2Yards << endl;
        cout << "2. " << player3Name << ": " << player3Yards << endl;
        cout << "3. " << player1Name << ": " << player1Yards << endl;
    } else if (player3Yards > player2Yards && player2Yards > player1Yards){
        cout << "1. " << player3Name << ": " << player3Yards << endl;
        cout << "2. " << player2Name << ": " << player2Yards << endl;
        cout << "3. " << player1Name << ": " << player1Yards << endl;
    } else {
        cout << "1. " << player3Name << ": " << player3Yards << endl;
        cout << "2. " << player1Name << ": " << player1Yards << endl;
        cout << "3. " << player2Name << ": " << player2Yards << endl;
    }
}