#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        int len=0, ans=0;
        cin>>len;
        string str="";
        cin>>str;
        unordered_map<char,int> mp;
        for(char& letter: str) {
            mp[letter]++;
            if(mp[letter]==1) {
                ans+=2;
            }
            else if(mp[letter]>1) {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}