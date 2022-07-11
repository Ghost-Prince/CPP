#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> a) {
    sort(a.begin(),a.end());
    int x=1, len=a.size(), ans=0, curr_ct=0, troops=0;
    while(curr_ct < len) {
        troops+= x;
        ans++;
        auto lb= lower_bound(a.begin(),a.end(),troops);
        if(lb != a.end()) {
            *lb = INT_MIN;
            x++;
            troops=0;
            curr_ct++;
        }
    }
    return ans;
}
int main() {
    cout<<solve({1,1,1,5,9,8})<<" ";
    cout<<solve({9,9});
    return 0;
}