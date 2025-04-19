#include<bits/stdc++.h>
using namespace std;

// we need to specify column size when passing a 2d array as parameter

void printRowSum(int arr[][4], int row, int col){
    cout<<"printing th row-wise sum:\n";
    for(int r=0;r<row;r++){
        int sum=0;
        for(int c=0;c<col;c++){
            sum+=arr[r][c];
        }
        cout<<sum<<endl;
    }
}

void printColSum(int arr[][4], int row, int col){
    cout<<"printing the col-wise sum:\n";
    for(int c=0;c<col;c++){
        int sum=0;
        for(int r=0;r<row;r++){
            sum+=arr[r][c];
        }
        cout<<sum<<endl;
    }
}

int maxSum(int arr[], int n){
    int max=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int maxRowSum(int arr[][4], int row, int col){
    int  arrSum[row];
    int max=arr[0][0];
    int rowIndex=-1;
    for(int r=0;r<row;r++){
        int sum=0;
        for(int c=0;c<col;c++){
            sum+=arr[r][c];
        }
        if(sum>max){
            max=sum;
            rowIndex=r;
        }
    }
    cout<<"max row sum is "<<max<<" at row index of ";
    return rowIndex;
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

    printRowSum(arr, 3, 4);
    cout<<maxRowSum(arr, 3, 4)<<"\n";
    printColSum(arr, 3, 4);

    return 0;
}