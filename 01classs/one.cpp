#include<iostream>
#include<vector>
using namespace std;

class MyClass{
    public: 
    int students;
    string studentNames;
    vector<string> allStudentNames;

    void printNames(){
        cout << "Students: " << students << endl;
        cout << "StudentsName: " << studentNames;
        for(auto it : allStudentNames){
            cout << it << endl;
        }
    }
};

int main(){

    MyClass classEight ;

    classEight.students = 8 ;
    classEight.studentNames = "mainak";
    classEight.allStudentNames = {"hello" , "The hello "};

    classEight.printNames();
    return 0;
}