#include<bits/stdc++.h>
using namespace std;

void update(int arr[], int size){
    cout<<"Inside the funcion "<<endl;

    // updating first element of array
    arr[0]=120;
    arr[1]=240;

    // printing the array
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Going back to main funcion "<<endl;
}

int main(){
    system("CLS");

    int arr[3]={1,2,3};

    // when you pass arr as argument inside the funtion, you are giving the base adddress of array, thus any changes made in arr inside function chnages the main array, however this is not the case with variables, 
    // NOTE: that is why never make chnages in array inside a function
    update(arr, 3);

    // printing the array
    cout<<endl<<"printting in main function "<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}