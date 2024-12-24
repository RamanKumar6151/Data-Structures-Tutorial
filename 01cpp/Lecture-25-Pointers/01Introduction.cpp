#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    system("CLS");
    int num =5;
    cout<<num<<endl;
    // address operator - &
    cout<<"address of num is "<<&num<<endl;

    // pointer: can store address
    int *i=&num;
    // will print address
    cout<<"address is "<<i<<endl;
    // will print value stored at this address
    cout<<"value is "<<*i<<endl;
    cout<<"sizeof integer is"<<sizeof(num)<<endl;
    cout<<"sizeof pointer is"<<sizeof(i)<<endl;

    // pointer of double datatype
    cout<<"pointer of double datatype"<<endl;
    double d=4.3;
    double *p2=&d;
    // will print address
    cout<<"address is "<<p2<<endl;
    // will print value stored at this address
    cout<<"value is "<<*p2<<endl;
    cout<<"sizeof double is"<<sizeof(d)<<endl;
    cout<<"sizeof pointer is"<<sizeof(p2)<<endl;

    // In C++, the size of a pointer depends on the system architecture:
    // 32-bit systems: 4 bytes
    // 64-bit systems: 8 bytes
    
    
    return 0;
}
