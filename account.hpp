#include<bits/stdc++.h>
using namespace std;
class Account {
    private:
    double balance;
    public:
    Account(double init_balance) {
        this->balance = init_balance;
    }
    void deposit(double amount) {
        cout<<"You deposit "<<amount<<endl;
        this->balance += amount;
    }
    void withdraw(double amount) {
        if(amount <= this->balance) {
            this->balance -= amount;
        }
        else {
            cout<<"You can not withdrwa "<<amount<<" that is more than your current balance "<<this->balance<<endl;
            this->balance -= 5;
        }
    }
    double get_balance() {
        return balance;
    }
};