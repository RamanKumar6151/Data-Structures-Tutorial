// lecture 18
// insertion sort
#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

// function

// main function
int main(){
    system("CLS");

    int arr[]={10,1,7,4,8,2,11};
    int n=sizeof(arr)/sizeof(int);
    printf("n=%d\n",n);
    // int j;
    // int temp;
    
    // for(int i=1;i<n;i++){
    //     temp=arr[i];
    //     j=i-1;
    //     for(;j>=0;j--){
    //         if(arr[j]>temp){
    //             // shift right
    //             arr[j+1]=arr[j];
    //         }
    //         else{
    //             // ruk jao
    //             break;
    //         }
    //     }
    //     arr[j+1]=temp;
    // }

    // int temp,j;
    // for(int i=1;i<n;i++){
    //     temp=arr[i];
    //     j=i-1;
    //     for(;j>=0;j--){
    //         if(arr[j]>temp){
    //             // shift right
    //             arr[j+1]=arr[j];
    //         }
    //         else{
    //             break;
    //         }
    //     }
    //     arr[j+1]=temp;
    // }

    int temp,j,i;
    for(i=1;i<n;i++){
        j=i-1;
        temp=arr[i];
        for(;j>=0;j--){
            if(arr[j]>temp){
                // shift right
                arr[j+1]=arr[j];
            }
            else{
                // stop
                break;
            }
        }
        arr[j+1]=temp;
    }

    printf("printing array");
    for(int i=0;i<n;i++){
        // printf("%d ",arr[i]);
        cout<<arr[i]<<" ";
    }

    return 0;
}