#include <iostream>
#include <cctype>
using namespace std;

string lowerCase (string input){
    string output = input;
    for (int i = 0; i<output.size(); i++){
        output.at(i) = tolower(output.at(i));
    }
    return output;
}

int main (){
    string input;
    cin >> input;
    cout << endl << lowerCase(input) << endl;
}