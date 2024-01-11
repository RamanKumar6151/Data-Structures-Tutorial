// lecture 19
// STL arrays

#include<iostream>
#include<stdlib.h>
#include<stdio.h>

#include<array>

using namespace std;

int main(){
    system("CLS");

    // craeting an array without using stl
    int basic[4]={1,2,3,4};

    // creating an array using stl
    array<int,4> a={1,2,3,4};

    int size=a.size();
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
    printf("STL Array operations-->\n");
    printf("a.size()=%d\n",a.size());
    printf("a.at(2)=%d\n",a.at(2));
    printf("a.empty()=%d\n",a.empty());
    // cout<<"a.empty()="<<a.empty();  // will also give 0 as result
    printf("a.front()=%d\n",a.front());
    printf("a.back()=%d\n",a.back());
    

    return 0;
}