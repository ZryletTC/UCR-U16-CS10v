#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string word = "Ramanujan";
    
    cout << word << endl;
    
    int i;
    for (i = word.length()-1; i >= 0; i--) {
        cout << word.at(i);
    }
    
    cout << endl;
    
    return 0;
}