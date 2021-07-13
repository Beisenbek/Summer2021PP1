#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int x;
    vector<int> v;

    while(true){
        cin >> x;
        if(x == 0) break;
        v.push_back(x);
    }    

    int n = v.size() / 2;


    for(int i = 0; i < n; ++i){
        int k = v.size() - 1;
        v[i] = v[i] + v[k];
        v.erase(v.begin() + k);
    }

    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }

    return 0;
}