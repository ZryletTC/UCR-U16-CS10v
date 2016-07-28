#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


const int MONTHS = 12;


string monthName(int monthNumber){
    string monthNames[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    return monthNames[monthNumber - 1];
}

void PrintHeader (int yearColWidth, int tableColWidth) {

    string spacer(yearColWidth, ' ');
    cout << spacer;
    int i = 0;
    for (i = 1; i <= MONTHS; ++i)
    {
        cout << setw(tableColWidth) << monthName(i);
    }
    cout << endl;
}

int main(){
    int years = 5;
    double data = 0.3;
    int startYear = 2012;

    int tableColWidth = 6;
    int yearColWidth = 8;
    
    // construct table of results:
    
    // start by outputting table header, 

    // leaving blank space for Year column header:
    
    PrintHeader(yearColWidth, tableColWidth);
    
    // print table
    int i = 0;
    int j = 0;
    for (i = 0; i < years; ++i)
    {
        cout << setw(yearColWidth) << startYear + i;
        for (j = 0; j < MONTHS; ++j)
        {
            cout << setw(tableColWidth) << data;
        }
        cout << endl;
    }
    
    
    return 0;
}
