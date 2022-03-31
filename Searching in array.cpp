#include<iostream>
using namespace std;
int main() {
    int n, search, j, i;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array:"<<endl;
    for(i=0; i<n; i++) {
        cin>>arr[i];
    }
    cout<<"Enter element to search: ";
    cin>>search;
    for(j=0; j<n; j++) {
        if(search==arr[j]) {
            cout<<search<<" is present at index: "<<j<<" and position: "<<j+1<<endl;
            break;
        }
    }
    if (j==n) {
        cout<<search<<" is not present in array."<<endl;
    }
    return 0;
}