#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

void fillVector(vector<double>& v) {
    double userDouble = 0.0;

    cout << "Enter numbers to populate the vector ";
    cout << "(enter any other character to end user input): "; 

    while (cin >> userDouble) {
      v.push_back(userDouble);
    }
    cout << endl;

    return;
}

double meanVector(const vector <double> &v) {
   double sum = 0;
   for (unsigned int i = 0; i < v.size(); i++){
      sum += v.at(i);
   }
   return sum/v.size();
}

double varianceVector(double vectorAvg, const vector <double> &v) {
   vector<double> squaredDiffs;
   for (unsigned int i = 0; i < v.size(); i++){
      squaredDiffs.push_back(pow(v.at(i) - vectorAvg, 2));
   }
   return meanVector(squaredDiffs);
}

double standardDeviationForVariance(double vectorVariance) {
   return sqrt(vectorVariance);
}

int main() {
   vector<double> data;
   double avg = 0.0;
   double var = 0.0;
   double stdDev = 0.0;
   unsigned int i = 0;

   fillVector(data);

   cout << "You entered: ";
   for (i = 0; i < data.size(); i++){
      cout << data.at(i) << " ";
   }
   cout << endl;

   avg = meanVector(data);

   var = varianceVector(avg, data);

   stdDev = standardDeviationForVariance(var);

   cout << "The mean is: " << avg << endl;
   cout << "The variance is: " << var << endl;
   cout << "The standard deviation is: " << stdDev << endl;

   return 0;
}