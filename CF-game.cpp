#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        int len=0;
        cin>>len;
        vector<int> stage;
        for(int i=0; i<len; i++) {
            int x=0;
            cin>>x;
            stage.push_back(x);
        }
        int coins=0;
        for(int i=0; i<len; ) {
            if(stage[i+1]==1) {
                i=i+1;
            }
            else {
                auto it=find(stage.begin(),stage.end(),1);
                int next=it-stage.begin();
                coins+=(next-i);
                i=next;
            }
        }
        cout<<coins<<endl;
    }
    return 0;
}