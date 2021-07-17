#include <iostream>
#include <map>

using namespace std;


int main(){

    int n;
    cin >> n;
    string str;

    map<string, int> m;

    for(int i = 0; i < n; ++i){
        cin >> str;
        pair<string, int> p = make_pair(str, str.size());
        m.insert(p);
    }

    map<string, int> :: iterator it;

    for(it = m.begin(); it != m.end(); ++it){
        cout << (*it).first << " " << (*it).second << endl;
    }


    return 0;
}