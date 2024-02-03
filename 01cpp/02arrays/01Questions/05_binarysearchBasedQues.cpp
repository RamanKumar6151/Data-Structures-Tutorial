// lecture 14
// binary search based questions
#include<iostream>
#include<stdlib.h>

using namespace std;

// finding pivot element
int findPivot(int arr[], int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }

    return s;
}

// main function
int main(){
    system("CLS");

    int arr[5]={3,8,10,17,1};
    cout<<"pivot is: "<<findPivot(arr, 5);

    return 0;
}