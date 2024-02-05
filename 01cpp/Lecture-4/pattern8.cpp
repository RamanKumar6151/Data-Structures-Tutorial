#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    system("CLs");
    int r=5;
    int i=1;
    int j;
    while(i<=r){
        j=i;
        while(j>0){
            cout<<j<<" ";
            j--;
        }
        i++;
        cout<<endl;
    }
    return 0;
}