#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    system("CLS");

    int arr[5]={1,2,3,4,5};

    // declaring the charater array
    char ch[6]="abcde";

    // printing the address of integer array
    cout<<arr<<endl;
    // trying print the address of character array
    cout<<ch<<endl;  // but unlike int array, entire content of character array will be printed
    // cout implementation works differently for int and char arrays

    char *c=&ch[0];
    cout<<c<<endl;  //output: abcde

    // what if we use a string tht doesnt has null
    char temp='z';
    char *q=&temp;
    cout<<q<<endl;

    return 0;
}