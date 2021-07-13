#include <iostream>

using namespace std;

char f(string s, size_t currentPosition, char result){
   if(currentPosition >= s.size()) return result;
   return f(s, currentPosition + 1, max(result, s[currentPosition]));
}

int main(){

    string s;
    cin >> s;

    cout << f(s, 0, s[0]);

    return 0;
}