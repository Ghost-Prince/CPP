#include<bits/stdc++.h>
using namespace std;
int main() {
    string code="";
    cin>>code;
    string ans="";
    int len=code.length();
    while(code.length()) {
        if(code[0]=='.') {
            ans.push_back('0');
            code.erase(0,1);
        }
        else if(code[0]=='-' && code[1]=='.') {
            ans.push_back('1');
            code.erase(0,2);
        }
        else if(code[0]=='-' && code[1]=='-') {
            ans.push_back('2');
            code.erase(0,2);
        }
    }
    cout<<ans<<endl;
    return 0;
}