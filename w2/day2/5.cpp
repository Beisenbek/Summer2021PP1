#include <iostream>

using namespace std;

int f(int * a, int n){
    int sum = 0;

    for(int i = 0; i < n; ++i){
        sum += a[i];
    }

    return sum;
}

int main(){

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }

    cout << f(arr, n);

    return 0;
}

