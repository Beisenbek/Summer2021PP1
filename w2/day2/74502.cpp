#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    bool isPrime[n + 1];

    for(int i = 2; i <= n; ++i){
        isPrime[i] = true;
    }
    isPrime[0] = isPrime[1] = false;

    for(int i = 2; i <= n; ++i){
        if(isPrime[i]){
            for(int j = i + i; j <=n; j += i){
                isPrime[j] = false;
            }
        }
    }

    for(int i = 2; i <= n; ++i){
        if(isPrime[i]){
            cout << i << " is prime" << endl;
        }
    }


    return 0;
}

