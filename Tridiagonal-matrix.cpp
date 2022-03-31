#include<bits/stdc++.h>
using namespace std;
int main() {
    int m[5][5];
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            if(i==j || abs(i-j)==1) {
                m[i][j]=1;
            }
            else {
                m[i][j]=0;
            }
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