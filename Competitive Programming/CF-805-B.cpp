#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        string word="";
        cin>>word;
        unordered_set<char> myset;
        int ans=0;
        for(char& letter: word) {
            myset.insert(letter);
            if(myset.size()>3) {
                ans++;
                myset.clear();
                myset.insert(letter);
            }
        }
        if(myset.size()) {
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}