#include<bits/stdc++.h>
using namespace std;
int main() {
    int a[5][5];
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            if(i>j) {
                a[i][j]=0;
            }
            else {
                a[i][j]=1;
            }
        }
    }
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}