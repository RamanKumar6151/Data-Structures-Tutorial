#include<iostream>
using namespace std;

void update(int **p2){
    p2=p2+1;
}

void update2(int **p2){
    *p2=*p2+1;
}

void update3(int **p2){
    **p2=**p2+1;
}

int main(){
    system("CLS");

    int i=5;
    int* p=&i;
    int** p2=&p;

    cout<<"i="<<i<<endl;
    cout<<"p="<<p<<endl;
    cout<<"p2="<<p2<<endl;
    
    // update(p2); // this changes nothing since the p2 is passed as  value inside the update function
    // update2(p2); // this changes the p as *p2 is referncing to p, and there is no p in the update2 function, thus p in main updates()
    update3(p2);  // thisb will change i, since **p2 is ultimately referencing to i, this i+1= 6
    
    cout<<"i="<<i<<endl;
    cout<<"p="<<p<<endl;
    cout<<"p2="<<p2<<endl;
    
    return 0;
}