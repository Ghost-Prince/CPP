#include<bits/stdc++.h>
using namespace std;
int main() {
    deque<int> d;
    int n,k;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter elements: "<<endl;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        d.push_back(x);
    }
    cout<<"Enter number of rotations: ";
    cin>>k;
    for(int i=0; i<k; i++) {
        //int temp=d.back();
        //d.pop_back();
        //d.push_front(temp);
        d.push_front(d.back());
        d.pop_back();
    }
    cout<<"Array after "<<k<<" rotations: ";
    for(int i:d) {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}