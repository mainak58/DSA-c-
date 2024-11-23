#include<iostream>
#include<vector>

using namespace std;

class UseConstructor{

    public:

    string* studentName;
    int currentClass;
    vector<string> allStudentsNames;

    UseConstructor(string name , int number , vector<string> arr){
        studentName = new string (name);
        currentClass = number;
        allStudentsNames = arr;
        cout << "constructor called" << endl;
    }

    ~UseConstructor(){
        delete studentName;
        cout << "Calling deconstctor" << endl;
    }
    
    void printValue(){
        cout << "Student Name " << *studentName << endl;
        cout << "currentClass " << currentClass << endl;
        for( auto name : allStudentsNames){
            cout << name << endl;
        }
    }
};

int main(){

    UseConstructor defalutValue("mainak" , 8 , {"mainak" , "karmakar" , "is" , "my" , "name"});
    defalutValue.printValue();
    return 0;
}