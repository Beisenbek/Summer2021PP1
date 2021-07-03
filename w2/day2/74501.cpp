#include <iostream>

using namespace std;

int main(){

    int dr[] = {0, 1, 0, -1};
    int dc[] = {1, 0, -1, 0};

    int n;
    cin >> n;

    int a[n][n];
    int val = 1;
    a[0][0] = val;

    int r = 0;
    int c = -1;
    int index = 0;

    int dir[2*n - 1];

    dir[0] = n;

    for(int i = n - 1; i > 0; --i){
        for(int j = 0; j < 2; ++j){
            index++;
            dir[index] = i;
        }
    }

    index = 0;
    int pos = 0;

    while(val <= n * n){
        for(int i = 1; i <= dir[index]; ++i){
            r = r + dr[pos];
            c = c + dc[pos];
            a[r][c] = val;
            val++;
        }
        index++;
        pos = (pos + 1) % 4;
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
   

    return 0;
}

