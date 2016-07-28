#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

void PrintFactors(int A){
    for (int i = 1; i <= A; i++){
        if (A % i == 0)
            cout << i << " ";
    }
    cout << endl;
}

int main (){
    PrintFactors(12);
    PrintFactors(144);
}