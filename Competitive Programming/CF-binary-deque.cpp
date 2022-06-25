#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        vector<int> nums;
        deque<int> ones;
        int len=0, req_sum=0, act_sum=0;
        cin>>len>>req_sum;
        for(int i=0; i<len; i++) {
            int x=0;
            cin>>x;
            act_sum+=x;
            nums.push_back(x);
            if(x==1) {
                ones.push_back(i);
            }
        }
        if(req_sum>act_sum) {
            cout<<-1<<endl;
            continue;
        }
        else if(req_sum==act_sum) {
            cout<<0<<endl;
            continue;
        }
        int ans=0, start=0, last=len-1;
        while(start<=last) {
            int front_=ones.front()-start, back_=last-ones.back();
            if(front_ < back_) {
                act_sum-=1;
                ans+= front_;
                start=ones.front();
                ones.pop_front();
            }
            else if(back_ < front_) {
                act_sum-=1;
                ans+= back_;
                last=ones.back();
                ones.pop_back();
            }
            else if(front_ == back_) {
                act_sum-=1;
                ans+= front_;
                start=ones.front();
                ones.pop_front();
            }
            if(act_sum == req_sum) {
                cout<<ans<<endl;
                break;
            }
        }
    }
    return 0;
}