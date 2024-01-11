// lecture 19
// STL algorthims

#include<iostream>
#include<stdlib.h>

#include<algorithm>
#include<vector>

using namespace std;

int main(){
    system("CLS");

    vector<int> v;
    for(int i=0,j=0;i<20;i++){
        if(i%2==0){
            v.push_back(i);
            cout<<v[j]<<" ";
            j++;
        }
    }cout<<endl;

    // binary search 
    cout<<"binary_search(v.begin(),v.end(),5)="<<binary_search(v.begin(),v.end(),5)<<endl;
    cout<<"binary_search(v.begin(),v.end(),14)="<<binary_search(v.begin(),v.end(),14)<<endl;

    cout<<endl;

    cout<<"lower_bound(v.begin(),v.end(),6)-v.begin()="<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"upper_bound(v.begin(),v.end(),6)-v.begin()="<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;

    cout<<endl;

    int a=3,b=9;
    cout<<"max(a,b)="<<max(a,b)<<endl;
    cout<<"min(a,b)="<<min(a,b)<<endl;

    cout<<endl;

    cout<<"swap(a,b)"<<endl;
    swap(a,b);
    cout<<"a="<<a<<",b="<<b<<endl;

    cout<<endl;
    
    string s="abcd";
    cout<<"reverse(s.begin(),s.end())"<<endl;
    reverse(s.begin(),s.end());
    cout<<"s="<<s<<endl;
    reverse(s.begin(),s.end()-1);
    cout<<"s="<<s<<endl;
    
    cout<<endl;

    cout<<"before rotating the vector"<<endl;
    for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"rotate(v.begin(),v.begin()+1,v.end())"<<endl;
    // rotate(v.begin(),v.begin()+int(v.size()/2),v.end());
    rotate(v.begin(),v.begin()+2,v.end());
    cout<<"after rotating the vector"<<endl;
    for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<endl;

    cout<<"sort(v.begin(),v.end);"<<endl;
    sort(v.begin(),v.end());
    for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;
    
    return 0;
}