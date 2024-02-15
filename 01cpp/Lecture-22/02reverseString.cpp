// https://leetcode.com/problems/reverse-string/submissions/1175970957/
// reverse a string

#include<iostream>
#include<stdlib.h>

using namespace std;

// creating a function for reversing a string
// string and size of string as an argument
void reverse(char name[], int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        swap(name[s++],name[e--]);
    }
}

// creating a function to calculate the length of given string
int getLength(char name[]){
    int count=0;
    int i=0;
    while(name[i]!='\0'){
        count++;
        i++;
    }
    return count;
}

int main(){
    system("CLS");

    cout<<"main working.....\n"<<endl;

    // creating a string array
    char name[10];
    // taking input for string array
    cin>>name;
    // calculating the lenggth of the string
    int n=getLength(name);
    // calling the reverse function
    reverse(name, n);
    // printing reverse of a string
    cout<<"reverse string is "<<name<<endl;

    return 0;
}