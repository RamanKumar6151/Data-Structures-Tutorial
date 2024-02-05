#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    system("CLs");
    int r=4;
    int i=1;
    int j=0;
    while(i<=4){
        while(j<i){
            cout<<i<<" ";
            j++;
        }
        j=0;
        i++;
        cout<<endl;
    }
    return 0;
}