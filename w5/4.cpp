#include <iostream>
#include <algorithm>
#include <vector>
#include "utils.h"

using namespace std;

int main(){

    vector<int> v;

    generate2(&v, 100);

    printVector(&v);

    rotate(v.begin(), v.begin() + v.size()/2 ,v.end());

    printVector(&v);


    return 0;
}