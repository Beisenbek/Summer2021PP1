#include <iostream>
#include <vector>

using namespace std;

struct student{
private:
    string name;
    vector<double> gpa;
public:
    double avgGPA;
    student(string name){
        this->name = name;
    }
    void addGPA(double g){
        gpa.push_back(g);
        avgGPA = 0;
        for(size_t i = 0; i < gpa.size(); ++i){
            avgGPA += gpa[i];
        }
        avgGPA /= gpa.size();
    }
    void printInfo(){
        cout << name << " ";
        for(size_t i = 0; i < gpa.size(); ++i){
            cout << gpa[i] << " ";
        }
        cout << avgGPA << endl;
    }
};

bool f(student s1, student s2){
    if(s1.avgGPA < s2.avgGPA) return true;
    return false;
}


int main(){

    int n, m;

    cin >> n >> m;
    vector<student> students;

    string name;
    double gpa;

    for(int i = 0; i < n; ++i){
        cin >> name;
        students.push_back(student(name));
        for(int j = 0; j < m; ++j){
            cin >> gpa;
            students[i].addGPA(gpa);
        }
    }

    sort(students.begin(), students.end(), f);

    for(int i = 0; i < n; ++i){
        students[i].printInfo();
    }

    return 0;
}