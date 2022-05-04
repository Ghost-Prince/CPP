#include<bits/stdc++.h>
using namespace std;
bool palindrome(string& str) {
    int start=0, end=str.length()-1;
    while(start<=end) {
        if(str[start++] != str[end--]) {
            return false;
        }
    }
    return true;
}
int main() {
    vector<string> strs={"mom","dad","amam"};
    for(string& str: strs) {
        if(palindrome(str)) {
            cout<<str<<" is palindrome."<<endl;
        }
        else {
            cout<<str<<" is not palindrome."<<endl;
        }
    }
    return 0;
}