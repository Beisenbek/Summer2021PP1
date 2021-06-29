//74438
#include <iostream>

using namespace std;


int main(){

    int n;
    cin >> n;

    int a[n][n];

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            a[i][j] = 0;
        }
    }

    for(int r = 0; r < n; ++r){
        int c = n - r - 1;
        a[r][c] = r + 1;
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
           if(a[i][j] == 0) cout << '.';
           else cout << a[i][j];
        }
        cout << endl;
    }


    return 0;
}