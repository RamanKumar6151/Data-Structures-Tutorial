// swap alternate swap the alternate elements of array

#include<iostream>
#include<stdlib.h>
using namespace std;

void swapAlternate(int a[], int size){
    for (int i=0; i<size; i+=2){
        if(size%2!=0){
            if(i==size-1){
                break;
            }
        }
        // logic
        // int temp;
        // temp = a[i];
        // a[i]=a[i+1];
        // a[i+1]=temp;

        // inbuilt function
        swap(a[i], a[i+1]);
    }
}

void printArray(int a[], int size){
    for(int i=0; i<size; i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

int main(){
    system("CLS");

    int a[]={1,2,3,4,5};
    int size=sizeof(a)/sizeof(int);
    swapAlternate(a,size);
    printArray(a,size);
    cout<<size<<endl;

    int b[]={1,2,3,4,5,6,7,8};
    int size2=sizeof(b)/sizeof(int);
    swapAlternate(b,size2);
    printArray(b,size2);

    return 0;
}