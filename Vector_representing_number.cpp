#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> digits={1,2,3,4,5};
    int power=digits.size()-1;
    int num=0;
    for(int i: digits) {
        num=num+i*pow(10,power--);
    }
    cout<<num<<endl;
    reverse(digits.begin(), digits.end());
    for(int i: digits) {cout<<i<<" ";}
    cout<<endl;
    return 0;
}