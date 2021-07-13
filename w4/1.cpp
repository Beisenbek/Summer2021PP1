#include <iostream>

using namespace std;


int recF(int n){
    if(n == 1) return 1;
    return n + recF(n-1);
}


void f2(){
    int n;
    cin >> n;
    cout << recF(n);
}

void f1(){
    int sum = 0;

    int n;
    cin >> n;

    for(int i = 1; i <= n; ++i){
        sum += i;
    }

    cout << sum << endl;
    }


int main(){

    f2();

    return 0;
}