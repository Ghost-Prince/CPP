#include<bits/stdc++.h>
using namespace std;
int equilibrium(vector<int>& nums) {
    int len=nums.size();
    if(len<3) {
        return -1;
    }
    int sum1=accumulate(nums.begin(),nums.end(),0) - nums[0];
    int sum2=0;
    for(int i=1; i<len; i++) {
        sum2+=nums[i-1];
        sum1-=nums[i];
        if(sum1==sum2) {
            return i;
        }
    }
    return -1;
}
int main() {
    vector<int> nums={1,2,3,0,3,2,1};
    cout<<equilibrium(nums)<<endl;
    return 0;
}