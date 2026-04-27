// https://www.naukri.com/code360/guided-paths/pointers/content/235645/offering/3168908

#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    system("CLS");

    // null pointer
    int *nullPtr=NULL;
    int *anotherNullPointer=0;

    cout<<nullPtr<<" "<<anotherNullPointer<<endl;

    // double pointer
    int a=10;
    int *p=&a;
    int **q=&p;
    
    cout<<a<<endl;
    cout<<*p<<endl;
    cout<<**q<<endl;

    // void pointer
    void *voidPointer;

    int i=10;
    voidPointer=&i;
    cout<<voidPointer<<endl;

    // wild pointer
    int *wildPointer; // not going to initialize
    cout<<wildPointer<<endl;
    return 0;
}
