#include <iostream>
#include <ctime>

using namespace std;

int main(){
    int totSeconds = time(0);
    
    int hrs = totSeconds/3600;
    int min = totSeconds%3600/60;
    int sec = totSeconds%60;
    cout << hrs << " hours " << min << " minute " << sec << " seconds";

    return 0;
}