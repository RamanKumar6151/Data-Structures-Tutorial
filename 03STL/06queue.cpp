// lecture 19
// STL queue

#include<iostream>
#include<stdlib.h>
#include<stdio.h>

#include<queue>

using namespace std;

int main(){
    system("CLS");

    queue<int> q;

    int j=0;
    q.push(++j);
    q.push(++j);
    q.push(++j);
    q.push(++j);
    q.push(++j);

    printf("front element q.front()=%d\n",q.front());
    printf("size of stack q.size()=%d\n",q.size());
    
    printf("\nq.pop()\n");
    q.pop();
        printf("front element q.front()=%d\n",q.front());
        printf("size of stack q.size()=%d\n",q.size());

    return 0;
}