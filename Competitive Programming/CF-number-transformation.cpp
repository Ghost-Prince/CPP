#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        int x=0, y=0;
        cin>>x>>y;
        if(x>y) {
            cout<<0<<" "<<0<<endl;
            continue;
        }
        else if(x==y) {
            cout<<3<<" "<<1<<endl;
            continue;
        }
        int X=x, Y=y;
        bool flag=false;
        for(int b=2; b<=y ; b++) {
            int a=0;
            while(X <= Y) {
                X=X*b;
                a++;
                if(X==Y) {
                    cout<<a<<" "<<b<<endl;
                    flag=true;
                    break;
                }
            }
            if(flag) {
                break;
            }
            X=x;
        }
        if(flag==false) {
            cout<<0<<" "<<0<<endl;
        }
    }
    return 0;
}