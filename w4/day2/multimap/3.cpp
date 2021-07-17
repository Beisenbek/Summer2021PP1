#include <iostream>
#include <map>

#define mmsii multimap<string, int> :: iterator 

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

    string x;
    cin >> x;
    
    pair< mmsii, mmsii>  r = m.equal_range(x);

    mmsii it;
    
    for(it = r.first; it != r.second; ++it){
        cout << (*it).first << " " << (*it).second << endl;
    }

    return 0;
}