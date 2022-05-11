#include<iostream>
using namespace std;
int main() {
    int sum=0;
    for(int k=1; k<=15; k++) {
        sum+= 5*k*k - 2*k;
    }
    cout<<sum<<endl;
    return 0;
}