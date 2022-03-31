#include<iostream>
using namespace std;
int main()
{
    int reg_no, password;
    cout<<"Enter registration number: ";
    cin>>reg_no;
    cout<<"Enter password: ";
    cin>>password;
    if(reg_no==1940509 && password==8804) {
        for(int i=0; i<=100; i++) {
            cout<<"LOADING "<<i<<"%"<<endl;;
        }
        cout<<"Name: Adeeb Jamal"<<endl;
        cout<<"Specialization: Electrical Engineering"<<endl;;
        cout<<"Year: 3rd Sem.: 5th"<<endl;
        cout<<"CPI: 9.8"<<endl;
    } else {
        cout<<"Enter correct credentials"<<endl;
    }
    return 0;
}