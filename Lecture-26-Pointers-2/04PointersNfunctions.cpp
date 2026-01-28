#include<iostream>
#include<stdlib.h>
using namespace std;

// taking pointer as an argument in the following funtion
void print(int *p){
    cout<<*p<<endl;
}

// fucntion to update the pointer
int update(int *p){
    p=p+1;
    // *p=*p+1;
    return *p;
}

// function to sum all the elements of an array
// int getSum(int arr[], int n){
int getSum(int *arr, int n){
// int getSum(int arr, int n){  // here you passed the arr as an integer instead of pointer which is mandatory to wrok with array
    int sum=0;
    cout<<sizeof(arr)<<endl;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        // sum+=*(arr+i); // trying to configure with int getSum(int arr, int n), but will give an array because here you are using the pointer object
        // you cannot work with pointer in a function without passing the same pointer in function parameters
    }
    return sum;
}

int main(){
    system("CLS");

    int value=5;
    int *p=&value;

    // calling the print function
    print(p);
    cout<<&p<<endl;
    cout<<&value<<endl;

    // before calling update function
    cout<<"before calling update function "<<&p<<endl;
    // calling update function
    int q=update(p);
    cout<<q<<endl;
    // after calling update function
    cout<<"after calling update function "<<&p<<endl;

    int arr[5]={1,2,3,4,5};
    int sum=getSum(arr, 5);
    cout<<"sum of all elements in arr array is "<<sum<<endl;

    return 0;
}