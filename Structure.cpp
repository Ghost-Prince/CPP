#include<bits/stdc++.h>
using namespace std;
struct student {
    string name;
    int roll;
    float marks;
};
student setData(student s) {
    cout<<"Enter name: ";
    getline(cin,s.name);
    cout<<"Enter roll number: ";
    cin>>s.roll;
    cout<<"Enter marks: ";
    cin>>s.marks;
    return s;
}
void getData(student s) {
    cout<<"Name: "<<s.name<<endl;
    cout<<"Roll number: "<<s.roll<<endl;
    cout<<"Marks: "<<s.marks<<endl;
    return;
}
int main() {
    student s1;
    s1=setData(s1);
    getData(s1);
    //cout<<"Name: "<<s1.name<<endl;
    //cout<<"Roll number: "<<s1.roll<<endl;
    //cout<<"Marks: "<<s1.marks<<endl;
    return 0;
}