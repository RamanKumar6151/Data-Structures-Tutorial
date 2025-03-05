#include<bits/stdc++.h>
using namespace std;
int main(){
    system("CLS");
    // array decalaration
    // int number[3]={5,7,11};
    // array of size 100000 containing all 0
    int array[100000]={0};
    // int array[100000]={1}; // will not work, only works for 0

    // declare
    int number[15];

    // accesing the array
    cout<<"value at 0 index "<<number[0]<<endl;
    cout<<"value at 3 index "<<number[3]<<endl;
    cout<<"value at 14 index "<<number[14]<<endl;
    // since no valuue is given thus array may contain 0 and garbage values
    // whatif we access a index that was not created like index 20
    cout<<"value at 20 index "<<number[20]<<endl;  // will print garbage value or will return index out of bound error probably

    // new array
    int second[3]={5,7,11};  // index from 0 - 2
    // accesing the second array
    cout<<"value at 2 index "<<second[2]<<endl;
    cout<<endl<<"everything is fine"<<endl;

    // third new array
    cout<<endl<<"third array"<<endl;
    int third[15]={2,7};
    
    // print array
    for(int i=0; i< 15; i++){
        cout<<third[i]<<endl;  // only 2 7 followed by thirteen 0s, because of the rest of value were not initialised
    }

    // fourth array
    cout<<endl<<"fourth array with all values as 0"<<endl;
    int fourth[15]={0};  // all values in array has been initialised as 0
    for(int i =0; i<15; i++){
        cout<<fourth[i];  // all values will be 0
    }
    cout<<endl;

    // can we try same thing with 1? N0.
    // fifth array
    cout<<"\nfifth array\n";
    int fifth[10]={1};  // we cannot initialise all values with 1 through this method
    // printing fifth array
    for(int i =0;i<10;i++){
        cout<<fifth[i]; // 1 followed by nine 0s
    }
    cout<<endl;
    return 0;
}