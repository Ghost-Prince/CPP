#include<bits/stdc++.h>
using namespace std;
int main() {
    int n=0;
    cin>>n;
    int len=0;
    string ans="";
    while(true) {
        ans.push_back('a');
        len++;
        if(len==n) break;
        ans.push_back('a');
        len++;
        if(len==n) break;
        ans.push_back('b');
        len++;
        if(len==n) break;
        ans.push_back('b');
        len++;
        if(len==n) break;
    }
    cout<<ans<<endl;
    return 0;
}