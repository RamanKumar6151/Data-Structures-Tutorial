// lecture
// topic

#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>


#include<array>
#include<vector>
#include<deque>
#include<list>
#include<stack>
#include<queue>
#include<set>

using namespace std;

int main(){
    system("CLS");

    array<int,4> arr={1,2,3,4};
    cout<<"arr.size()="<<arr.size()<<endl;
    cout<<"arr.at(3)="<<arr.at(3)<<endl;
    cout<<"arr.front()="<<arr.front()<<endl;
    cout<<"arr.back()="<<arr.back()<<endl;

    cout<<"\n";

    vector<int> vec;
    for(int i=5;i<10;i++){
        vec.push_back(i);
        cout<<"pushed "<<i<<" vec.size()="<<vec.size()<<" vec.capacity()="<<vec.capacity()<<endl;
    }

    // vec.pop_back_back()
    cout<<"before pop_back"<<endl;
    for(auto i:vec){
        cout<<i<<" ";
    }cout<<endl;
    vec.pop_back();
    cout<<"vec.pop_back()"<<endl;
    cout<<"after pop_back"<<endl;
    for(auto i:vec){
        cout<<i<<" ";
    }cout<<endl;

    vector<int> vec2(5,1);
    cout<<"\nvector<int> vec2(5,1);"<<endl;
    for(auto i:vec2){
        cout<<i<<" ";
    }cout<<endl;

    vector<int> vec3(vec);
    cout<<"\nvector<int> vec3(vec);"<<endl;
    for(auto i:vec3){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"\nDeque"<<endl;
    deque<int> deq;
    for(int i=2,j=1;i<10&&j<10;i+=2,j+=2){
        deq.push_front(i);
        deq.push_back(j);
        cout<<"pushed "<<i<<" at front and "<<j<<" at back"<<endl;
    }
    cout<<"printing the deque "<<endl;
    for(auto i:deq){
        cout<<i<<" ";
    }cout<<endl;
    deq.pop_back(); 
    deq.pop_front();
    cout<<"after pop_back() and pop_front()"<<endl;
    for(auto i:deq){
        cout<<i<<" ";
    }cout<<endl; 
    deq.erase(deq.begin()+2,deq.begin()+4);
    cout<<"deq.erase(deq.begin()+2,deq.begin()+4);"<<endl;
    for(auto i:deq){
        cout<<i<<" ";
    }cout<<endl; 

    cout<<"\nList"<<endl;

    list<int> li;
    for(int i=5;i<10;i++){
        li.push_back(i);
    }
    cout<<"printing the list"<<endl;
    for(auto i:li){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"li.size()="<<li.size()<<endl;
    cout<<"*(li.begin())="<<*(li.begin())<<endl;

    cout<<"\nstack"<<endl;
    stack<int> s;
    for(int i=5;i<10;i++){
        s.push(i);
    }
    cout<<"s.top()="<<s.top()<<endl;
    cout<<"printing the stack"<<endl;
    int size=s.size();
    for(int i=0;i<size;i++){
        cout<<s.top()<<endl;
        s.pop();
    }cout<<endl;
    cout<<"s.empty()="<<s.empty()<<endl;

    cout<<"\nqueue"<<endl;

    queue<int> q;
    for(int i=5;i<10;i++){
        cout<<"pushing "<<i<<endl;
        q.push(i);
    }
    cout<<"q.front()="<<q.front()<<endl;
    cout<<"q.size()="<<q.size()<<endl;
    int qsize=q.size();
    cout<<"printing the queue"<<endl;
    for(int i=0;i<qsize;i++){
        cout<<q.front()<<endl;
        q.pop();
    }
    cout<<"q.empty()="<<q.empty()<<endl;

    cout<<"\npriority queue"<<endl;
    // creating a priority queue
    // max heap
    priority_queue<int> maxpq;
    // min heap
    priority_queue<int ,vector<int>, greater<int>> minpq;

    // pushing in maxpq from greater number to lower number
    for(int i=10;i>5;i--){
        maxpq.push(i);
    }
    cout<<"maxpq.size()="<<maxpq.size()<<endl;
    // printing the priority queue maxpq
    int size_maxpq=maxpq.size();
    for(int i=0;i<size_maxpq;i++){
        cout<<"maxpq.top()="<<maxpq.top()<<endl;
        maxpq.pop();
    }
    cout<<"maxpq.empty()="<<maxpq.empty()<<endl;

    cout<<"minpq"<<endl;
    minpq.push(1);
    minpq.push(10);
    minpq.push(9);
    minpq.push(4);
    minpq.push(2);
    minpq.push(18);

    int size_minpq=minpq.size();
    while(true){
        if(minpq.empty()==0){
            cout<<"minpq.top()="<<minpq.top()<<endl;
            minpq.pop();
        }
        else{
            break;
        }
    }
    cout<<"minpq.empty()="<<minpq.empty()<<endl;

    cout<<"\nset"<<endl;
    set<int> st;
    // inserting thee elements in set
    st.insert(1);
    st.insert(6);
    st.insert(2);
    st.insert(0);
    st.insert(4);
    for(auto i:st){
        cout<<i<<endl;
    }

    return 0;
}