#include <iostream>
#include <algorithm>

using namespace  std;

int main() {
    
    int c[200000];

    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> c[i];
    }

    int m;
    cin >> m;
    for(int i = 0; i < m; ++i){
        cin >> c[n + i];
    }

    int k = n + m;

    sort(c, c + k);

    for(int i = 0; i < k; ++i){
        cout << c[i] << " ";
    }

    return 0;
}
