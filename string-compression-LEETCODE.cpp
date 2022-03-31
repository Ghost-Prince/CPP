#include<bits/stdc++.h>
using namespace std;
vector<char> compress(vector<char>& chars) {
    int len=chars.size();
    if(len==1) {
        return chars;
    }
    chars.push_back(' ');
    vector<char> ans;
    int curr_ct=1;
    for(int i=0; i<len-1; i++) {
        if(chars[i]==chars[i+1]) {
            curr_ct++;
        }
        else {
            if(curr_ct == 1) {
                ans.push_back(chars[i]);
                curr_ct=1;
            }
            else if(curr_ct>1) {
                ans.push_back(chars[i]);
                for(char& c: to_string(curr_ct)) {
                    ans.push_back(c);
                }
                curr_ct=1;
            }
        }
    }
    char last=chars[len-1];
    if(last==chars[len-2]) {
        ans.back()= ans.back()+1;
    }
    else {
        ans.push_back(last);
    }
    return ans;
}
int main() {
    vector<char> chars={'a','b','b','c','c','c','d'};
    vector<char> letters={'a','b','b','b','b','b','b','b','b','b','b','b','b'};
    vector<char> single={'a','a','b','b','c','c','c'};
    vector<char> ans=compress(single);
    for(char& c: ans) {
        cout<<c<<" ";
    }
    cout<<endl;
    return 0;
}