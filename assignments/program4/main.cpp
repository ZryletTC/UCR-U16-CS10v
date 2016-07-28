#include <iostream>
#include <string>
using namespace std;

int main(){
    string userText;
    
    cout << "Enter text: ";
    getline(cin, userText);
    cout << endl;
    
    cout << "You entered: " << userText << endl;
    
    unsigned int foundIndex = 0;
    while (userText.find("BFF", foundIndex) != string::npos){
        userText.replace(userText.find("BFF", foundIndex), 3, "best friend forever");
        foundIndex = userText.find("BFF", foundIndex);
    }
    foundIndex = 0;
    while (userText.find("IDK", foundIndex) != string::npos){
        userText.replace(userText.find("IDK", foundIndex), 3, "I don't know");
        foundIndex = userText.find("IDK", foundIndex);
    }
    foundIndex = 0;
    while (userText.find("JK", foundIndex) != string::npos){
        userText.replace(userText.find("JK", foundIndex), 2, "just kidding");
        foundIndex = userText.find("JK", foundIndex);
    }
    foundIndex = 0;
    while (userText.find("TMI", foundIndex) != string::npos){
        userText.replace(userText.find("TMI", foundIndex), 3, "too much information");
        foundIndex = userText.find("TMI", foundIndex);
    }
    foundIndex = 0;
    while (userText.find("TTYL", foundIndex) != string::npos){
        userText.replace(userText.find("TTYL", foundIndex), 4, "talk to you later");
        foundIndex = userText.find("TTYL", foundIndex);
    }
        
    cout << "Expanded: " << userText << endl;
    
    
    
    return 0;
}