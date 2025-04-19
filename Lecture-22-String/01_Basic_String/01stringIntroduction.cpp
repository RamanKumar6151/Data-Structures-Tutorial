// https://www.geeksforgeeks.org/c-string-class-applications-set-2/?ref=ml_lbp

#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

int main(){
    system("CLS");

    // size has to be predefined
    char str[80]="GeeksforGeeks";
    // size not predefined in string
    string s("GeeeksforGeeks");
    // printing the character array and string
    cout<<str<<endl;
    cout<<s<<endl;

    // SOME USEFUL STRING FUNCTIONS
    // 1. str1.compare(str2)
    // 2. str1.find(substring)
    // 3. str1.find_first_of(substring)
    // 4. str1.find_last_of(substring)
    // 5. str1.rfind(substring)
    // 6. str1.insert(position, substring)
    // 7. str1.clear()
    // 8.str1.empty()

    cout<<endl;
    
    // 1. str1.compare(str2)
    // It is used to compare two strings. It returns the difference between the second string and the first string in the integer.
    string str1("geeksforgeeks");
    string str2("geeksforgeeks");
    if(str1.compare(str2)==0){
        cout<<"strings are equal"<<endl;
    }
    else{
        cout<<"strings are unequal"<<endl;
    }
    cout<<"str1.compare(str2)="<<str1.compare(str2)<<endl;
    string str3("raman");
    string str4("naman");
    // The output will be a positive number because "raman" is lexicographically greater than "naman".
    // 'r' (114 in ASCII) is greater than 'n' (110 in ASCII).
    cout<<"str3.compare(str4)="<<str3.compare(str4)<<endl;
    // The output will be a negative number because "naman" is lexicographically greater than "raman".
    cout<<"str4.compare(str3)="<<str4.compare(str3)<<endl;
    // The time complexity is thus O(min(n, m)), where:
    // n is the length of str1
    // m is the length of str2

    // 2. str1.find(substring)
    // Searches the string for the first occurrence of the substring specified in arguments. It returns the position of the first occurrence of substring.
    string str5("the geeks for geeks");
    string substring1("geeks");
    cout<<"\nstr5.find(substring1)="<<str5.find(substring1)<<endl;
    
    cout<<endl;

    // 3. str1.find_first_of(substring)
    // Searches the string for the first character that matches any of the characters specified in its arguments. It returns the position of the first character that matches.
    cout<<"string(\"geeks for geeks\").find_first_of(\"geeks\")="<<string("geeks for geeks").find_first_of("geeks")<<endl;

    cout<<endl;

    // 4. str1.find_last_of(substring)
    // Searches the string for the last character that matches any of the characters specified in its arguments. 'IT RETURNS THE POSITION OF THE LAST CHARACTER THAT MATCHES'.
    cout<<"string(\"geeks for geeks\").find_last_of(\"geeks\")="<<string("geeks for geeks").find_last_of("geeks")<<endl;

    cout<<endl;

    // 5. str1.rfind(substring)
    // Searches the string for the last occurrence of the substring specified in arguments. It returns the position of the last occurrence of a substring 
    cout<<"string(\"geeks for geeks\").rfind(\"geeks\")="<<string("geeks for geeks").rfind("geeks")<<endl;

    cout<<endl;

    // 6. str1.insert(position, substring)
    // 7. str1.clear()
    // 8.str1.empty()


    return 0;
}