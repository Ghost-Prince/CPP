#include<bits/stdc++.h>
using namespace std;
int main() {
    int n=0,k=0;
    cin>>n>>k;
    string num="";
    cin>>num;
    if(n==1 && k>0) {
        cout<<0<<endl;
        return 0;
    }
    else if(k==0) {
        cout<<num<<endl;
        return 0;
    }
    if(num[0] != '1') {
        num[0]='1';
        k--;
    }
    for(int i=1; i<n && k>0; i++) {
        if(num[i] != '0') {
            num[i]='0';
            k--;
        }
    }
    cout<<num<<endl;
    return 0;
}