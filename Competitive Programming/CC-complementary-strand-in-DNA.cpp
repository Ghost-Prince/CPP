#include<bits/stdc++.h>
using namespace std;
int main() {
    unordered_map<char,char> mp;
    mp['A']='T';
    mp['C']='G';
    mp['T']='A';
    mp['G']='C';
    int tc=0;
    cin>>tc;
    while(tc--) {
        int len=0;
        string s="";
        cin>>len>>s;
        for(char& letter: s) {
            cout<<mp[letter];
        }
        cout<<endl;
    }
    return 0;
}