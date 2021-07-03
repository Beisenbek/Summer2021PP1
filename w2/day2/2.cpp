#include <iostream>

using namespace std;

int f(int a[], int n){
    int sum = 0;

    for(int i = 0; i < n; ++i){
        sum += a[i];
    }

    return sum;
}

int main(){

    int arr[] = {1, 2, 3, 4, 5};

    cout << f(arr, 5);

    return 0;
}

