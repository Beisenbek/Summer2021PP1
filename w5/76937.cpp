#include <iostream>
#include <stack>

using namespace std;


int main(){

    string str;
    cin >> str;

    stack<char> x;

    bool ok = true;

    for(size_t i = 0; i < str.size(); ++i){
        if(str[i] == '('){
            x.push(str[i]);
        }else if (str[i] == ')'){
            if(!x.empty()){
                x.pop();
            }else{
                ok = false;
                break;
            }
        }
    }

    if(ok && x.empty()){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}