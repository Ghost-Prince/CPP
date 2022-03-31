#include<bits/stdc++.h>
using namespace std;
int main(){
    string str,subStr;
    getline(cin,str);
    sort(str.begin(),str.end());
    cout<<str;
    cout<<str.size()<<endl<<str.length()<<endl;
    getline(cin,subStr);
    cout<<str<<endl;
    cout<<str.empty()<<endl;
    str.clear();
    cout<<str.empty()<<endl;
    cout<<str<<"<--- string"<<endl;
    string s1="FAM", s2="ily";
    cout<<s2.compare(s1)<<endl;
    str.erase(3,3);   //str.erase(starting index,number of charater)
    cout<<str<<endl;
    cout<<str.find(subStr)<<endl;
    str.insert(2,"lol");
    cout<<str.substr(3,4)<<endl;
    string p="786";
    cout<<p+"abc"<<endl;
    cout<<stoi(p)+2<<endl;
    int a=786;
    cout<<to_string(a)+"abc"<<endl;
    return 0;
}