#include <iostream>


using namespace  std;

int main() {

    int x;
    cin >> x;

    bool st1 = (x % 4 == 0);
    bool st2 = (x % 100 != 0);
    bool st3 = (x % 400 == 0);

    if((st1 && st2) or st3){
        cout << "LEAP YEAR";
    }else{
        cout << "NO";
    }

    return 0;
}
