#include <iostream>
#include <map>

using namespace std;

int main(){

    int n;
    cin >> n;

    map<string, string> mp;

    string login, pwd;

    for(int i = 0; i < n; ++i){
        cin >> login >> pwd;
        mp[login] = pwd;
    }

    int m;
    cin >> m;
    for(int i = 0; i < m; ++i){
        cin >> login >> pwd;
        if(mp.find(login) == mp.end()){
            cout << "login error\n";
        }else{
            if(mp[login] != pwd){
                cout << "password error\n";
            }else{
                cout << "correct password\n";
            }
        }
    }

    return 0;
}