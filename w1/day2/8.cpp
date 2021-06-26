#include <iostream>


using namespace  std;

void ex1(int x){
    if(x == 0) {
        cout << 0 << endl;
    }else{
        while(x > 0){
            cout << x % 10 << " ";
            x = x / 10;
        }
    }
}

void ex2(int x){
    do{
        cout << x % 10 << " ";
        x = x / 10;
    }while(x > 0);
}

int main() {
    int x;
    cin >> x;

    cout << "ex1:" << endl;
    ex1(x);
    cout << "---" << endl;
    cout << "ex2:" << endl;
    ex2(x);

    return 0;
}
