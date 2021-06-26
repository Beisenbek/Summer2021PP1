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

    int k = n + m;
    int c[k];

    for(int i = 0; i < n; ++i){
        c[i] = a[i];
    }

    for(int i = 0; i < m; ++i){
        c[n + i] = b[i];
    }

    for(int i = 0; i < k - 1; ++i){
        for(int j = i + 1; j < k; ++j){
            if(c[i] > c[j]){
                swap(c[i],c[j]);
            }
        }
    }

    for(int i = 0; i < k; ++i){
        cout << c[i] << " ";
    }

    return 0;
}
