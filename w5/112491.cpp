#include <iostream>
#include <deque>

using namespace std;

int main(){

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string str;
    deque<string> t;
    while(getline(cin, str)){
        if(str[0] == '+'){
            //int x = atoi(str.substr(1).c_str());
            t.push_back(str.substr(1));
        }else{
            if(t.empty()){
                cout << "ERROR";
                return 0;
            }else{
                t.pop_back();
            }
        }
    }

    if(t.empty()){
        cout << "EMPTY";
    }else{
        while(!t.empty()){
            cout << t.front() << " ";
            t.pop_front();
        }
    }
    
    return 0;
}