#include<bits/stdc++.h>
using namespace std;
int main() {
    deque<int> d={1,2,3,4,5};
    d.push_back(6);
    d.push_front(0);
    for(auto i:d) {
        cout<<i<<" ";
    }
    cout<<endl;
    d.pop_back();
    d.pop_front();
    for(auto i:d) {
        cout<<i<<" ";
    }
    cout<<endl<<d.at(2)<<endl;
    deque<string> str;
    cout<<"Enter a string of 5 words"<<endl;
    for(int i=0; i<5; i++) {
        string temp="";
        getline(cin,temp);
        str.push_back(temp);
    }
    for(auto i:str) {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}