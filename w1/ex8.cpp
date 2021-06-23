#include <iostream>
#include <iomanip>


using namespace  std;

int main() {

    int n;
    cin >> n;

    int r1 = n % 2;
    int r2 = n/2 % 2;
    int r3 = n/4 % 2;
    int r4 = n/8 % 2;
    int r5 = n/16 % 2;


    //cout <<r4 << r3 << r2 << r1 << endl;
    //cout <<r1 << r2 << r3 << r4 << endl;
    //int m = r4 * 8 + r3 * 4 + r2 * 2 + r1 * 1;

    int m2 = r1 * 8 + r2 * 4 + r3 * 2 + r4 * 1;
    cout << m2 << endl;


    return 0;
}
