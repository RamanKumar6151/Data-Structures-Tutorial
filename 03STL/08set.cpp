// lecture 19
// STL set

#include<iostream>
#include<stdlib.h>
#include<stdio.h>

#include<set>

using namespace std;

int main(){
    system("CLS");

    set<int> s;

    s.insert(5);
    s.insert(3);
    s.insert(8);
    s.insert(1);
    s.insert(2);
    s.insert(9);
    s.insert(1);


    printf("printing the set\n");
    for(auto i:s){
        printf("%d ",i);
    }printf("\n\n");

    // printf("s.erase(s.begin());\n");
    // s.erase(s.begin());
    // for(auto i:s){
    //     printf("%d ",i);
    // }printf("\n");

    set<int>::iterator it=s.begin();
    it++;
    s.erase(it);
    for(auto i:s){
        printf("%d ",i);
    }printf("\n\n");

    printf("s.count(1)=%d\n",s.count(1));
    printf("3 is present in set? s.count(3)=%d\n",s.count(3));
    printf("10 is present in set? s.count(10)=%d\n",s.count(10));

    // s.find(5)
    // printf("s.find(5)=%d\n",s.find(5));  // return sthe refernce of the 5 in set
    set<int>::iterator itr=s.find(5);
    for(auto i=itr;i!=s.end();i++){
        printf("%d ",*i);
    }printf("\n\n");
    
    return 0;
}