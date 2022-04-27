#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<vector<int>> mat(4, vector<int>(4,0));
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            if(i==j) {
                mat[i][j]=pow(2,i+1);
            }
            else if(j==i+1) {
                mat[i][j]=2*(i+j);
            }
            else if(j==i-1) {
                mat[i][j]= -2*(i+j);
            }
        }
    }
    mat[3][2]=-12;
    mat[2][3]=12;
    for(vector<int>& row: mat) {
        for(int& num: row) {
            cout<<num<<" ";
        }
        cout<<endl;
    }
    return 0;
}