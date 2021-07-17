#include <iostream>
#include <set>

using namespace std;

void read_data(set<int> * s){
    int n, x;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> x;
        s->insert(x);
    }
}

bool erase_item(int t, set<int> * s){
    bool res = false;
    set<int> :: iterator it =  s->find(t);
    if(it != s->end()){
        s->erase(it);
        res = true;
    }
    return res;
}

void print_data(set<int> *s){
    set<int> :: iterator it;
    for(it = s->begin(); it != s->end(); ++it){
        cout << *it <<  " ";
    }
    cout << endl;
}


int main(){

    set<int> s;

    read_data(&s);

    int t;
    cin >> t;

    if(erase_item(t, &s) != false){
        cout << "ok" << endl;
    }else{
        cout << "no" << endl;
    }

    print_data(&s);

    return 0;
}