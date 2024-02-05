#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    system("CLS");
    int r, c;
    cout<<"enter the amount of rows and columns"<<endl;
    cin>>r>>c;
    int i=0, j=0;
    while(i<r){
        while(j<c){
            cout<<j+1;
            j++;
        }
        cout<<endl;
        j=0;
        i++;
    }
}