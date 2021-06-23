#include <iostream>
#include <iomanip>


using namespace  std;

int main() {

    double d = 10.0 / 3;
    cout << setprecision(10) << d << endl;
    //cout.precision(1);
    //cout << d << endl;

    printf("%0.1f",d);
    return 0;
}
