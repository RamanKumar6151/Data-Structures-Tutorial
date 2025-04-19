#include<bits/stdc++.h>
using namespace std;
int main(){
    system("CLS");

    // creating a 2d arrray
    int arr[3][4];
    // inputting hardcoded
    // int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    // inputting row wise
    // int arr[3][4]={
        // {1,1,1,1},
        // {2,2,2,2},
        // {3,3,3,3}
    };
    
    // cout<<"taking input in 2d array 3x4"<<endl;
    // taking input in 2d array
    // for(int row=0;row<3;row++){
    //     for(int col=0;col<4;col++){
    //         cin>>arr[row][col];
    //     }
    // }


    
    cout<<"\nprinting the 2d array"<<endl;
    // print
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}