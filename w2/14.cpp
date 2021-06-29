#include <iostream>
#include <cmath>

using namespace std;

int main(){

    string str = "49";

    int x = atoi(str.c_str());
    cout << sqrt(x) << endl;

    int y = stoi(str);
    cout << sqrt(x) << endl;

    
    return 0;
}