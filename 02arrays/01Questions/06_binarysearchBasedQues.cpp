// lecture 14
// sqrt(x) till floating numbers
#include<iostream>
#include<stdlib.h>

using namespace std;

// function
long long int sqrtInteger(int n){
        int s=0;
        int e=n;
        long long int mid=s+(e-s)/2;

        long long int ans=-1;
        while(s<=e){
            long long int square=mid*mid;
            if(square==n){
                return mid;
            }
            else if(square<n){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }
double morePrecison(int n, int precision, int tempSol){

    double factor=1;
    double ans;
    for(int i=0;i<precision;  i++){
        factor=factor/10;
        for(double j=0;j*j<n;j=j+factor){



            
            ans=j;
        }
    }
    return ans;
}
// main function
int main(){
    system("CLS");

    int n;
    cout<<"enter the number: ";
    cin>>n;
    int tempSol=sqrtInteger(n);
    cout<<"ans= "<<morePrecison(n, 3, tempSol)<<endl;

    return 0;
}