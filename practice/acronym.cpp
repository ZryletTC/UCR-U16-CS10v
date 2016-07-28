/*
    A program that accepts a phrase consisting of three words, 
    separated only by spaces, and extracts the corresponding 
    three letter acronym  (tla)
*/

#include <iostream>
using namespace std;

int main(){
   string phrase = "rolling on floor lauging";
   string acronym;
   int latestSpace = 0;

   if (phrase.size() > 0){
        acronym = phrase.substr(0,1);
        while (phrase.find(' ', latestSpace) != string::npos){
            latestSpace = phrase.find(' ', latestSpace) + 1;
            acronym += phrase.substr(latestSpace, 1);
        }
    }
    
    cout << acronym << endl;
    return 0;
}
