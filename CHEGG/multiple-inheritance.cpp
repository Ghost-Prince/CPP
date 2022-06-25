#include<bits/stdc++.h>
using namespace std;
class person {
    public:
    string name;
    string address;
    long long int phone_number;
    string email;
    string toString() {
        return "person";
    }
};
class student : public person {
    public:
    string class_status;
    string toString() {
        return "student";
    }
};
class employee : public person {
    public:
    string office;
    double salary;
    string joined_date;
    string toString() {
        return "employee";
    }
};
class faculty : public employee {
    public:
    double office_hours;
    string rank;
    string toString() {
        return "faculty";
    }
};
class staff : public employee {
    public:
    string title;
    string toString() {
        return "staff";
    }
};
int main() {
    person p;
    student s1;
    employee e;
    faculty f;
    staff s2;
    cout<<p.toString()<<endl;
    cout<<s1.toString()<<endl;
    cout<<e.toString()<<endl;
    cout<<f.toString()<<endl;
    cout<<s2.toString()<<endl;
    return 0;
}