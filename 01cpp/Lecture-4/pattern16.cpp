#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    system("CLs");
    //    *
    //   **
    //  ***
    // ****
    int n=6;
    int row =1;
    while(row<=n){
        // space print karlo
        int space=n-row;
        while(space>0){
            cout<<" ";
            space--;
        }
        // star print karlo
        int col=1;
        while(col<=row){
            cout<<"*";
            col++;
        }
        row++;
        cout<<endl;
    }
    return 0;
}