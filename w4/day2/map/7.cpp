#include <iostream>
#include <map>
#include <vector>

using namespace std;


int main(){

    int n, m, exam_points;
    cin >> n >> m;
    string str;

    map<string, vector<int> > students;

    for(int i = 0; i < n; ++i){
        cin >> str;
        vector<int> v;
        for(int j = 0; j < m; ++j){
            cin >> exam_points;
            v.push_back(exam_points);
        }
        students[str] = v;
    }

    map<string, vector<int> > :: iterator it;

    for(it = students.begin(); it != students.end(); ++it){
        cout << (*it).first << ": {";
        for(int i = 0; i < (*it).second.size(); ++i){
            cout << (*it).second[i] << " ";
        }
        cout << "}"<< endl;
    }

    return 0;
}