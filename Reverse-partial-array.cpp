#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> nums;
    int len=0;
    cin>>len;
    for(int i=0; i<len; i++) {
        int x=0;
        cin>>x;
        nums.push_back(x);
    }
    int k=0;
    cin>>k;
    int extra=len%k;
    for(int i=0; i<len; i+=k) {
        if(i==len-extra) {
            break;
        }
        reverse(nums.begin()+i, nums.begin()+i+k);
    }
    for(int& i: nums) {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}