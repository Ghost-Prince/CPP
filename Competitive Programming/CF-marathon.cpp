#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        int a=0, b=0, ans=0;
        cin>>a;
        for(int i=0; i<3; i++) {
            cin>>b;
            if(b>a) {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}