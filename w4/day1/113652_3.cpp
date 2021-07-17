#include <iostream>

using namespace std;

bool f(int n){
    if(n == 2 || n == 3 || n == 5 || n == 8) return false;
    return true;
}

int main(){

    int n;

    cin >> n;

    if(f(n)) cout << "YES";
    else cout << "NO";

    return 0;
}