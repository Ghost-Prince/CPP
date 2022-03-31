#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<string> words;
    while(true) {
        string str="";
        cin>>str;
        words.push_back(str);
        if(str=="\n") {break; }
    }
    for(string i: words) {cout<<i<<" ";}
    cout<<endl;
    return  0;
}