#include<bits/stdc++.h>
using namespace std;
vector<int> spiralmatrix(vector<vector<int>>& matrix) {
    vector<int> ans;
    for(int& i: matrix[0]) {
        ans.push_back(i);
    }
    matrix.erase(matrix.begin());
    for(vector<int>& row: matrix) {
        auto it= --row.end();
        ans.push_back(*it);
        row.erase(it);
    }
    vector<int> temp= *(--matrix.end());
    for(int i= temp.size()-1; i>=0; i++) {
        ans.push_back(temp[i]);
    }
    matrix.erase(--matrix.end());
    return ans;
}
int main() {
    vector<vector<int>> matrix;
    matrix={{1,2,3,4},{5,6,7,8},{9,0,1,2},{3,4,5,6},{7,8,9,0}};
    vector<int> spiral=spiralmatrix(matrix);
    cout<<"LINEAR: ";
    for(int& i: spiral) {
        cout<<i<<" ";
    }
    cout<<"MATRIX: "<<endl;
    for(vector<int>& row: matrix) {
        for(int& i: row) {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}