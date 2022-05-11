#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        string s="", t="";
        cin>>s>>t;
        if(t=="a") {
            cout<<1<<endl;
        }
        else if(count(t.begin(),t.end(),'a')>0) {
            cout<<-1<<endl;
        }
        else {
            cout<<(1ll<<s.length())<<endl;
        }
    }
    return 0;
}