#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    system("CLS");
    int a=3;
    cout<<a<<endl;  // will return a garbage value
    // int a=9;  // will return an error, redefinition of a not allowed
    a=9;
    cout<<a<<endl;
    if(true){
        int a=5;
        cout<<a<<endl;
    }
    cout<<a<<endl;
    if(1){
        int b=1;
        if(1){
            cout<<" "<<b<<endl;
            int b=2;
            if(1){
                cout<<"  "<<b<<endl;
                int b=3;
                cout<<"  "<<b<<endl;
            }
        }
    }
}