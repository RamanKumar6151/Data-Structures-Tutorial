// https://www.codingninjas.com/studio/problems/check-if-the-string-is-a-palindrome_1062633
// https://leetcode.com/problems/valid-palindrome/submissions/1176020250/
// https://cplusplus.com/reference/string/string/

// char arrays vs string
// https://stackoverflow.com/questions/1287306/difference-between-string-and-char-types-in-c

//  check if pollingdrome

#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

// checking if character is alphanumeric
bool isAlnum(char ch){
    if(
        ch>='A'&&ch<='Z'||
        ch>='a'&&ch<='z'||
        ch>='0'&&ch<='9'
    ){
        return true;
    }
    // if character is not alNum
    return false;
}

// converting UPPERCASE character to lowercase
char toLower(char ch){
    if(ch>='a'&&ch<='z'){
        return ch;
    }
    // if character is UPPERCASE
    return ch-'A'+'a';
}

bool isPalindrome(string s)
{
    // initializing start and end index
    int start=0;
    int end=s.size()-1;
    while(start<=end){
        // checking is character is alnum or not
        if(isAlnum(s[start])&&isAlnum(s[end])){
            // now checking if lowercase an pollingdrome at same time
            // if not same
            if(toLower(s[start])!=toLower(s[end])){
                return false;
            }
            // if above condition is false
            start++;
            end--;
        }
        else{
            // checking if s[start] is alNum
            if(isAlnum(s[start])){
                // then reducing end index by one
                end--;
            }
            else{
                // means s[start]  is not alNum
                // increasing valuse of start index by one
                start++;
            }
        }
    }
    return true;
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
    // printing chekPollingdrome result
    cout<<"string is pollingdrome? 1/0 "<<isPollingdrome(name)<<endl;
    return 0;
}