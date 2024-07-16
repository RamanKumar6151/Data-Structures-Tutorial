// https://geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1
#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

char getMaxOcc(string s){
    int arr[26]={0};
    int number=0;
    for (int i=0;i<s.length();i++){
        char ch=s[i];
        // lowercase
        if(ch>='a'&&ch<='z'){
            number=ch-'a';
            arr[number]++;
        }
        else{
            number=ch-'A';
            number++;
        }
    }

    int maxi=-1, ans=0;
    for(int i=0;i<s.length();i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }

    char finalAns='a'+ans;
    return finalAns;
}

int main(){
    system("cls");
    cout<<"main working...\n"<<endl;

    string s;
    cin>>s;
    cout<<getMaxOcc(s);

    return 0;
}