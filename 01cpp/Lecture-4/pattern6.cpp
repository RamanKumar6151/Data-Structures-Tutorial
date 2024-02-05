#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    system("CLs");
    int r=4;
    int i=1;
    int j=0;
    int k=1;
    while(i<=r){
        while(j<i){
            cout<<k<<" ";
            k++;
            j++;
        }
        j=0;
        i++;
        cout<<endl;
    }
    return 0;
}