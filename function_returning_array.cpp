#include<bits/stdc++.h>
using namespace std;
int* fun(int size) {
    int* p;
    p=new int[size];
    for(int i=0; i<size; i++) {
        p[i]=pow(i,2);
    }
    return p;
}
int main() {
    int* arr=fun(5);
    for(int i=0; i<5; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}