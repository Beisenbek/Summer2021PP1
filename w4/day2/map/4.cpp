#include <iostream>
#include <map>

using namespace std;


int main(){

    int n;
    cin >> n;
    string name;
    int price;

    map<string, int> m;

    for(int i = 0; i < n; ++i){
        cin >> name >> price;
        m.insert(make_pair(name, price));
    }

    map<string, int> :: iterator it;

    for(it = m.begin(); it != m.end(); ++it){
        cout << (*it).first << " " << (*it).second << endl;
    }


    return 0;
}