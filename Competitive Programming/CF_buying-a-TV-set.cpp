#include<algorithm>
#include<iostream>
using namespace std;
int main() {
    long long int max_h=0, max_w=0, h=0, w=0;
    cin>>max_h>>max_w>>h>>w;
    long long hcf= __gcd(h,w);
    h/=hcf;
    w/=hcf;
    cout<<min(max_h/h,max_w/w);
    return 0;
}