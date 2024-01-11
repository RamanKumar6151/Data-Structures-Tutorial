// first and last occurences code studio
#include<iostream>
#include<stdlib.h>

using namespace std;

// finding the first occurence
int firstOcc(int arr[], int size, int key){
    int start=0;
    int end=size-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            // moving left
            end=mid-1;
        }
        else if(key<arr[mid]){
            // moves left
            end=mid-1;
        }
        else if(key>arr[mid]){
            // moves right
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
// finding the last  occurence
int lastOcc(int arr[], int size, int key){
    int start=0;
    int end=size-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            // moving right
            start=mid+1;
        }
        else if(key<arr[mid]){
            // moves left
            end=mid-1;
        }
        else if(key>arr[mid]){
            // moves right
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int main(){
    system("CLS");

    int arr[6]={1,2,3,3,3,4};
    cout<<firstOcc(arr,6,3)<<" "<<lastOcc(arr,6,3);
}