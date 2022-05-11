#include<bits/stdc++.h>
using namespace std;
string str="";
int first=0, last=0;
bool palindrome(string& str) {
    if(str[first] != str[last]) {
        return false;
    }
    else if(first<=last) {
        return true;
    }
    first++;
    last--;
    return palindrome(str);
}
int main() {
    cin>>str;
    last=str.length()-1;
    cout<<palindrome(str)<<endl;
    return 0;
}