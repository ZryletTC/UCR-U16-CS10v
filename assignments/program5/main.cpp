#include <iostream>
using namespace std;

int main() {
    int trunkHeight = 0;
    int trunkWidth = 0;
    int leavesWidth = 0;
    
    cout << "Enter trunk height: ";
    cin >> trunkHeight;
    
    cout << "Enter trunk width: ";
    cin >> trunkWidth;
    while ((trunkWidth % 2) == 0) {
        cout << "Please enter an odd number for the width: ";
        cin >> trunkWidth;
        cout << endl;
    }
    
    cout << "Enter leaves width: ";
    cin >> leavesWidth;
    cout << endl;
    while ((leavesWidth % 2) == 0) {
        cout << "Please enter an odd number for the width: ";
        cin >> leavesWidth;
        cout << endl;
    }
    
    
    // Draw leaves
    for (int i = 0; i < (leavesWidth + 1) / 2; i++){
        for (int j = 0; j < (leavesWidth / 2) - i; j++){
            cout << " ";
        }
        for (int j = 0; j < i * 2 + 1; j++){
            cout << "*";
        }
        cout << endl;
    }

    // Draw trunk
    for (int i = 0; i < trunkHeight; i++){
        for (int j = 0; j < (leavesWidth - trunkWidth) / 2; j++){
            cout << " ";
        }
        for (int j = 0; j < trunkWidth; j++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}