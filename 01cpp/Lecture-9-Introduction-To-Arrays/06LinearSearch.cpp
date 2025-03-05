// Linear search

#include<bits/stdc++.h>
using namespace std;

bool search(int arr[], int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;  // true
        }
    }
    return 0;  //false
}

int main(){
    system("CLS");

    int arr[10]={5,7,-2,10,22, -2, 0, 5, 22, 1};
    // find whether there is desired value in given array or not
    int key;
    cout<<"enter the value to search ";
    cin>>key;
    bool result=search(arr, 10, key);
    if(search(arr, 10, key)){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }

    return 0;
}