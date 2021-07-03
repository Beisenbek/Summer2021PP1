#include <iostream>

using namespace std;

int main(){

    int n, m;

    cin >> n >> m;

    int a[n][m];

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
        }
    }

    int sum = 0;

    cout << "coordinates of min elements:" << endl;
    for(int j = 0; j < m; ++j){
        int minc = a[0][j];
        int r = 0;
        for(int i = 1; i < n; ++i){
            if(minc > a[i][j]){
                minc = a[i][j];
                r = i;
            }
        }
        cout << r + 1 << ";" << j + 1 <<  endl;
        sum += minc;
    }
    cout << "Their sum:" << endl;
    cout << sum << endl;

    return 0;
}

