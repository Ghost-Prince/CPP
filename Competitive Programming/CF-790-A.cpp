#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        string str="";
        cin>>str;
        int sum1=0, sum2=0;
        for(int i=0; i<3; i++) {
            sum1+= str[i]-'0';
            sum2+= str[i+3]-'0';
        }
        if(sum1==sum2) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}