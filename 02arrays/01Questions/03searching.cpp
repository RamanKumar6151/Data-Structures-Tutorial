#include<iostream>
#include<stdlib.h>

using namespace std;

int linear_search(int arr[], int N, int x){
// Time Complexity:

// Best Case: In the best case, the key might be present at the first index. So the best case complexity is O(1)
// Worst Case: In the worst case, the key might be present at the last index i.e., opposite to the end from which the search has started in the list. So the worst-case complexity is O(N) where N is the size of the list.
// Average Case: O(N)
// Auxiliary Space: O(1) as except for the variable to iterate through the list, no other variable is used. 
    for (int i=0; i<N; i++){
        if(arr[i]==x){
            return i;
        }        
    }
    return -1;
}

void sentinel_search(int arr[], int N, int x){
    int last=arr[N-1];
    arr[N-1]=x;
    int i=0;
    while(arr[i]!=x){
        i++;
    }
    // putting the last element back
    arr[N-1]=last;
    if((i<(N-1))&&(arr[N-1]==x)){
        cout<<i;
    }
    else{
        cout<<"not found";
    }
    
}

// driver code
int main(void){
    system("CLS");
    int arr[]={2,3,4,10,40};
    int x=10;
    int N=sizeof(arr)/sizeof(arr[0]);

    // function calling
    // cout<<linear_search(arr, N, x);
    sentinel_search(arr, N, 50);

    return 0;
}