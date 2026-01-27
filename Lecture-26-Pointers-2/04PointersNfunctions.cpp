#include<iostream>
#include<stdlib.h>
using namespace std;

// taking pointer as an argument in the following funtion
void print(int *p){
    cout<<*p<<endl;
}

// fucntion to update the pointer
void update(int *p){
    p=p+1;
    // *p=*p+1;
}

int main(){
    system("CLS");

    int value=5;
    int *p=&value;

    // calling the print function
    print(p);
    cout<<&p<<endl;
    cout<<&value<<endl;

    // before calling update function
    cout<<"before calling update function "<<&p<<endl;
    // calling update function
    update(p);
    // after calling update function
    cout<<"after calling update function "<<&p<<endl;

    return 0;
}