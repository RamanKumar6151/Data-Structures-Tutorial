#include<bits/stdc++.h>
using namespace std;

int main(){
    system("CLS");
    // creating an array
    int arr[10]={23, 122, 41, 67};
    // 4(int size)*10(array size)= 40 blocks allocated
    // address of first block i.e. arr[0]
    // using array name
    cout<<"address of first block of array(using arr) = "<<arr<<endl;
    // using &(address of) operator
    cout<<"address of first block of array(using &arr[0]) = "<<&arr[0]<<endl;
    // value at arr[0]
    // cout<<"value at arr[0] "<<arr[0]<<endl;  // garbage value, since no value is stored
    cout<<"value at arr[0] "<<arr[0]<<endl;
    cout<<endl;

    // * operator="value at" operator
    cout<<"value stored at first block will be printed "<<*arr<<endl;
    cout<<"increment of the value stored at first block will be printed "<<*arr+1<<endl;
    cout<<"value at second block will be printed "<<*(arr+1)<<endl;
    cout<<"value at arr[2] i.e. third value stored in arr= "<<*(arr+2)<<endl;
    cout<<endl;
    // array_name[index]=*(array_name + index)
    // or
    // index[array_name]=*(index + array_name)
    int i=3;
    cout<<"i[arr]="<<i[arr]<<endl;
    cout<<"*(i + arr)="<<*(i+ arr)<<endl;
    return 0;
}