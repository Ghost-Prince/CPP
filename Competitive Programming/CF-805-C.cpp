#include<bits/stdc++.h>
using namespace std;
string check(vector<int>& start, vector<int>& end) {
    for(int& s1: start) {
        for(int& s2: end) {
            if(s1<s2) {
                return "YES";
            }
        }
    }
    return "NO";
}
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        getchar();
        int no_stations=0, queries=0;
        cin>>no_stations>>queries;
        unordered_map<int,vector<int>> mp;
        for(int i=0; i<no_stations; i++) {
            int station=0;
            cin>>station;
            if(mp[station].size()>1) {
                mp[station].pop_back();
                mp[station].push_back(i);
            }
            else {
                mp[station].push_back(i);
            }
        }
        for(int i=0; i<queries; i++) {
            int start=0, end=0;
            cin>>start>>end;
            if(mp[start].size()>0 && mp[end].size()>0) {
                cout<<check(mp[start],mp[end])<<endl;
            }
            else {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}