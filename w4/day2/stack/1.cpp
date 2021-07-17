#include <iostream>
#include <stack>

using namespace std;


int main(){


    stack<int> q;

    int n, x;

    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> x;
        q.push(x);
    }

    while(!q.empty()){
        cout << q.top() << " ";
        q.pop();
    }

    return 0;
}