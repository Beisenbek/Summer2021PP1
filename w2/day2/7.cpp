#include <iostream>

using namespace std;

int f(int * start, int * end){
    int sum = 0;

    int * current = start;

    while(current != end){
        sum = sum + *current;
        current++;
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

    cout << f(arr, arr + n);

    return 0;
}

