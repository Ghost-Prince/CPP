#include<bits/stdc++.h>
using namespace std;
int main() {
    int len=0;
    cin>>len;
    string given="";
    cin>>given;
    deque<char> word;
    if(len & 1) {
        for(int i=0; i<len; i+=2) {
            word.push_front(given[i+1]);
            word.push_back(given[i]);
        }
        word.pop_front();
    }
    else {
        for(int i=0; i<len; i+=2) {
            word.push_back(given[i+1]);
            word.push_front(given[i]);
        }
    }
    given="";
    for(char& letter: word) {
        given.push_back(letter);
    }
    cout<<given<<endl;
    return 0;
}