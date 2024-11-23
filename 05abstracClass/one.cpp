#include<iostream>

using namespace std;

class Tea{
    public:
    virtual void prepareIngrdents() = 0;
    virtual void brew() = 0;
    virtual void serve() = 0;

    void makeTea(){
        prepareIngrdents();
        brew();
        serve();
    }
};

class GreenTea : public Tea{
    public:
    void prepareIngrdents() override{
        cout << "GreenTea prepareIngrdents overide" << endl;
    }

    void brew() override{
        cout << "Brew overRide" << endl;
    }
    void serve() override{
        cout << "serve overRide" << endl;
    }
};


int main(){

    GreenTea greenTea;
    greenTea.makeTea();
    return 0;
}