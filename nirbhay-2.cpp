#include<bits/stdc++.h>
using namespace std;
int solve(int arr[], int size) {
    return *max_element(arr,arr+size) + *min_element(arr,arr+size);
}
int main() {
    int size=0;
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++) {
        cin>>arr[i];
    }
    cout<<solve(arr,size);
    return 0;
}