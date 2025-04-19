// https://leetcode.com/problems/remove-all-occurrences-of-a-substring/description/
// ren=move all occurances

#include<bits/stdc++.h>

using namespace std;

string removeOccurrences(string s, string part) {
    while(s.length()!=0 && s.find(part)<s.length()){
        s.erase(s.find(part), part.length());
    }
    return s;
}

int main(){
    system("CLS");
    cout<<"main working.....\n"<<endl;

    return 0;
}