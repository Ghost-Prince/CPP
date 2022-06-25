#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        int len=0;
        cin>>len;
        unordered_map<int,int> mp;
        int maxi=INT_MIN;
        for(int i=0; i<len; i++) {
            int num=0;
            cin>>num;
            mp[num]++;
            maxi=max(maxi,mp[num]);
        }
        cout<<len-maxi<<endl;
    }
    return 0;
}