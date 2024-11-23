#include<iostream>
#include<vector>

using namespace std;

class UseConstructor{

    public:

    string studentName;
    int currentClass;
    vector<string> allStudentsNames;

    UseConstructor(){
        studentName = "Mainak";
        currentClass = 12;
        allStudentsNames = {"mainak" , "karmakar" , "is" , "my" , "name"};
        cout << "constructor called" << endl;
    }

    void printValue(){
        cout << "Student Name " << studentName << endl;
        cout << "currentClass " << currentClass << endl;
        for( auto name : allStudentsNames){
            cout << name << endl;
        }
    }
};

int main(){

    UseConstructor defalutValue;
    defalutValue.printValue();
    return 0;
}