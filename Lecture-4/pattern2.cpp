#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    system("CLS");
    int r, c;
    cout<<"Enter the number of rows: ";
    cin>>r;
    cout<<"Enter the number of columns: ";
    cin>>c;
    int i=1, j=c;
    while(i<=r){
        while(j>0){
            cout<<j<<" ";
            j--;
        }
        j=c;
        i++;
        cout<<endl;
    }
}