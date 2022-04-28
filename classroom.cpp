#include<bits/stdc++.h>
using namespace std;
class student {
    float ID;
    string first_name;
    string last_name;
    int age;
    float GPA;
    public:
    float getID() {
        return ID;
    }
    student() {
        ID=0;
        first_name="";
        last_name="";
        age=0;
        GPA=0;
    }
    void Get(float ID, string first_name, string last_name, int age, float GPA) {
        this->ID=ID;
        this->first_name=first_name;
        this->last_name=last_name;
        this->age=age;
        this->GPA=GPA;
    }
    void Put() {
        cout<<"ID: "<<ID<<endl;
        cout<<"First Name: "<<first_name<<endl;
        cout<<"Last Name: "<<last_name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"GPA: "<<GPA<<endl;
    }
    void Greater() {
        if(last_name>first_name) {
            cout<<"Last name is greater."<<endl;
        }
        else if(last_name<first_name) {
            cout<<"First name is greater."<<endl;
        }
        else {
            cout<<"Both are equal."<<endl;
        }
    }
    void Lesser() {
        if(last_name<first_name) {
            cout<<"Last name is lesser."<<endl;
        }
        else if(first_name<last_name) {
            cout<<"First name is lesser."<<endl;
        }
        else {
            cout<<"Both are equal."<<endl;
        }
    }
    bool Equal() {
        return int(ID)==ID;
    }
};
int main() {
    vector<student> arr;
    int n=0;
    cout<<"Enter number of students: ";
    cin>>n;
    for(int i=1; i<=n; i++) {
        cout<<"STUDENT "<<i<<endl;
        float ID=0;
        cout<<"Enetr ID: ";
        cin>>ID;
        string first="", last="";
        cout<<"Enter first & last name: ";
        cin>>first>>last;
        int age=0;
        cout<<"Enter age: ";
        cin>>age;
        float gpa=0;
        cout<<"Enter GPA: ";
        cin>>gpa;
        student s1;
        s1.Get(ID,first,last,age,gpa);
        arr.push_back(s1);
    }
    for(student& stu: arr) {
        stu.Put();
    }
    float search=0;
    cout<<"Enter an ID to search: ";
    cin>>search;
    bool flag=true;
    for(student& stu: arr) {
        if(stu.getID() == search) {
            stu.Put();
            flag=false;
            break;
        }
    }
    if(flag) {
        cout<<"Invalid ID."<<endl;
    }
    return 0;
}