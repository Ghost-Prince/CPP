#include<bits/stdc++.h>
using namespace std;
bool comp(int a, int b) {
    return a>b;
}
int main() {
    int n=0;
    cin>>n;
    vector<int> nums;
    for(int i=0; i<n; i++) {
        int x=0;
        cin>>x;
        nums.push_back(x);
    }
    sort(nums.begin(),nums.end(),comp);
    for(int& num: nums) {
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}