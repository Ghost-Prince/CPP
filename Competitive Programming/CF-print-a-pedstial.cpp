#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        int n=0;
        cin>>n;
        for(int a=3; a<n; a++) {
            int c=(n-a)/2;
            int b=n-a-c;
            if(c==b) {
                c--;
                b++;
            }
            if(a>b && b>c) {
                cout<<b<<" "<<a<<" "<<c<<endl;
                break;
            }
        }
    }
    return 0;
}