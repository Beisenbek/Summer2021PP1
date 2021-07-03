#include <iostream>

using namespace std;

int f(int * current, int * end, int sum){
   if(current == end) return sum;
   return f(current + 1, end, sum + *current);
}

int main(){

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }

    cout << f(arr, arr + n, 0);

    return 0;
}

