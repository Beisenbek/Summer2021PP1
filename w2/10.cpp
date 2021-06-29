#include <iostream>


using namespace std;

int main(){

    string s, t;

    cin >> s >> t;

    s.insert(0,t);

    cout << s << endl;


    string s2="test";

    s2.insert(1,10,'=');   
    s2.insert(11,1,'>');   

    cout<< s2 << endl;


    return 0;
}