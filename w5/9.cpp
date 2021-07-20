#include <iostream>
#include <vector>

using namespace std;

struct student{
    string name;
    double gpa;
    void printInfo(){
        cout << name << " " << gpa << endl;
    }
};



int main(){


    student st;

    st.name = "Bob";
    st.gpa = 3.4;

    st.printInfo();

    return 0;
}