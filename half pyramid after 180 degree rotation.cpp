#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    for(int i=1; i<=n; i++) {
        int spaces=n-i;
        for(int j=1; j<=spaces; j++) {
            cout<<" ";
        }
        for(int k=1; k<=i; k++) {
            cout<<"#";
        }
        cout<<endl;
    }
}