// including required header files
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main() {
    //declaring variables
    const double RATE=0.1;
    string name="";
    int price=0;
    double premium=0.0;
    string itemNum="";
    cout<<"Buyer's name: "; // asking the user to input buyer's name
    getline(cin,name); // taking input in variable 'name'
    cout<<"Purchase price: "; // asking user to enter purchase price
    cin>>price; // taking input in variable 'price'
    cout<<"Item number: "; // asking user to enter item number
    getline(cin,itemNum); // taking input in variable itemNum
    premium=price*RATE; // calculating value of 'premium'
    // using setprecision function to display numeric values upto 2 decimal places
    cout<<fixed<<setprecision(2);
    cout<< "*********** AUCTION SUMMARY **********" <<endl;
    cout<<"Buyer: "<<name<<endl
    <<"Premium for item "<<itemNum
    <<": $"<<premium<<endl;
    return 0;
    // end of main function
}