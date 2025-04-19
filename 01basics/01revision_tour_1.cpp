#include<iostream>
#include<stdlib.h>

using namespace std;

// class
class department{
    char name[20];
    int num_emp;
    char hod[20];
    public:
        void add();
        void del();
        void modify();
        void print();
};

struct sturec{
    int rollno;
    char name[20];
    float marks;
    char grade;
};

int main(){
    system("CLS");
    
    cout<<"size of char="<<sizeof(char)<<endl;
    cout<<"size of char32_t="<<sizeof(char32_t)<<endl;

    // error: unqualified-id
    // char 1-2;
    // cout<<1-2;
    
    // escape sequences
    cout<<"\tHorizontal tab\nnew line"<<endl;
    cout<<"size of a escape sequence '\\n'="<<sizeof('\n');
    cout<<"\a";

    // real constants or fractional constants(literals) 
    float real=152E05;
    cout<<"\nreal= "<<real<<endl;

    // string literal
    cout<<"\nsize of str as a string literal= "<<sizeof("str")<<endl;

    // datatypes and modifiers
    cout<<"\n\ndatatypes and modifiers"<<endl;
    cout<<"size of short= "<<sizeof(short)<<endl;
    cout<<"size of int= "<<sizeof(int)<<endl;
    cout<<"size of long int= "<<sizeof(long int)<<endl;
    cout<<"size of long long int= "<<sizeof(long long int)<<endl;

    cout<<"\nsize of char= "<<sizeof(char)<<endl;

    cout<<"\nsize of float= "<<sizeof(float)<<endl;
    cout<<"size of double= "<<sizeof(double)<<endl;
    cout<<"size of long double= "<<sizeof(long double)<<endl;

    cout<<"\n\nRefrences"<<endl;
    int total=100;
    int &sum=total;
    cout<<"sum= "<<sum<<endl;
    cout<<"total= "<<total<<endl;
    total++;
    cout<<"sum= "<<sum<<endl;

    // structure
    cout<<"\n\nstructure"<<endl;
    sturec newstu;
    newstu.rollno=10;
    newstu.grade='a';
    cout<<"newstu.grade="<<newstu.grade<<endl;

    return 0;
}