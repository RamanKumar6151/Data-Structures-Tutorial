#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    system("CLs");
    //    *
    //   **
    //  ***
    // ****
    int r=4;
    int i=r-1;
    int j=0;
    while(i>0){
        while(j<i){
            cout<<"_";
            j++;
        }
        j=0;
        i--;
        if(i==0){
            break;
        }
        cout<<endl;
    }
    i=1;
    j=0;
    while(i<=r){
        while(j<i){
            cout<<"*"<<" ";
            j++;
        }
        j=0;
        i++;
        cout<<endl;
    }
    return 0;
}