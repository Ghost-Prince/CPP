#include<bits/stdc++.h>
using namespace std;
int main() {
    list<int> l={1,2,3,10,4,5};
    //for(auto i:l) {
    //    cout<<i<<' ';
    //}
    cout<<endl;
    l.push_back(6);
    l.push_front(0);
    l.sort();
    //for(int i:l) {
    //    cout<<i<<" ";
    //} 
    cout<<endl;
    //l.pop_back();
    //l.pop_front();
    cout<<l.size()<<endl;
    //for(auto i: l) {
    //    cout<<i<<" ";
    //}
    l.reverse();
    //for(int i:l) {
    //    cout<<i<<" ";
    //}
    cout<<endl;
    list<int> l2(l);
    for(int i:l2) {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}