// problem 1
#include<bits/stdc++.h>
using namespace std;
int factor(int& num) {
    for(int i=2; i<=num; i++) {
        if(num%i==0) {
            return i;
        }
    }
    return num;
}
int main() {
    int num=0;
    cout<<"Enter a number greater than 2: ";
    cin>>num;
    cout<<"Smallest factor of "<<num<<": "<<factor(num)<<endl;
    return 0;
}