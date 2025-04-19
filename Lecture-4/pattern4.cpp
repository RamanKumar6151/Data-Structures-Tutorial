#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    system("CLS");
    int r;
    cout<<"Enter the number of rows: ";
    cin>>r;
    int c=0;
    int i=1;
    while(i<=r){
        while(c<i){
            cout<<"*";
            c++;
        }
        c=0;
        i++;
        cout<<endl;
    }
    return 0;
}