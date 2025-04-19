// lecture 19
// STL list

#include<iostream>
#include<stdlib.h>
#include<stdio.h>

#include<list>

using namespace std;

int main(){
    system("CLS");

    list<int> l;
    int j=0;

    l.push_back(++j);
    l.push_back(++j);
    l.push_back(++j);
    l.push_back(++j);

    for(int i:l){
        printf("%d ",i);
    }printf("\n\n");

    printf("l.erase(l.begin());\n");
    l.erase(l.begin());
    for(int i:l){
        printf("%d ",i);
    }printf("\n\n");

    printf("l.size()=%d\n",l.size());

    // copying list
    printf("copying list\n");
    list<int> l2(l);
    for(int i:l2){
        printf("%d ",i);
    }printf("\n\n");

    // third list
    printf("third list\n");
    list<int> l3(5,100);
    for(int i:l3){
        printf("%d ",i);
    }printf("\n\n");

    return 0;
}