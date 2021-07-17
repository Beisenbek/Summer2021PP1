#include <iostream>

using namespace std;

int memo[1000001];
//0 - false
//1 - true
//-1 not defined
bool f(int n){
    if(n <= 0) return false;
    if(memo[n] == -1){
        memo[n] = f(n - 3) or f(n - 5);
    }
    if(memo[n] == 1) return true;
    return false;
}

int main(){

    int n;

    cin >> n;

    memo[1] = true;

    for(int i = 2; i <=n; ++i){
        memo[i] = -1;
    }

    if(f(n)) cout << "YES";
    else cout << "NO";

    return 0;
}