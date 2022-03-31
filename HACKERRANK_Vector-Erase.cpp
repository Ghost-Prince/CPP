#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0; i<n; i++) {
        int x=0;
        cin>>x;
        v.push_back(x);
    }
    int position=0;
    cin>>position;
    position-=1;
    v.erase(v.begin()+position);
    int a=0,b=0;
    cin>>a>>b;
    a-=1;
    b-=1;
    v.erase(v.begin()+a,v.begin()+b);
    cout<<v.size()<<endl;
    for(int i:v) {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}