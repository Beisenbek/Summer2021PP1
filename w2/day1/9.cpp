#include <iostream>


using namespace std;

int main(){

    string s, t;

    cin >> s >> t;

    size_t res = s.find(t);

    if(res == string::npos){
        cout << "not found!" << endl;
    }else{
        cout << "found!" << endl;
        cout << res << endl;
    }

    return 0;
}