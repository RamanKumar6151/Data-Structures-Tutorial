#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if((ch>='0')&&(ch<='9')){
        cout<<"num";
    }
    else if((ch>='A')&&(ch<='Z')){
        cout<<"Uppercase";
    }
    else if((ch>='a')&&(ch<='z')){
        cout<<"lowercase";
    }

}