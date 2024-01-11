#include<iostream>
#include<stdlib.h>
using namespace std;

// prints reverse array
void reverseArray(int arr[], int size){
    for(int i=size-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    
}

// permanently changes the array*
void reverseArray2(int arr[], int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
}


int printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
 

int main(){
    system("CLS");

    int arr[]={1,2,3,4,5,6};
    int size=sizeof(arr)/sizeof(int);
    cout<<size<<endl;
    printArray(arr, size);
    // reverseArray(arr, size);
    reverseArray2(arr, size);
    printArray(arr, size);

    return 0;
}