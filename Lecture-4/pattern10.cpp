#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    system("CLs");
    int r=3;
    int i=0;
    int j=0;
    char ch='A';
    while(i<r){
        while(j<r){
            cout<<ch<<" ";
            ch=int(ch)+1;
            j++;
        }
        ch='A';
        j=0;
        i++;
        cout<<endl;
    }
    return 0;
}