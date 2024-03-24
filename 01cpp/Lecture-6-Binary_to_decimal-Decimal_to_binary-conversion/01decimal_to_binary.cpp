#include<iostream>
#include<stdlib.h>
#include<math.h>


using namespace std;

int main(){
    system("CLS");
    cout<<"DECIMAL TO BINARY"<<endl;
    
    int n;
    cin>>n;
    cout<<"binary of "<<n<<"=";
    int ans=0;
    int i=0;
    while(n!=0){
        // extracting last bit
        int bit=(n&1);
        ans=(bit*pow(10, i))+ans;
        i++;
        // removing last bit
        n>>=1;
    }
    cout<<ans<<endl;
}