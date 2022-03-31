#include<bits/stdc++.h>
using namespace std;
int main() {
    queue<string> que,q;
    for(int i=0; i<5; i++) {
        string temp;
        cin>>temp;
        que.push(temp);
    }
    int n=que.size();
    for(int i=0; i<n; i++) {
        cout<<que.front()<<" ";
        que.pop();
    }
    que.push("xyz"); //que.emplace("xyz");
    que.pop();
    cout<<que.front()<<endl<<que.back()<<endl;
    cout<<que.empty()<<endl;
    que.swap(q);
    cout<<que.empty()<<endl;
    return 0;
}