#include<bits/stdc++.h>
using namespace std;
int getMax1(int arr[], int size) {
    int max=INT_MIN;
    for(int i=0; i<size; i++) {
        if(arr[i]>max) {
            max=arr[i];
        }
    }
    return max;
}
int getMax2(int arr[], int size) {
    return *max_element(arr,arr+size);
}
int main() {
    int arr[]={10,20,30,40,50};
    cout<<getMax1(arr,5)<<endl;
    cout<<getMax2(arr,5)<<endl;
    return 0;
}