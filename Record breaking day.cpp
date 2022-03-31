#include<iostream>
#include<climits>
using namespace std;
int main() {
    int n;
    cout<<"Enter number of days: ";
    cin>>n;
    int arr[n];
    cout<<"Enter number of visitors each day: "<<endl;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int ans=0;
    int mx=INT_MIN;
    for(int i=0; i<n; i++) {
        if(arr[i]>mx && arr[i]>arr[i+1]) {
            ans=ans+1;
        }
        mx=max(mx,arr[i]);
    }
    cout<<"No. of record breaking days: "<<ans<<endl;
    return 0;
}