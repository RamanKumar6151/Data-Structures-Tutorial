<<<<<<< HEAD
#include<bits/stdc++.h>
=======
#include<iostream>
#include<stdlib.h>
>>>>>>> 4d277152728bfaa89365c3580f45e008f35b89f6
using namespace std;

int main(){
    system("CLS");
    
<<<<<<< HEAD
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
=======
    // creating an array
    int a[10];

    // alloting the address of a[0] that is 0x61fee8 to pointer variable p
    int *p=&a[0];
    // printing the value stored in p that is the address of a[0]
    cout<<p<<endl;
    // printing the address of pointer p that is 0x61fee4
    cout<<&p<<endl;
    cout<<"\nSymbol table cannnot be changed, all the mapping between array address and array name is stored in symbol table"<<endl;
    // a=a+1; // will cause an error, beacuse he we tried to change the address of a or a[0] into a[1].
    // WE CAN NEVER REASSIGN AN ADDRESS OF AN ARRAY
    // but, the following code will work because it is not manipulating the mapping, but simply increasing the addres value
    p=p+1;  // so now p is storing the address  of a[1], that's why it worked
    cout<<p<<endl;
>>>>>>> 4d277152728bfaa89365c3580f45e008f35b89f6

    return 0;
}