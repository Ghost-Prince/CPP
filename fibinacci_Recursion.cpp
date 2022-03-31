// 0 1 1 2 3 5 8 13 21 34 55 89...
#include<bits/stdc++.h>
using namespace std;
int fib(int n) {
    if(n==0 || n==1) {
        return n;
    } else {
        return fib(n-1)+fib(n-2);
    }
}
int main() {
    int num=0;
    cin>>num;
    cout<<fib(num)<<endl;
    return 0;
}