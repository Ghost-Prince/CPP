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
        int sum=0;
        int mini= *min_element(nums.begin(),nums.end());
        for(int& num: nums) {
            sum+= abs(num-mini);
        }
        cout<<sum<<endl;
    }
    return 0;
}