#include <iostream>
#include <string>

using namespace std;

int main(){
    int numMice = -1;
    double mouseWeight = 0.0;
    double totalWeight = 0.0;
    double avgWeight = 0.0;
    
    while (mouseWeight >= 0){
        totalWeight += mouseWeight;
        numMice++;
       
        cout << "Please enter your data, terminate with a neg. data: ";
        cin >> mouseWeight;
        cout << endl;
    }
    avgWeight = totalWeight / numMice;
    cout << "Average weight of mice: " << avgWeight << endl;
    
    return 0;
}