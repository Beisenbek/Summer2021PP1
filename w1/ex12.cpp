#include <iostream>
#include <iomanip>


using namespace  std;

int main() {

   int a,b,c;
   cin >> a >> b >> c;

   bool possible1 = (a < b + c);
   bool possible2 = (b < a + c);
   bool possible3 = (c < b + a);

   //cout << e1 << endl;
   //cout << e2 << endl;
   //cout << e3 << endl;


    if(possible1 == 1 && possible2 == 1 && possible3 == 1){
        cout << "possible!";
    }else{
        cout << "not possible!";
    }
    cout << endl;

   if(possible1 == true && possible2 == true && possible3 == true){
       cout << "possible!";
   }else{
       cout << "not possible!";
   }
   cout << endl;

    if(possible1 && possible2 && possible3){
        cout << "possible!";
    }else {
        cout << "not possible!";
    }

    cout << endl;

    if(possible1 and possible2 and possible3){
        cout << "possible!";
    }else {
        cout << "not possible!";
    }

    return 0;
}
