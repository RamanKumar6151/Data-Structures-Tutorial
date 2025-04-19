#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    system("CLS");

    cout<<"INCREMENT AND DECREMENT OPERATORS"<<endl;

    cout<<"Increment operators"<<endl;
    cout<<"post increment"<<endl;
    int i=4;
    int a=i++;
    cout<<"a="<<a<<endl;
    cout<<"i="<<i<<endl;

    cout<<"\npre increment"<<endl;
    int j=4;
    int b=++j;
    cout<<"b="<<b<<endl;
    cout<<"i="<<i<<endl;

    cout<<"\npost decrement"<<endl;
    int k=4;
    int c=k--;
    cout<<"k="<<k<<endl;
    cout<<"c="<<c<<endl;

    cout<<"\npost decrement"<<endl;
    int l=4;
    int d=--l;
    cout<<"l="<<l<<endl;
    cout<<"d="<<d<<endl;
}