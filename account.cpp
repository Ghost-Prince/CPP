#include "account.hpp"
int main() {
    cout<<setprecision(2)<<fixed;
    Account My_account1(100); // Open an account with $100 deposit 
    My_account1.deposit(50); //deposit $50
    cout<<"Account balance: "<<My_account1.get_balance()<<endl;
    My_account1.withdraw(200); // attempt to withdraw $200
    cout<<"Account balance: "<<My_account1.get_balance()<<endl;
    My_account1.withdraw(My_account1.get_balance()); // Withdraw all
    cout<<"Account balance after withdrawing all money: "<<My_account1.get_balance()<<endl;
    return 0;
}