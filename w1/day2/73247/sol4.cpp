#include <iostream>
#include <algorithm>

using namespace  std;

int main() {
    
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    int m;
    cin >> m;
    int b[m];
    for(int i = 0; i < m; ++i){
        cin >> b[i];
    }

    int r = 0;
    int l = 0;

    while(r < n && l < m){
        if(a[r] <= b[l]){
            cout << a[r] << " ";
            r++;
        }else{
            cout << b[l] << " ";
            l++;
        }
    }

    if(r < n){
        for(int i = r; i < n; ++i){
            cout << a[i] << " ";
        }
    }
    else if(l < m){
        for(int i = l; i < m; ++i){
            cout << b[i] << " ";
        }
    }


    return 0;
}
