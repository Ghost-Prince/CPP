#include<bits/stdc++.h>
using namespace std;
void swap(char* a, char* b) {
    char temp= *a;
    *a = *b;
    *b = temp;
}
int main() {
    string str;
    deque<string> deq;
    getline(cin,str);
    str.push_back(' ');
    string temporary="";
    for(char i: str) {
        if(i==' ' || i=='.') {
            deq.push_back(temporary);
            temporary="";
        } else {
            temporary.push_back(i);
        }
    }
    str="";
    for(string i: deq) {
        int start=0, end=i.size()-1;
        while(start<=end) {
            swap(&i[start], &i[end]);
            start++;
            end--;
        }
        str=str+i+" ";
    }
    cout<<str<<endl;
    return 0;
}