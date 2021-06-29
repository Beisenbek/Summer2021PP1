#include <iostream>

using namespace std;


int main(){

    int n, x;
    cin >> n;

    int mx = -100001;

    for(int i = 0; i < n * n; ++i){
        cin >> x;
        mx = max(mx, x);
    }

    cout << mx << endl;

    return 0;
}