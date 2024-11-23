#include<iostream>
#include<vector>

using namespace std;

class Myclass{

    private:
    string studentName;
    int currentClass;
    vector<string> allStudents;

    public:
    string getStudentName(){
        return studentName;
    }

    void setStudentName(string name){
        studentName = name;
    }

    
    vector<string> getallStudents(){
        return allStudents;
    }

    void setallStudents(vector<string> allName){
        allStudents = allName;
    }


    int getcurrentClass(){
        return currentClass;
    }

    void setcurrentClass(int cName){
        currentClass = cName;
    }

    void printAll(){
        cout << "student Name : " << studentName << endl;
        cout << "currentClass : " << currentClass << endl;
        for(auto it : allStudents){
            cout << it << endl;
        }
    }
};

int main(){

    Myclass class11;
    class11.setStudentName("mainak");

    class11.setcurrentClass(11);
    class11.setallStudents({"Mainak", "karmakar"});

    cout << "Student Name: " << class11.getStudentName() << endl;
    // class11.printAll();

    return 0;
}
