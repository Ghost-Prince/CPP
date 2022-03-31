#include<bits/stdc++.h>
using namespace std;
int power(int n) {
    if(n==0) {
        return 1;
    } else {
        return 2*power(n-1);
    }
}
int main() {
    int num=0;
    cin>>num;
    cout<<power(num)<<endl;
    return 0;
}