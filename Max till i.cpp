#include<iostream>
#include<climits>
using namespace std;
int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: "<<endl;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int mx=INT_MIN;
    cout<<"Max till i: ";
    for(int i=0; i<n; i++) {
        mx=max(arr[i],mx);
        cout<<mx<<" ";
    }
    return 0;
}