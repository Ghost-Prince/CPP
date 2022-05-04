#include<bits/stdc++.h>
using namespace std;
int main() {
    char name[3][20];
    int patient_info[3][3];
    for(int i=0; i<3; i++) {
        cout<<i+1<<". Enter name: ";
        cin>>name[i];
        string reply="";
        cout<<"Do you brush in the morning: ";
        cin>>reply;
        if(reply=="yes") {
            patient_info[i][0]=1;
        }
        else if(reply=="no") {
            patient_info[i][0]=0;
        }
        else {
            patient_info[i][0]=-1;
        }
        cout<<"Do you brush at night: ";
        cin>>reply;
        if(reply=="yes") {
            patient_info[i][1]=1;
        }
        else if(reply=="no") {
            patient_info[i][1]=0;
        }
        else {
            patient_info[i][1]=-1;
        }
        cout<<"How many times do you see the dentist a year: ";
        cin>>patient_info[i][2];
    }
    cout<<endl;
    for(int i=0; i<3; i++) {
        cout<<"For patient "<<name[i]<<": ";
        cout<<patient_info[i][0]<<" ";
        cout<<patient_info[i][1]<<" ";
        cout<<patient_info[i][2]<<" ";
        cout<<endl<<endl;
    }
    return 0;
}