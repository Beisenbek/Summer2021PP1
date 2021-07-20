#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void fn(int x){
    cout << x * 2 << " ";
}


int main(){

    int myints[] = {10,20,20,20,30,30,20,20,10}; 
    int n = sizeof(myints)/sizeof(myints[0]);

    vector<int> v(myints, myints + n);

    for_each(v.begin(), v.end(), fn);

    return 0;
}