#include <iostream>
#include <cmath>
using namespace std;

void multiply (double num1, double num2, double& prod){
    prod = num1 * num2;
    return;
}

void divide (double num1, double num2, double& quot){
    quot = num1 / num2;
    return;
}

void testMultDiv() {
    double num1 = 0.0;
    double num2 = 0.0;
    double prod = 0.0; //product of numbers
    double quot = 0.0; //quotient of numbers

    cout << "Enter the first floating point number: ";
    cin >> num1;
    cout << endl << "Enter the second floating point number: ";
    cin >> num2;
    cout << endl;
    
    cout << endl << "First floating point number: " << num1;
    cout << endl << "Second floating point number: " << num2;

    //Call multiply function
    multiply(num1, num2, prod);

    //Call divide function
    divide(num1, num2, quot);

    //Output product and quotient
    cout << endl << endl;
    cout << num1 << " * " << num2 << " = " << prod << endl;
    cout << num1 << " / " << num2 << " = " << quot << endl;

    return;
}

// Global const values for intersect return value
const int OK = 0; // the values of {xi, yi} correctly represent the coordinates of the intersection of the two lines 
const int DIV_ZERO = 1; // the two lines are parallel, and the values of {xi, yi} have not been altered. 

int intersect(double& xi, double& yi, double a1, double b1, double a2, double b2) {
    if (a1 == a2){
        return DIV_ZERO;
    } else {
        xi = (b2 - b1) / (a1 - a2);
        yi = a1 * xi + b1;
        return OK;
    }
}

void testIntersect() {
    // line 1: y = a1*x + b1
    // line 2: y = a2*x + b2
    // lines intersect at xi, yi

    double a1 = 0.0, b1 = 0.0, a2 = 0.0, b2 = 0.0;
    cout << "Enter coefficients for Line 1 (a1, b1): ";
    cin >> a1 >> b1;
    cout << endl;

    cout << "Enter coefficients for Line 2 (a2, b2): ";
    cin >> a2 >> b2;
    cout << endl;

    cout << "Line 1: Y = " << a1 << "X + " << b1 << endl;
    cout << "Line 2: Y = " << a2 << "X + " << b2 << endl;

    double xi, yi;

    int flag = intersect(xi, yi, a1, b1, a2, b2);

    if (flag == DIV_ZERO)
    {
        cout << "Lines are parallel" << endl;
    }
    else
    {
        cout << "\nLines 1 & 2 intersect at {" << xi << ", " << yi << '}' << endl;

        cout << "Proof: yi on Line 1 at (xi = " << xi << ") is "
            << a1 * xi + b1 << endl;
        cout << "       yi on Line 2 at (xi = " << xi << ") is "
            << a2 * xi + b2 << endl;
    }
    
    return;
}

int main() {
    //testMultDiv();
    testIntersect();
    
    return 0;
}