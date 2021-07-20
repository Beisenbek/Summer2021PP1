#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void generate(vector<int> * v, int n){
    for(int i = 0; i < n; ++i){
        v->push_back(i + 1);
    }
}

void printVector(vector<int> * v){
    for(int i = 0; i < v->size(); ++i){
        cout << v->at(i) << " ";
    }
    cout << endl;
}

int main(){

    vector<int> v;

    generate(&v, 100);

    printVector(&v);

    rotate(v.begin(), v.begin() + v.size()/2 ,v.end());

    printVector(&v);


    return 0;
}