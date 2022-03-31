#include<bits/stdc++.h>
using namespace std;
vector<int> SieveOfEratosthenes(int& n) {
    vector<bool> primes(n+1, true);
    primes[0]=false, primes[1]=false;
    for(int i=2; i<=sqrt(n); i++) {
        if(primes[i]==true) {
            for(int j=i*i; j<=n; j=j+i) {
                primes[j]=false;
            }
        }
    }
    vector<int> prime_no;
    for(int i=0; i<=n; i++) {
        if(primes[i]==true) {
            prime_no.push_back(i);
        }
    }
    return prime_no;
}
int main() {
    int n=0;
    cin>>n;
    vector<int> numbers=SieveOfEratosthenes(n);
    for(int& i: numbers) {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}