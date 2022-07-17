#include<bits/stdc++.h>
using namespace std;
bool check(string& word, unordered_map<string,int>& mp) {
    string word1="", word2=word;
    while(word2.length()) {
        if(mp[word1]>0 && mp[word2]>0) {
            return true;
        }
        word1.push_back(word2[0]);
        word2.erase(0,1);
    }
    return false;
}
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        vector<string> vec;
        unordered_map<string,int> mp;
        int num=0;
        cin>>num;
        for(int i=0; i<num; i++) {
            string s="";
            cin>>s;
            vec.push_back(s);
            mp[s]++;
        }
        for(string& word: vec) {
            if(check(word,mp)) {
                cout<<1;
            }
            else {
                cout<<0;
            }
        }
        cout<<endl;
    }
    return 0;
}