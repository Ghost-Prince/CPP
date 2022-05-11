// problem 2
#include<bits/stdc++.h>
using namespace std;
int main() {
    for(int num=-9; num<=9; num+=3) {
        cout<<"For "<<num;
        if(num>=0) {
            cout<<" Result: "<<-3*num*num + 5<<endl;
        }
        else {
            cout<<" Result: "<<3*num*num + 5<<endl;
        }
    }
    return 0;
}