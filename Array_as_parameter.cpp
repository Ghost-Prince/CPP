#include<bits/stdc++.h>
using namespace std;
void funA(int arr[], int n) {    //here array is passed as pointer.
    cout<<"This is function A:"<<endl;
    arr[0]=10;
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main() {
    int a[]={2,4,6,8,10};
    funA(a, 5);
    cout<<"Actual array: ";
    for(int i:a) {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}