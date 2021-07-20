#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n, x;
    cin >> n;

    vector<int> v;

    for(int i = 0; i < n; ++i){
        cin >> x;
        v.push_back(x);
    }

    int res = 0;

    for(int i = 0; i < v.size() - 1; ++i){
        for(int j = i + 1; j < v.size(); ++j){
            x = v[i] ^ v[j];
            for(int k = 0; k < v.size(); ++k){
                if(x == v[k]){
                    res++;
                    break;
                }
            }
        }
    }

    cout << res << endl;

    return 0;
}