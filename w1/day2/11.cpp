#include <iostream>


using namespace  std;

int main() {
    
    int n, x;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; ++i){
        cin >> x;
        a[i] = x;
    }

    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }

    return 0;
}
