#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        int len=0;
        cin>>len;
        vector<int> nums;
        for(int i=0; i<len; i++) {
            int x=0;
            cin>>x;
            nums.push_back(x);
        }
        bool flag=true;
        for(int i=0; i<len-2; i++) {
            if((nums[i]&1) != (nums[i+2]&1)) {
                flag=false;
                break;
            }
        }
        if(flag) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}