#include <iostream>
#include <cstdlib>
using namespace std;

int add (int a, int b){
    return  a + b;
    return 0;
}

int subtract (int a, int b){
    return  a - b;
    return 0;
}

double percentHeads (int tosses){
    int tails = 0;
    double percentage = 0.0;
    srand(4444);
    
    for (int i = 0; i < tosses; i++){
        tails += rand() % 2;
    }
    percentage =  1 - static_cast<double>(tails) / tosses;
    return 100*percentage;
}

void sumdiff() {
   int num1 = 0;
   int num2 = 0;
   int sum = 0; //sum of numbers
   int diff = 0; //difference of numbers

   cout << "Enter the first integer: ";
   cin >> num1;
   cout << "Enter the second integer: ";
   cin >> num2;
   
   cout << endl << endl << "First Integer: " << num1;
   cout << endl << "Second Integer: " << num2 << endl << endl;

   // Call add function
   sum = add(num1, num2);

   diff = subtract(num1, num2);

   cout << num1 << " + " << num2 << " = " << sum << endl;
   cout << num1 << " - " << num2 << " = " << diff << endl;


   return;
}

void testHeadPercent(){
    int tosses = 0;
    cout << "Enter the number of times you want to toss the coin: ";
    cin >> tosses;
    cout << endl << "Heads came up " << percentHeads(tosses) << "% of the time." << endl;
}

int main(){
    //sumdiff();
    testHeadPercent();
}