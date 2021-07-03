#include <iostream>
#include <cmath>

using namespace std;

int main(){

    string str;

    cin >> str;

    int odd_sum = 0;
    int even_sum = 0;

    for(size_t i = 0; i < str.size(); ++i){
        if(i % 2 == 0){
            even_sum += (str[i]-48);
        }else{
            odd_sum += (str[i]-48);
        }
    }

    cout << ((even_sum == odd_sum)?"YES":"NO") << endl;
    
    return 0;
}