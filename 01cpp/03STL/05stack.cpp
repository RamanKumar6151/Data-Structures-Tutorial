// lecture 19
// STL stack

#include<iostream>
#include<stdlib.h>
#include<stdio.h>

#include<stack>

using namespace std;

int main(){
    system("CLS");

    stack<int> s;

    int i=0;
    s.push(++i);
    s.push(++i);
    s.push(++i);

    printf("top element s.top()=%d\n",s.top());
    printf("size of stack s.size()=%d\n",s.size());
    
    printf("\ns.pop()\n");
    s.pop();
        printf("top element s.top()=%d\n",s.top());
        printf("size of stack s.size()=%d\n",s.size());

    return 0;
}