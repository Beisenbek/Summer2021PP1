#include <iostream>
#include <algorithm>
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

    //sort(v.begin(), v.end());

    do{
      for(int i = 0; i < n; ++i){
          cout << v[i] << " ";
      }
      cout << endl;
    }while(prev_permutation(v.begin(), v.end()));

    return 0;
}