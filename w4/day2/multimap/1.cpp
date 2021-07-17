#include <iostream>
#include <map>

using namespace std;


int main(){

    int n, price;
    cin >> n;
    string str;

    multimap<string, int> m;

    for(int i = 0; i < n; ++i){
        cin >> str >> price;
        m.insert(make_pair(str, price));
    }

    multimap<string, int> :: iterator it;

    for(it = m.begin(); it != m.end(); ++it){
        cout << (*it).first << " " << (*it).second << endl;
    }


    return 0;
}