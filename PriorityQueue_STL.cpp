#include<bits/stdc++.h>
using namespace std;
int main() {
    priority_queue<int> maxi;
    for(int i=0; i<5; i++) {
        int x;
        cin>>x;
        maxi.push(x);
    }
    int n=maxi.size();
    cout<<n<<endl;
    for(int i=0; i<n; i++) {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;
    return 0;
}