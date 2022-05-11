#include<bits/stdc++.h>
using namespace std;
void acyclicRotate(int arr[], int n, int k) {
    while(k--) {
        int last=arr[n-1];
        for(int i=n-1; i>=1; i--) {
            arr[i]=arr[i-1];
        }
        arr[0]=last;
    }
}
void cyclicRotate(int arr[], int n, int k) {
    while(k--) {
        int first=arr[0];
        for(int i=0; i<n-1; i++) {
            arr[i]=arr[i+1];
        }
        arr[n-1]=first;
    }
}
int maxAbsDiff(int arr1[], int arr2[], int n1, int n2) {
    int maxi=INT_MIN;
    for(int i=0; i<min(n1,n2); i++) {
        maxi=max(maxi, abs(arr1[i]-arr2[i]));
    }
    return maxi;
}
int main() {
    int n1=0, n2=0;
    cout<<"Enter size of both arrays: ";
    cin>>n1>>n2;
    int arr1[n1], arr2[n2];
    cout<<"Enter elements of 1st array: ";
    for(int i=0; i<n1; i++) {
        cin>>arr1[i];
    }
    cout<<"Enter elements of 2nd array: ";
    for(int i=0; i<n2; i++) {
        cin>>arr2[i];
    }
    // operation 1
    int result1=maxAbsDiff(arr1,arr2,n1,n2);
    // operation 2
    cyclicRotate(arr1,n1,n1-3); // rotating arr1 cyclically 
    int result2=maxAbsDiff(arr1,arr2,n1,n2);
    acyclicRotate(arr1,n1,n1-3);  // getting arr1 back to initial state
    // operation 3
    acyclicRotate(arr2,n2,n2-4); // rotating arr2 acyclically
    int result3=maxAbsDiff(arr1,arr2,n1,n2);
    cyclicRotate(arr2,n2,n2-4);  // getting arr2 back to initaial state
    // operation 4
    cyclicRotate(arr1,n1,n1-3);  // rotating arr1 cyclically
    acyclicRotate(arr2,n2,n2-4);  // rotating arr2 acyclically
    int result4=maxAbsDiff(arr1,arr2,n1,n2);
    // finding overall result
    int result=max(result1,max(result2,max(result3,result4)));
    cout<<"Overall maximum: "<<result<<endl;
    if(result==result1) {
        cout<<"maximum absolute difference exist between the contents of original arrays"<<endl;
    }
    else if(result==result2) {
        cout<<"maximum absolute difference exist between cyclically rotated arr1 and arr2"<<endl;
    }
    else if(result==result3) {
        cout<<"maximum absolute difference exist between acyclically rotated arr2 and arr1"<<endl;
    }
    else if(result==result4) {
        cout<<"maximum absolute difference exist between cyclically rotated arr1 and acyclically rotated arr2"<<endl;
    }
    return 0;
}