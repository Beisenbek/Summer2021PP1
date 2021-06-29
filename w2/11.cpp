#include <iostream>
#include <sstream>

using namespace std;

int main(){

    stringstream ss;

    string str,str2;
    cin >> str;
    str2 = "test2";

    ss << str  << "\n" << str2;

    cout<< ss.str() << endl;

    string str3;

    while(ss >> str3){
        cout << str3 << endl;
    }

    return 0;
}