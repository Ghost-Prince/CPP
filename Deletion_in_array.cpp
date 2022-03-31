#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[10];
    cout<<"Enter elements: "<<endl;
    for(int i=0; i<10; i++) {
        cin>>arr[i];
    }
    int index;
    cout<<"Enter index to delete: ";
    cin>>index;
    for(int i=index; i<10; i++) {
        arr[i]=arr[i+1];
    }
    arr[9]=NULL;
    for(auto i: arr) {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}