#include<bits/stdc++.h>
using namespace std;
bool check(int x) {
    unordered_map<int,int> m;
    while(x) {
        int temp=x%10;
        m[temp]++;
        if(m[temp]==2) {
            return false;
        }
        x/=10;
    }
    return true;
}
int main() {
    int year=0;
    cin>>year;
    while(true) {
        year++;
        if(check(year)) {
            cout<<year<<endl;
            break;
        }
    }
    return 0;
}