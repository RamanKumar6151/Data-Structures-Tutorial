#include<iostream>
#include<conio.h>

using namespace std;

int binary_search(int arr[],int size, int key){
    // time complexity= O(log n)
    int start=0;
    int end=size-1;
    // int mid=(start+end)/2;
    // *******************************
    // to deal with bigger values
    int mid=start+(end-start)/2;
    // *******************************
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(key>arr[mid]){
            // moves right
            start=mid+1;
        }
        else if(key<arr[mid]){
            // moves left
            end=mid-1;
        }
        // mid=(start+end)/2;
        // *******************************
        // to deal with bigger values
        mid=start+(end-start)/2;
        // *******************************
    }
    return -1;
}

int main(){
    
    system("CLS");

    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};
    cout<<binary_search(even,6,12)<<endl;
    cout<<binary_search(odd,5,8)<<endl;
    cout<<binary_search(odd,5,67)<<endl;

    return 0;
}