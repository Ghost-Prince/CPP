#include<bits/stdc++.h>
using namespace std;
vector<int> solve(vector<vector<char>>& board) {
    for(int i=1; i<=6; i++) {
        for(int j=1; j<=6; j++) {
            if(board[i][j]=='#' && board[i+1][j+1]=='#' && board[i+1][j-1]=='#') {
                if(board[i-1][j+1]=='#' && board[i-1][j-1]=='#') {
                    return {i+1,j+1};
                }
            }
        }
    }
    return {};
}
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        vector<vector<char>> board;
        for(int i=0; i<8; i++) {
            vector<char> temp;
            for(int j=0; j<8; j++) {
                char x='A';
                cin>>x;
                temp.push_back(x);
            }
            board.push_back(temp);
        }
        for(int& x: solve(board)) {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}