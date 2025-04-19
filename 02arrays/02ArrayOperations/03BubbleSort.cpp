#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int main(){
    system("CLS");
    int arr[]={10,1,7,6,14,9};
    int n=sizeof(arr)/sizeof(int);
    printf("n=%d\n",n);

    // round i
    for(int i=1;i<n;i++){

        printf("i=%d\n",i);
        bool swapped=true;

        for(int j=0;j<n-i;j++){

            printf("    j=%d\n",j);

            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }

        }
        if(swapped==false){
            break;
        }

    }

    printf("printing array");
    for(int i=0;i<n;i++){
        // printf("%d ",arr[i]);
        cout<<arr[i]<<" ";
    }
}