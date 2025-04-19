// find minimum and maximum value in given array
#include<bits/stdc++.h>
using namespace std;

// function for max value
// n is size of array here
int getMax(int num[], int n){
    int maxI=INT_MIN;
    // INT_MIN  represent the smallest integer value in int datatype possible
    for(int i=0;i<n;i++){
        // if(num[i]>max){
        //     max=num[i];
        // }
        
        // we got inbuilt function also for this operation
        maxI=max(maxI, num[i]);
    }

    return maxI;
}

// function for min value
// n is size of array here
int getMin(int num[], int n){
    int minI=INT_MAX;
    // INT_MAX  represent the greteast integer value in int datatype possible
    for(int i=0;i<n;i++){
        // if(num[i]<min){
        //     min=num[i];
        // }

        // we got inbuilt function also for this operation
        minI=min(minI, num[i]);
    }

    return minI;
}

int main(){
    system("CLS");

    int size;
    cout<<"eneter the size of array ";
    cin>>size;

    // array with size as a variable?
    // int num[size];  // bad practice, not a good thing better to allocate mass space like num[1000], for adding variables we will study that in pointers
    // so, we allocate 100 
    int num[100];

    cout<<endl<<"enter the values of array "<<endl;
    // taking input in arrays
    for(int i=0;i<size;i++){
        cin>>num[i];
    }

    // printing the maximum value
    cout<<"maximum value "<<getMax(num, size)<<endl;

    // printing the minimum value
    cout<<"minimum value "<<getMin(num, size)<<endl;

    return 0;
}