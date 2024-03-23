#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    system("CLS");
    cout<<"FIBONACCI SERIES"<<endl;
    cout<<"n=(n-1)+(n+1)"<<endl;

    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=1; i<=10; i++){
        int nextNumber=a+b;
        cout<<nextNumber<<" ";
        a=b;
        b=nextNumber;
    }

    cout<<"\nPRIME NUMBERS"<<endl;
    bool flag=1;
    for(int i=2; i<7;i++){
        if(7%i==0){
            flag=0;
            break;
        }
    }
    if(flag==0){
        cout<<"Not prime";
    }
    else{
        cout<<"Prime";
    }
}