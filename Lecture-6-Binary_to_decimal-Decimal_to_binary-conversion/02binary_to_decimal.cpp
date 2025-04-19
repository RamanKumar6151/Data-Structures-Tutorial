#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main(){
    system("CLS");
    cout<<"BINARY TO DECIMAL"<<endl;
    int n;
    cin>>n;
    int ans=0;
    int i=0;
    while(n){
        // n&1 will convert our binary input into another inary representation
        // int bit=(n&1);
        int bit=n%10;
        if(bit==1){
            ans=(ans+pow(2,i));
        }
        i++;
        // removing last bit
        // n>>=1;
        // same as above problem
        // instead use
        n/=10;
    }
    cout<<ans;

}