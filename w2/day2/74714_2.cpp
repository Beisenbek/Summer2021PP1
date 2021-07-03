#include <iostream>

using namespace std;


void f(int ** a, int n, int m, int ** t){
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            t[j][i] = a[i][j];
        }
    }
}

void r(int ** a, int n, int m){
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
        }
    }
}

void p(int ** a, int n, int m){
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){

    int n, m;
    cin >> n >> m;

    int ** a = new int *[n];
    int ** t = new int *[m];

    for(int i = 0; i < n; ++i){
        a[i] = new int[m];
    }

    for(int i = 0; i < m; ++i){
        t[i] = new int[n];
    }

    r(a, n, m);
    f(a, n, m, t);
    p(t, m, n);



    return 0;
}

