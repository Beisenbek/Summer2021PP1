#include <iostream>
#include <vector>

using namespace std;

struct student{
    string name;
    double gpa;
    student(string n, double g){
        name = n;
        gpa = g;
    }
    void printInfo(){
        cout << name << " " << gpa << endl;
    }
};



int main(){

    student st("Bob",3.6);
    st.printInfo();

    return 0;
}