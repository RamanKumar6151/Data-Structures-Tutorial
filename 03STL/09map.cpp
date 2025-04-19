// lecture 19
// STL map

#include<iostream>
#include<stdlib.h>
#include<stdio.h>

#include<map>

using namespace std;

int main(){
    system("CLS");

    map<int,string> m;
    m[1]="Babbar";
    m[2]="Love";
    m[13]="Kumar";

    printf("printing the map\n");
    for(auto i:m){
        printf("i.first=%d ",i.first);
    }printf("\n\n"); 

    m.insert({5,"bheem"});
    for(auto i:m){
        // printf("m[%d]=%s\n",i.first,i.second);  // does not works
        cout<<"m["<<i.first<<"]="<<i.second<<endl;
    }printf("\n\n");

    printf("m.count(13)=%d\n\n",m.count(13));

    printf("before erase\n");
    for(auto i:m){
        // printf("m[%d]=%s\n",i.first,i.second);  // does not works
        cout<<"m["<<i.first<<"]="<<i.second<<endl;
    }printf("\n\n");

    m.erase(13);
    printf("before erase\n");
    for(auto i:m){
        // printf("m[%d]=%s\n",i.first,i.second);  // does not works
        cout<<"m["<<i.first<<"]="<<i.second<<endl;
    }printf("\n\n");


    cout<<"m.find(2)"<<endl;
    auto it=m.find(2);
    for(auto i=it;i!=m.end();i++){
        cout<<"m["<<(*i).first<<"]="<<(*i).second<<" ";        
    }cout<<endl;

    return 0;
}