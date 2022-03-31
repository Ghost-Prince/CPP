#include<bits/stdc++.h>
using namespace std;
void swap(int *x, int* y) {
    int temp= *x;
    *x = *y;
    *y=temp;
}
int main() {
    int size;
    cout<<"Enter size: ";
    cin>>size;
    int arr[size];
    cout<<"Enter "<<size<<" enements: "<<endl;
    for(int i=0; i<size; i++) {
        cin>>arr[i];    
    }
    int start=0, end=size-1;
    while(start<=end) {
        swap(&arr[start], &arr[end]);
        start++;
        end--;
    }
    cout<<"Reversed array: ";
    for(int i: arr) {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}