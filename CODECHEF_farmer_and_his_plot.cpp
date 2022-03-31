#include<bits/stdc++.h>
using namespace std;
int HCF(int a, int b) {
    for(int i=2; i<=min(a,b); i++) {
        if(a%i==0 && b%i==0) {return i;}
    }
    return 1;
}
int main() {
    int n=0;
    cin>>n;
    for(int i=0; i<n; i++) {
        int length=0, breadth=0;
        cin>>length>>breadth;
        if(length==breadth) {cout<<1<<endl;}
        else{
            int square_side=HCF(length, breadth);
            cout<<(length*breadth)/pow(square_side,2)<<endl;
        }
    }
    return 0;
}