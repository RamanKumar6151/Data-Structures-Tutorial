// lecture 19
// STL priority queue


#include<iostream>
#include<stdlib.h>
#include<stdio.h>

#include<queue>

using namespace std;

int main(){
    system("CLS");

    // max-heap
    priority_queue<int> maxpq;

    // min-heap
    priority_queue<int, vector<int>, greater<int>>minpq;

    int j=0;
    maxpq.push(++j);
    maxpq.push(++j);
    maxpq.push(++j);
    maxpq.push(++j);
    maxpq.push(++j);

    cout<<maxpq.size()<<endl;
    int size=maxpq.size();

    for(int i=0;i<size;i++){
        printf("maxpq.top()=%d\n",maxpq.top());
        maxpq.pop();
    }

    printf("\nminpq\n");

    j=0;
    minpq.push(++j);
    minpq.push(++j);
    minpq.push(++j);
    minpq.push(++j);
    minpq.push(++j);

    int size2=minpq.size();
    for(int i=0;i<size2;i++){
        printf("minpq.top()=%d\n",minpq.top());
        minpq.pop();
    }

    printf("\nmaxpq.empty()=%d\n",maxpq.empty());
    printf("minpq.empty()=%d\n",minpq.empty());

    return 0;
}