#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout<<"*";
        }
        int spaces=2*(n-i);
        for(int k=1; k<=spaces; k++) {
            cout<<" ";
        }
        for(int l=1; l<=i; l++) {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n; i>=1; i--) {
        for(int j=1; j<=i; j++) {
            cout<<"*";
        }
        int spaces=2*(n-i);
        for(int k=1; k<=spaces; k++) {
            cout<<" ";
        }
        for(int l=1; l<=i; l++) {
            cout<<"*";
        }
        cout<<endl;
    }    
    return 0;
}