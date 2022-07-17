#include<bits/stdc++.h>
using namespace std;
int fun(int num) {
    int ans=0;
    while(num) {
        num/=10;
        ans++;
    }
    return ans-1;
}
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        int num=0;
        cin>>num;
        cout<<int(num-pow(10,fun(num)))<<endl;
    }
    return 0;
}