#include<iostream>
#include<stdlib.h>

using namespace std;

int getLength(char name[]){
    int count=0;
    for (int i=0; name[i]!='\0';i++){
        count++;
    }
    return count;
}


int main(){
    system("CLS");

    char ch='a';
    cout<<ch<<endl;    
    // char array string
    char name[10];
    cin>>name;
    // name[2]='\0';
    cout<<name<<endl;

    // length of a string
    cout<<"length of string="<<getLength(name)<<endl;

    return 0;
}