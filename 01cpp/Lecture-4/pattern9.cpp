#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    system("CLs");
    // char ch='A';
    // cout<<ch++;
    // cout<<char(int(ch)+1);
    int r=6;
    int i=0;
    int j=0;
    char ch='A';
    while(i<r){
        while(j<r){
            cout<<ch<<" ";
            j++;
        }
        ch=int(ch)+1;
        i++;
        j=0;
        cout<<endl;
    }
    return 0;
}