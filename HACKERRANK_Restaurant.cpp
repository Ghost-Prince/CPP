#include <bits/stdc++.h>
using namespace std;

int HCF(int a, int b) {
    int hcf=0;
    for(int i=1; i<=min(a,b); i++) {
        if(a%i==0 && b%i==0) {
            hcf=i;
        }
    }
    return hcf;
}
int square(int length, int breadth) {
    if(length==breadth) {
        return 1;
    } else {
        int side_of_square=HCF(length, breadth);
        return (length*breadth)/pow(side_of_square,2);
    }
}
int main() {
    int T;
    cin>>T;
    for(int i=0; i<T; i++) {
        int length, breadth;
        cin>>length>>breadth;
        cout<<square(length,breadth)<<endl;
    }
    return 0;
}