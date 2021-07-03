#include <iostream>

using namespace std;

int memo[50];

int f(int n){
   if(memo[n] == -1){
       if(n == 1 || n == 2) memo[n] = 1;
       else memo[n] = f(n - 1) + f(n - 2);
   }
   return memo[n];
}

int main(){

    for(int i = 0; i < 50; ++i){
        memo[i] = -1;
    }

    int n;
    cin >> n;

    cout << f(n);

    return 0;
}

