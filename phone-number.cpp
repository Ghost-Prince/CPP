#include<bits/stdc++.h>
using namespace std;
unordered_map<string,char> mp={{"one",'1'},{"two",'2'},{"three",'3'},{"four",'4'},{"five",'5'},{"six",'6'},{"seven",'7'},{"eight",'8'},{"nine",'9'},{"zero",'0'}};
int main() {
    string str="";
    getline(cin,str);
    str.push_back(' ');
    vector<string> digits;
    string temp="";
    for(char& letter: str) {
        if(letter != ' ') {
            temp.push_back(letter);
        }
        else {
            digits.push_back(temp);
            temp="";
        }
    }
    str="";
    int len=digits.size();
    for(int i=0; i<len; ) {
        if(digits[i]=="double") {
            for(int j=0; j<2; j++) {
                str.push_back(mp[digits[i+1]]);
            }
            i+=2;
        }
        else if(digits[i]=="triple") {
            for(int j=0; j<3; j++) {
                str.push_back(mp[digits[i+1]]);
            }
            i+=2;
        }
        else {
            str.push_back(mp[digits[i]]);
            i++;
        }
    }
    cout<<str<<endl;
    return 0;
}