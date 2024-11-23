#include<iostream>

using namespace std;


int* pointer(int a){
    int* ptr = new int [a];
    for(int i = 0; i < a; i++){
        ptr[i] = i + 1;
    }

    return ptr;
};

int main(){

    int* ptr = pointer(5);
    for(int i = 0 ; i < 5 ; i++){
        cout << ptr[i] << endl;
    }

    delete[] ptr;
    return 0;
}