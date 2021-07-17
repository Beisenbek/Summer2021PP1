#include <iostream>

using namespace std;


int memo[1000];

int f_memo(int n){
    if(memo[n] == -1){
        memo[n] = f_memo(n - 1) + f_memo(n - 2);
    }
    return memo[n];
}


int f(int n){
    if(n == 1 || n == 2) return 1;
    return f(n - 1) + f(n - 2);
}

void f1(){
    int n;
    cin >> n;
    cout << f(n);
}

void f2(){
    int n;
    cin >> n;
    memo[1] = memo[2] = 1;
    for(int i = 3; i <= 1000; ++i){
        memo[i] = -1;
    }
    cout << f_memo(n);
}


int main(){

    f1();

    return 0;
}