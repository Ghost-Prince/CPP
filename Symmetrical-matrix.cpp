#include<bits/stdc++.h>
using namespace std;
int main() {
    int val=10, m[5][5];
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            m[i][j]=0;
        }
    }
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            m[i][j]=val;
            m[j][i]=val;
            val++;
        }
    }
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}