#include<iostream>
#include<stdlib.h>

#include<iomanip>

using namespace std;

int main(){
    system("CLS");

    // formatiing operators
    cout<<"formatting operators"<<endl;
    cout<<setw(6)<<"R"<<endl;
    cout<<setw(6)<<4444<<endl;

    cout<<"\nsetprecision()"<<endl;
    cout<<setprecision(5)<<123.456<<endl;
    cout.setf(ios::fixed);
    cout<<setprecision(5)<<123.456789123<<endl;
    cout.setf(ios::showpoint);
    cout<<setprecision(2)<<1.2<<endl;

    cout<<"\nincrement operator"<<endl;
    int sum=10,ctr=5;
    cout<<"sum+(ctr++)= "<<sum+(ctr++)<<endl;
    cout<<"sum++ + ++sum + ++sum + sum= "<<sum++ + ++sum + ++sum + sum<<endl;
    cout<<"sum= "<<sum<<endl;
    

    // conditional operators
    cout<<"\nconditional operator(?:)"<<endl;
    char result;
    int marks=30;
    result=marks>=50?'P':'F';
    cout<<"result= "<<result<<endl;

    cout<<"100/9= "<<100/9<<endl;
    cout<<"100/9.0= "<<100/9.0<<endl;

    return 0;
}