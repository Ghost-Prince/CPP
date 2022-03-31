#include<bits/stdc++.h>
using namespace std;
void print(int num) {
    for(int i=10; i>=0; i--) {
        cout<<((num>>i) & 1);
    }
    cout<<endl;
}
int main() {
    // checking whether ith bit is set
    int num=20, i=2;
    if(num & (1<<i)) cout<<"SET"<<endl;
    else cout<<"not SET"<<endl;
    // setting ith bit
    num=20, i=3;
    num= num | (1<<i);
    print(num);
    // unsetting ith bit
    num=20, i=4;
    num= num & ~(1<<i);
    print(num);
    // toggeling ith bit
    num=20, i=0;
    num= num ^ (1<<i);
    print(num);
    return 0;
}