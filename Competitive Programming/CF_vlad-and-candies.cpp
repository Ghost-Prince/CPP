#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        int types=0;
        cin>>types;
        vector<int> freq;
        for(int i=0; i<types; i++) {
            int x=0;
            cin>>x;
            freq.push_back(x);
        }
        if(types==1 && freq[0]==1) {
            cout<<"YES"<<endl;
            continue;
        }
        else if(types==1 && freq[0]>1) {
            cout<<"NO"<<endl;
            continue;
        }
        int fst=INT_MIN;
        for(int& num: freq) {
            fst=max(fst,num);
        }
        int snd=INT_MIN;
        for(int& num: freq) {
            if(num>=snd && num != fst) {
                snd=num;
            }
        }
        if(abs(fst-snd)==1) {
            cout<<"YES"<<endl;
        }
        else if(abs(fst-snd)>1) {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}