#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    system("CLS");
    
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

    return 0;
}