#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main(){

    stringstream ss;

    string str = "49";

    ss << str;

    int x;

    ss >> x;

    cout << sqrt(x) << endl;


    
    return 0;
}