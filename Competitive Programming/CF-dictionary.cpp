#include<bits/stdc++.h>
using namespace std;
int main() {
    string chars="abcdefghijklmnopqrstuvwxyz";
    vector<string> words;
    for(char& letter1: chars) {
        for(char& letter2: chars) {
            if(letter1 != letter2) {
                string t="";
                t.push_back(letter1);
                t.push_back(letter2);
                words.push_back(t);
            }
        }
    }
    int tc=0;
    cin>>tc;
    while(tc--) {
        string word="";
        cin>>word;
        cout<<find(words.begin(),words.end(),word) - words.begin() + 1<<endl;
    }
    return 0;
}