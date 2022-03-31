#include<bits/stdc++.h>
using namespace std;
int main() {
    int n=0;
    cin>>n;
    vector<int> nums;
    int pos=0, neg=0, zero=0;
    for(int i=0; i<n; i++) {
        int x=0;
        cin>>x;
        nums.push_back(x);
        if(x>0) {
            pos++;
        }
        else if(x<0) {
            neg++;
        }
        else {
            zero++;
        }
    }
    n=(n+2-1)/2;
    if(pos<n && neg<n) {
        cout<<0<<endl;
    }
    else if(pos>=neg) {
        cout<<1<<endl;
    }
    else {
        cout<<-1<<endl;
    }
    return 0;
}