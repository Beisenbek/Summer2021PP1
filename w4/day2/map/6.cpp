#include <iostream>
#include <map>

using namespace std;


int main(){

    int n;
    cin >> n;
    string str;

    map<int, string> m;

    for(int i = 0; i < n; ++i){
        cin >> str;
        m[str.size()] = str;
    }

    map<int, string> :: iterator it;

    for(it = m.begin(); it != m.end(); ++it){
        cout << (*it).first << " " << (*it).second << endl;
    }

    for(int i = 0; i < 10; ++i){
        cout << m[i] << " ";
    }


    return 0;
}