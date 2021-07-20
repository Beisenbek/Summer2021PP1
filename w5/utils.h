#include <vector>

using namespace std;

bool f(int x){
    if( x % 3 == 0) return true;
    return false;
}

void generate2(vector<int> * v, int n){
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
