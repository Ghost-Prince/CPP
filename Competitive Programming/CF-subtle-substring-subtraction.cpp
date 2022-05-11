#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        string str="";
        cin>>str;
        int len=str.length();
        if(len==1) {
            cout<<"Bob "<<str[0]-'a'+1<<endl;
        }
        else if(len%2==0) {
            long long int sum=0;
            for(char& letter: str) {
                sum+= (letter-'a'+1);
            }
            cout<<"Alice "<<sum<<endl;
        }
        else if(len&1) {
            long long int alice1=0, alice2=0;
            for(int i=0; i<len-1; i++) {
                alice1+= (str[i]-'a'+1);
            }
            long long int bob1=str[len-1]-'a'+1;
            for(int i=1; i<len; i++) {
                alice2+= (str[i]-'a'+1);
            }
            long long int bob2=str[0]-'a'+1;
            cout<<"Alice "<<max(alice1-bob1,alice2-bob2)<<endl;
        }
    }
    return 0;
}