#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    system("CLS");
    cout<<"DECIMAL TO BINARY"<<endl;
    int n;
    cin>>n;
    int ans=0;
    int i=0;
    int mult=1;
    if(n<0){
        cout<<"number too small"<<endl;
    }
    else if(n>511){
        cout<<"number too big"<<endl;
    }
    else{
        while(n){
        // extracting last bit
        // if last bit is 0 then 0&1->0
        // if last bit is 1 then 1&1->1
        int last_bit=(n&1);
        ans=(last_bit*mult)+ans;
        i++;
        mult*=10;
        // reemoving last bit
        n>>=1;
    }
    }
    cout<<ans;
}