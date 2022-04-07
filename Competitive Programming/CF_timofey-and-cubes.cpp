#include<bits/stdc++.h>
using namespace std;
int main() {
    int n=0;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    for(int i=0; i<n/2; i++) {
        if(i%2==0) {
            swap(arr[i],arr[n-1-i]);
        }
    }
    for(int& num: arr) {
        cout<<num<<" ";
    }
    return 0;
}