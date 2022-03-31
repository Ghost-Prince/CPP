#include<bits/stdc++.h>
using namespace std;
int HCF(int a, int b) {
    return a%b==0 ? b : HCF(b,a%b);
}
int main() {
    int a=0, b=0;
    cin>>a>>b;
    cout<<HCF(a,b)<<endl;
    return 0;
}