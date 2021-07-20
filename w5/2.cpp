#include <iostream>
#include <algorithm>
#include <vector>
#include "utils.h"

using namespace std;

int main(){

    vector<int> v;

    for(int i = 0; i < 10; ++i){
        v.push_back(i + 1);
    }

    for(int i = 0; i < 10; ++i){
        cout << v[i] << " ";
    }

    int n = count_if(v.begin(), v.end(), f);

    cout << endl;

    cout << n << endl;

    return 0;
}