#include <iostream>

using namespace std;

char modify(char c){
    if(c == '(') return ')';
    return c;
}

string f(size_t currentPosition, string result){
    if(currentPosition == string::npos) return result;
    return f(currentPosition - 1, result + modify(result[currentPosition]));
}

int main(){

    string s;
    cin >> s;

    cout << f(s.size() - 1, s);

    return 0;
}