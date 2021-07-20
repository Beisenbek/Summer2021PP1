#include <iostream>
#include <vector>

using namespace std;

struct student{
private:
    string name;
    double gpa;
public:
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
    st.printInfo();

    return 0;
}