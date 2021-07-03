#include <iostream>


using namespace std;

//int f(int a, int b);

int f(int a, int b){//signature
    return a + b;
}


void f2(){
    cout << 2 + 3 << endl;
}

int main(){

   // cout << f(2, 3) << endl;

   f2();

    return 0;
}

