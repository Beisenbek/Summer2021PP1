#include <iostream>
#include <algorithm>
#include <vector>
#include "utils.h"

#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand

using namespace std;

int get2 () { return 2; }

int RandomNumber () { 
    return rand() % 100 + 1; 
}

int main(){

    srand(time(0));

    vector<int> v(10);

    generate(v.begin(), v.end(), RandomNumber);

    printVector(&v);


    return 0;
}