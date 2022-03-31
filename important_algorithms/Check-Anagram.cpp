#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string a, string b) {
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    return a==b;
}
int main() {
    string a="medical";
    string b="decimal";
    cout<<isAnagram(a,b)<<endl;
    return 0;
}