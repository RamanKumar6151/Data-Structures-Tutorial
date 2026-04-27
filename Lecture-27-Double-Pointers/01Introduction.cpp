#include<iostream>
using namespace std;

int main(){
    system("CLS");
    int i= 5;
    int* p=&i;
    int** p2=&p;

    cout<<"p="<<p<<endl;
    cout<<"address of i="<<&i<<endl;
    cout<<"address of p="<<&p<<endl;
    cout<<"p2 ="<<p2<<endl;
    

    return 0; 
}