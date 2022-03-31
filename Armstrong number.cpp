#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int n, original, sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    original=n;
    while(n>0) {
        int lastdigit=n%10;
        sum=sum+pow(lastdigit,3);
        n=n/10;
    }
    if(sum==original) {
        cout<<original<<" is Armstrong number"<<endl;
    } else {
        cout<<original<<" is not Armstrong number"<<endl;
    }
    return 0;
}