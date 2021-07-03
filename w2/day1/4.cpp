#include <iostream>
#include <cmath>

using namespace std;

int main(){
  
    int n, m;
    cin >> n >> m;
    int a[n][m];

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
            int r = sqrt(a[i][j]);
            if(r * r == a[i][j]){
                a[i][j] = r;
            }
        }
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}