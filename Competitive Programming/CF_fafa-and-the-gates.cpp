#include<iostream>
using namespace std;
int main() {
    int len=0;
    cin>>len;
    string moves="";
    cin>>moves;
    int up=0, right=0, coin=0;
    for(int i=0; i<len-1; i++) {
        if(moves[i]=='U') up++;
        else right++;
        if(up==right && moves[i]==moves[i+1]) {
            coin++;
        }
    }
    cout<<coin;
    return 0;
}