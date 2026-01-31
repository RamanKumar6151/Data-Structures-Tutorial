#include<bits/stdc++.h>
using namespace std;

int main(){
    system("CLS");
    
    int temp[10];
    // creating a pointer
    int *ptr=&temp[0];
    cout<<"sizeof(temp)="<<sizeof(temp)<<endl;
    cout<<"sizeof(*ptr)="<<sizeof(*ptr)<<endl;
    cout<<"sizeof(&ptr)="<<sizeof(&ptr)<<endl;  // 8 on 64 bit architecture, 4 on 32 bit architecture
    cout<<"\n";

    int a[20]={1,2,3,5};
    cout<<"&a[0]="<<&a[0]<<endl;
    cout<<"&a="<<&a<<endl;
    cout<<"a="<<a<<endl;

    cout<<"\n";

    int *p=&a[0];
    cout<<"p="<<p<<endl;
    cout<<"*p="<<*p<<endl;
    cout<<"&p="<<&p<<endl;

    return 0;
}