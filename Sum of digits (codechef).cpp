#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc,sum,n;
    cin>>tc;
    for(int i=0; i<tc; i++) {
        cin>>n;
        sum=0;
        while(n!=0) {
            sum=sum+n%10;
            n=n/10;
        }
        cout<<sum<<endl;
    }
    return 0;
}