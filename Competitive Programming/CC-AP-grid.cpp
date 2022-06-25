#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        int row=0, col=0;
        cin>>row>>col;
        vector<vector<int>> grid;
        int n=0;
        for(int i=0; i<row; i++) {
            vector<int> temp;
            temp.push_back(2*n + 1);
            for(int j=2; j<=col; j++) {
                temp.push_back(j * temp.front());
            }
            grid.push_back(temp);
            n++;
        }
        for(vector<int>& row: grid) {
            for(int& num: row) {
                cout<<num<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}