#include <iostream>

using namespace std;

int main(){

    string s;
    cin >> s;

    int digits[10];

    for(int i = 0; i < 10; ++i){
        digits[i] = 0;
    }

    for(size_t i = 0; i < s.size(); ++i){
        int d = int(s[i]-'0');
        digits[d]++;
    }

    bool ok = true;

    int q = -1;

    for(int i = 1; i < 10; ++i){
        if(digits[i] != 0){
            if(q == -1){
                q = digits[i];
            }else if(q != digits[i]){
                ok = false;
                break;
            }
        }
    }

    if(ok){
        cout << "YES";
    }else{
        cout << "NO";
    }
    

    return 0;
}

