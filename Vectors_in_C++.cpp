#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v={1,2,3,4,5,6};
    cout<<v.size()<<endl<<v.capacity()<<endl;
    v.push_back(7);
    for(int i:v) {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<v.front()<<"  "<<v.back()<<endl;
    v.pop_back();
    for(auto i:v) {
        cout<<i<<"  ";
    }
    cout<<endl;
    v.clear();
    cout<<v.size()<<endl<<v.capacity()<<endl;
    return 0;
}