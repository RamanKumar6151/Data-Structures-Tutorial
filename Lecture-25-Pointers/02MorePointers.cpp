#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    system("CLS");
    // pointer to int is created and pointing to a garbage value, bad practice, ,should never do
    // int *p;
    // but if we do not know where to point then we could do
    int *p=0;
    // no value printed, as it depicts that pointer points to null or do not exists
    // cout<<*p<<endl;
    int num=5;
    // now we want to use the null pointer
    p=&num;
    cout<<p<<endl;
    cout<<*p<<endl;

    // creating a variable and putting num value in it
    int a=num;
    // incrementing a
    a++;
    // checking is a++ affected num
    cout<<num<<endl; // no effect

    // but if we increment pointer
    (*p)++;
    cout<<num<<endl;  // num is now 6
    
    // copying the value of one pointer to another pointer
    int *q=p;
    cout<<p<<" "<<q<<endl;
    cout<<*p<<" "<<*q<<endl;
    cout<<*p++<<endl;
    cout<<*p<<endl;
    // addind into the address stored in pointer
    cout<<p<<endl;
    p+=1;
    cout<<p<<endl;
    cout<<*p<<endl;

    return 0;
}