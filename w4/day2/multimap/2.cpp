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

    string x;
    cin >> x;
    
    pair< multimap<string, int> :: iterator, multimap<string, int> ::iterator>  r = m.equal_range(x);

    multimap<string, int> :: iterator it;
    
    for(it = r.first; it != r.second; ++it){
        cout << (*it).first << " " << (*it).second << endl;
    }

    return 0;
}