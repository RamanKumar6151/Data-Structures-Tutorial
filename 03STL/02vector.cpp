// lecture 19
// STL vector

#include<iostream>
#include<stdlib.h>
#include<stdio.h>

#include<vector>

using namespace std;

int main(){
    system("CLS");

    vector<int> v;
    printf("v.size()=%d\n",v.size());
    printf("v.capacity()=%d\n",v.capacity());

    v.push_back(1);
    printf("v.push_back(1); v.capacity()=%d\n",v.capacity());
    v.push_back(2);
    printf("v.push_back(2); v.capacity()=%d\n",v.capacity());
    v.push_back(3);
    printf("v.push_back(3); v.capacity()=%d\n",v.capacity());
    printf("v.size()=%d\n",v.size());
    
    printf("\n");

    printf("v.at(3)=%d\n",v.at(2));
    printf("v.front()=%d\n",v.front());
    printf("v.back()=%d\n",v.back());
    printf("before pop_back\n");
    for(int i:v){
        printf("%d ",i);
    }printf("\n");

    printf("v.pop_back()\n");
    v.pop_back();
    printf("after pop_back\n");
    // printing the vector
    for(int i:v){
        printf("%d ",i);
    }printf("\n");
    
    printf("\n");

    printf("size and capacity before v.clear()\n");
    printf("v.size()=%d\n",v.size());
    printf("v.capacity()=%d\n",v.capacity());

    printf("\n");

    printf("size and capacity after v.clear()\n");
    v.clear();
    printf("v.size()=%d\n",v.size());
    printf("v.capacity()=%d\n",v.capacity());
    
    printf("\n");

    // new vector
    printf("new vector\n");
    vector<int> v2(5,1);
    for(int i:v2){
        printf("%d ",i);
    }printf("\n\n");

    printf("third vector\n");
    // copying v2 into v3
    vector<int> v3(v2);
    for(int i:v3){
        printf("%d ",i);
    }printf("\n\n");

    // new vectors
    printf("test\n");
    int i=1;
    vector<int> v4(5,++i);
    v4.push_back(3);
    v4.erase(v4.begin());
    for(int i:v4){
        printf("%d ",i);
    }printf("\n");
    cout<<v4.at(4);
    v4.erase(v4.begin(),v4.begin()+v4.size()-1);
    cout<<"\n"<<v4.empty();
    return 0;
}