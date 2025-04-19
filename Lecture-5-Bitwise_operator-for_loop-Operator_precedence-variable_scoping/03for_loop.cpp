#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    system("CLS");
    cout<<"FOR LOOP"<<endl;
    cout<<"printing count from 1 to n"<<endl;
    // for(int i=1;i<=5;i++ )
    //     cout<<i<<endl;
    int i=1;
    for(;;){
        if(i<=5){
            cout<<i<<endl;
        }
        else{
            break;
        }
        i++;
    }
    int a,b;
    for (a = 0, b = 1; a >= 0 && b >= 1; a--, b--) {
        cout << a <<" "<< b;
    }
    
}