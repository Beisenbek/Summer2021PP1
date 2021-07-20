#include <iostream>
#include <algorithm>
#include <vector>
#include "utils.h"

using namespace std;

int main(){

    int myints[] = {10,20,20,20,30,30,20,20,10}; 
    int n = sizeof(myints)/sizeof(myints[0]);

    vector<int> v(myints, myints + n);

    vector<int> :: iterator it = unique(v.begin(), v.end());

    cout << v.size() << endl;

    v.resize(distance(v.begin(), it));

    cout << v.size() << endl;

    printVector(&v);

    return 0;
}