#include <iostream>

using namespace std;

char modify(char c){
    if(c == '(') return ')';
    return c;
}

string f(int currentPosition, string result){
    if(currentPosition < 0) return result;
    return f(currentPosition - 1, result + modify(result[currentPosition]));
}


int main(){

    string s;
    cin >> s;

    cout << f(s.size() - 1, s);

    return 0;
}