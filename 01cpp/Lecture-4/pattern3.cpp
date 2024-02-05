#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    system("CLS");
    int n;
    cout<<"Enter num: ";
    cin>>n;
    int i=1;
    int j=1;
    while(j<=n){
        cout<<j<<" ";
        j++;
        i++;
        if(i==4){
            i=1;
            cout<<endl;
        }
    }
    return 0;
}