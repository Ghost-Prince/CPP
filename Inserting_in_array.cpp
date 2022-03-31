#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[10];
    cout<<"Enter Elements: "<<endl;
    for(int i=0; i<=8; i++) {
        cin>>arr[i];
    }
    int n, index;
    cout<<"Enter index: ";
    cin>>index;
    cout<<"Enter element to insert: ";
    cin>>n;
    for(int i=9; i>index; i--) {
        arr[i]=arr[i-1];
    }
    arr[index]=n;
    for(int i: arr) {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}