#include<bits/stdc++.h>
using namespace std;
bool check_non_prime(int& num) {
    for(int i=2; i<=sqrt(num); i++) {
        if(num % i == 0) {
            return true;
        }
    }
    return false;
}
int main() {
    char start=' ', end=' ';
    cout<<"Enter starting lowercase char: ";
    cin>>start;
    cout<<"Enter ending lowercase char: ";
    cin>>end;
    int sum=0;
    if(start>='a' && start<='z') {
        if(end>='a' && end<='z') {
            for(char c=start; c<=end; c++) {
                int ASCII=c;
                if(check_non_prime(ASCII)) {
                    cout<<c<<" = "<<ASCII<<" is not prime."<<endl;
                    sum+=ASCII;
                }
            }
        }
    }
    else {
        cout<<"Invalid input"<<endl;
    }
    cout<<"Sum of all non prime numbers is "<<sum<<endl;
    return 0;
}