#include <iostream>
#include <vector>

using namespace std;


struct student{
    string name;
    double gpa;
};


void printInfo(student s){
    cout << s.name << " " << s.gpa << endl;
}

int main(){


    student st;

    st.name = "Bob";
    st.gpa = 3.4;

    printInfo(st);

    return 0;
}