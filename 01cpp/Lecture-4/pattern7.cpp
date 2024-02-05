#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    system("CLs");
    int r=5;
    int i=1;
    int j=0;
    int val;
    while(i<=r){
        val=i;
        while(j<i){
            // cout<<val<<" ";
            // or
            cout<<j+i<<" ";
            j++;
            val++;
        }
        j=0;
        i++;
        cout<<endl;
    }
    return 0;
}