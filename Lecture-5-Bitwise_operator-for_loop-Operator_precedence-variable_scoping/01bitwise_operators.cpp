#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    
    system("CLS");
    
    int a=4;
    int b=6;

    cout<<"Bitwise operators"<<endl;

    cout<<"\nbitwise AND"<<endl;
    cout<<"a&b="<<(a&b)<<endl;
    
    cout<<"\nbitwise OR"<<endl;
    cout<<"a|b="<<(a|b)<<endl;
    
    cout<<"\nbitwise NOT"<<endl;
    cout<<"~a="<<~a<<endl;
    
    cout<<"\nbitwise XOR"<<endl;
    cout<<"a^b="<<(a^b)<<endl;

    cout<<"\nbitwise left shift"<<endl;
    cout<<"(19<<1)="<<(19<<1)<<endl;
    cout<<"(19<<2)="<<(19<<2)<<endl;
    
    cout<<"\nbitwise right shift"<<endl;
    cout<<"(17>>1)="<<(17>>1)<<endl;
    cout<<"(17>>2)="<<(17>>2)<<endl;

    return 0;
}