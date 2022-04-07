#include<bits/stdc++.h>
using namespace std;
int search(char& c, string& s) {
    int len=s.length();
    for(int i=0; i<len; i++) {
        if(s[i]==c) {
            return i;
        }
    }
    return -1;
}
int main() {
    string given="";
    cin>>given;
    string expected="";
    cin>>expected;
    string input="";
    cin>>input;
    string ans="";
    for(char& c: input) {
        if(c>='a' && c<='z') {
            int pos=search(c,given);
            ans.push_back(expected[pos]);
        }
        else if(c>='A' && c<='Z') {
            char copy=c;
            copy=tolower(copy);
            int pos=search(copy,given);
            ans.push_back(toupper(expected[pos]));
        }
        else {
            ans.push_back(c);
        }
    }
    cout<<ans<<endl;
    return 0;
}