#include <iostream>
#include <vector>

using namespace std;

struct student{
    string name;
    double gpa;
    student(string name, double gpa){
        this->name = name;
        this->gpa = gpa;
    }
    void printInfo(){
        cout << name << " " << gpa << endl;
    }
};



int main(){

    student st("Bob",3.6);
    st.name = "John";
    st.printInfo();

    return 0;
}