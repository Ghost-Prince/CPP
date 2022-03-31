#include<bits/stdc++.h>
using namespace std;
void change(string& s) {
    for(char& c: s) {
        if(c>='a' && c<='z') {
            c=c-'a'+'A';
        }
        else if(c>='A' && c<='Z') {
            c=c-'A'+'a';
        }
    }
}
int main() {
    string str;
    cout<<"Enter string: ";
    getline(cin,str);
    change(str);
    cout<<str<<endl;
    return 0;
}