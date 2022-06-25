#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        int score=0;
        cin>>score;
        int h=score/100, o=score - h*100;
        if(o>10 || o+h>10) {
            cout<<-1<<endl;
        }
        else {
            cout<<o+h<<endl;
        }
    }
    return 0;
}