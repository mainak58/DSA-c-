#include<iostream>
using namespace std;

class MyClass{
    public: 
    int students;
    string studentNames;

    void printNames(){
        cout << "Students: " << students << endl;
        cout << "StudentsName: " << studentNames;
    }
};

int main(){

    MyClass classEight ;

    classEight.students = 8 ;
    classEight.studentNames = "mainak";

    classEight.printNames();
    return 0;
}