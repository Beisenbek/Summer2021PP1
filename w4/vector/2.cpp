#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){

    vector<int> v;

    for(int i = 10; i >= 1; --i){
        v.push_back(i + 1);
    }

    for(int i = 0; i < 10; ++i){
        cout << v[i] << " ";
    }

    cout << endl;

    sort(v.begin(), v.end());

    for(vector<int> :: iterator it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }


    return 0;
}