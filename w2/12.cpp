#include <iostream>
#include <sstream>

using namespace std;

int main(){

    stringstream ss;

    int x = 49;

    ss << x;

    string str;

    ss >> str;

    cout << str << endl;


    
    return 0;
}