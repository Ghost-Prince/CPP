#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        int n=0;
        cin>>n;
        vector<int> vec;
        for(int i=0; i<n; i++) {
            int x=0;
            cin>>x;
            vec.push_back(x);
        }
        unordered_map<int,int> mp;
        bool flag=true;
        for(int& num: vec) {
            mp[num]++;
            if(mp[num]==3) {
                cout<<num<<endl;
                flag=false;
                break;
            }
        }
        if(flag) {
            cout<<-1<<endl;
        }
    }
    return 0;
}