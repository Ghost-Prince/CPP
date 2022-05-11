#include<bits/stdc++.h>
using namespace std;
int main() {
    // declaring variables
    int a=2, b=10;
    int c=a*b;
    // running a loop from a to (b-1) with stepsize of a
    for(int i=a; i<b; i=i+a) {
        // declaring new variable 'result' and storing (a+i) in it
        int result=a+i;
        // if 0 is obtained as remainder when 'result' is divided by 2, then 'result' is even otherwise it's is odd
        if(result % 2 == 0) {
            cout<<"EVEN"<<endl;
        }
        else {
            cout<<"ODD"<<endl;
        }
    }
    // for loop terminates once i >= b 
    return 0;
}