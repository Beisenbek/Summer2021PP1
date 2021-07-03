#include <iostream>
#include <cmath>

using namespace std;

int main(){

    string str = "81";
    int n = str.size();
    char buffer[n];
    str.copy(buffer,n,0);
    buffer[n] = '\0';

    cout << buffer << endl;


    int x = atoi(buffer);

    cout << sqrt(x);

   

    
    return 0;
}