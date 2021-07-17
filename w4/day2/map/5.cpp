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
        m[str] = str.size();
    }

    map<string, int> :: reverse_iterator rit;

    for(rit = m.rbegin(); rit != m.rend(); ++rit){
        cout << (*rit).first << " " << (*rit).second << endl;
    }


    return 0;
}