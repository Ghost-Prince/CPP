#include<bits/stdc++.h>
using namespace std;
int sum(int n) {
    cout<<"Recursive: ";
    if(n==0) {
        return n;
    } else {
        return n+sum(n-1);
    }
}
int main(){
    int num=0;
    cin>>num;
    cout<<sum(num)<<endl;
    return 0;
}