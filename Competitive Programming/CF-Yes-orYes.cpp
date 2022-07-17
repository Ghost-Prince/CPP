#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        string str="";
        cin>>str;
        for(char& letter: str) {
            letter=tolower(letter);
        }
        str=="yes" ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
    return 0;
}