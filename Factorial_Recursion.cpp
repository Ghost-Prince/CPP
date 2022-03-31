#include<bits/stdc++.h>
using namespace std;
int factorial(int n) {
    if(n==0) {
        return 1;
    } else {
        return n*factorial(n-1);
    }
}
int main() {
    int num=0;
    cin>>num;
    cout<<factorial(num)<<endl;
    int fact=1;
    for(int i=1; i<=num; i++) {
        fact=fact*i;
    }
    cout<<fact<<endl;
    return 0;
}