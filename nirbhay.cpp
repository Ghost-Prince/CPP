#include<bits/stdc++.h>
using namespace std;
int solve(int& input1, int& input2, vector<int>& input3, vector<vector<int>>& input4) {
    for(int& market: input3) {
        for(vector<int>& row: input4) {
            for(int& city: row) {
                if(city==market) {
                    city=-1;
                }
            }
        }
    }
    for(vector<int>& row: input4) {
        for(int& city: row) {
            if(city != -1) {
                return city;
            }
        }
    }
    vector<int> cities;
    for(int i=0; i<input1; i++) {
        cities.push_back(i);
    }
    for(int& city: cities) {
        auto it= find(input3.begin(),input3.end(),city);
        if(it==input3.end()) {
            return city;
        }
    }
    return -1;
}
int main() {
    int n=0, m=0;
    vector<int> market;
    vector<vector<int>> grid;
    cin>>n>>m;
    for(int i=0; i<m; i++) {
        int x=0;
        cin>>x;
        market.push_back(x);
    }
    for(int i=0; i<n; i++) {
        vector<int> temp;
        for(int i=0; i<n; i++) {
            int x=0;
            cin>>x;
            temp.push_back(x);
        }
        grid.push_back(temp);
    }
    cout<<solve(n,m,market,grid);
    return 0;
}