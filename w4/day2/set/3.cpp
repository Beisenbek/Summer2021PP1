#include <iostream>
#include <set>

using namespace std;


int main(){

    int n, x;
    cin >> n;

    set<int> s;

    for(int i = 0; i < n; ++i){
        cin >> x;
        s.insert(x);
    }

    
    int t;
    cin >> t;

    set<int> :: iterator it2 =  s.find(t);

    if(it2 != s.end()){
        s.erase(it2);

        set<int> :: iterator it;

        for(it = s.begin(); it != s.end(); ++it){
            cout << *it <<  " ";
        }

    }else{
        cout << "not found!";
    }


    return 0;
}