#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int start=0, end=n-1;
    while(start<end) {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    cout<<"Reversed arrray: "<<endl;
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}