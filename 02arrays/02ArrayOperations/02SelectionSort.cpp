#include<iostream>
#include<stdlib.h>

using namespace std;

void SelectionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int min_index=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        swap(arr[min_index],arr[i]);
    }
}

int main(){
    system("CLS");
    int arr[5]={64,25,12,11,22};
    SelectionSort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}