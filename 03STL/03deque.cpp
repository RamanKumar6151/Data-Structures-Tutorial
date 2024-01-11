// lecture 19
// STL deque

#include<iostream>
#include<stdlib.h>
#include<stdio.h>

#include<deque>

using namespace std;

int main(){
    system("CLS");

    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    for(int i:d){
        printf("%d ",i);
    }printf("\n\n");

    printf("d.pop_back()\n");
    d.pop_back();
    for(int i:d){
        printf("%d ",i);
    }printf("\n");

    d.push_front(3);

    printf("d.pop_front()\n");
    d.pop_front();
    for(int i:d){
        printf("%d ",i);
    }printf("\n\n");

    printf("d.at(1)=%d\n",d.at(0));

    printf("d.empty()=%d\n",d.empty());

    d.clear();

    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);

    for(int i:d){
        printf("%d ",i);
    }printf("\n");

    printf("d.erase(d.begin(),d.begin()+1)\n");
    // d.erase(d.begin(),d.begin()+1);
    d.erase(d.begin(),d.begin()+2);
    for(int i:d){
        printf("%d ",i);
    }printf("\n\n");

    return 0;
}