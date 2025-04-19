#include<bits/stdc++.h>
using namespace std;

// we need to specify column size when passing a 2d array as parameter
bool isPresent(int arr[][4], int target, int row, int col){
    // complexity = O(row*col)
    for(int r=0;r<row;r++){
        for(int c=0;c<col;c++){
            if(arr[r][c]==target){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    system("CLS");

    // creating a 2D array
    int arr[3][4]={
        {1,1,1,1},
        {2,2,2,2},
        {3,3,3,3}
    };

    cout<<"\nprinting the 2d array"<<endl;
    // print
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<"\n";
    }

    int target;
    cout<<"\nEnter the element to search: ";
    cin>>target;
    
    if(isPresent(arr, target, 3, 4)){
        cout<<"Element found";
    }
    else{
        cout<<"not found";
    }
    return 0;
}