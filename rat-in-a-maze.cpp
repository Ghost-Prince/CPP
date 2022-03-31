#include<bits/stdc++.h>
using namespace std;
bool isSafe(vector<vector<int>>& maze, int row, int col) {
    if(row<5 && col<5 && maze[row][col]==1) {
        return true;
    }
    return false;
}
bool ratinMaze(vector<vector<int>>& maze, int row, int col, vector<vector<int>>& sol) {
    if(row==4 && col==4) {
        sol[row][col]=1;
        return true;
    }
    if(isSafe(maze, row, col)) {
        sol[row][col]=1;
        if(ratinMaze(maze,row+1,col, sol)) {
            return true;
        }
        if(ratinMaze(maze,row,col+1,sol)) {
            return true;
        }
        sol[row][col]=0;
        return false;
    }
    return false;
}
int main() {
    vector<vector<int>> maze;
    maze={{1,0,1,0,1},{1,1,1,1,1},{0,1,0,1,0},{1,0,0,1,1},{1,1,1,0,1}};
    vector<vector<int>> soln(5, vector<int> (5,0));
    ratinMaze(maze,0,0,soln);
    for(vector<int>& row: soln) {
        for(int& col: row) {
            cout<<col<<" ";
        }
        cout<<endl;
    }
    return 0;
}