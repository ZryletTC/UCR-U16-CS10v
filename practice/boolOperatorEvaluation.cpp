#include <string>
#include <cctype>
#include <iostream>
using namespace std;

int main (){
  string str = "Hello";
  //cin >> str;
  // if the evaluation order in the condition is changed, runtime error can occur
  for (int i = 0; i < str.size() && isalpha(str.at(i)); ++i){
    cout << str.at(i);
  }
  cout << endl;
}
