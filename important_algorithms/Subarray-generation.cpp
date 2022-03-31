#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> Subarrays(vector<int>& nums) {
    vector<vector<int>> subarrays;
    int n=nums.size();
    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            vector<int> subarray;
            for(int k=i; k<=j; k++) {
                subarray.push_back(nums[k]);
            }
            subarrays.push_back(subarray);
        }
    }
    return subarrays;
}
int main() {
    vector<int> nums={1,2,3,4,5};
    vector<vector<int>> subarrays=Subarrays(nums);
    for(vector<int>& subarray: subarrays) {
        for(int& i: subarray) {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}