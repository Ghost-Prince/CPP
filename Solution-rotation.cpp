#include<bits/stdc++.h>
using namespace std;
string p(string x) {
    string temp="";
    temp.push_back(x[x.length()-1]);
    x.insert(0,temp);
    x.pop_back();
    return x;
}
int main() {
    string str="";
    cin>>str;
    string result=p(str);
    cout<<result<<endl;
    return 0;
}