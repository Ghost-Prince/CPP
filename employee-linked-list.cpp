#include<bits/stdc++.h>
using namespace std;
class employee {
    public:
    int ID;
    float work_hour;
    double salary;
};
class node {
    public:
    employee data;
    node* next;
} *first=NULL;
// creating linked list of employees
void create(vector<employee> arr, int n) {
    int i=0;
    node *t, *last;
    first=new node();
    first->data=arr[0];
    first->next=NULL;
    last=first;
    for(i=1; i<n; i++) {
        t=new node();
        t->data=arr[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
// Check record
node* CheckRecord(node* head, int ID) {
    node* HEAD=head;
    while(HEAD) {
        if(ID==HEAD->data.ID) {
            return HEAD;
        }
        HEAD=HEAD->next;
    }
    return NULL;
}
// Create new record
void CreateRecord(int ID, float work_hour, double salary) {
    if(CheckRecord(first,ID) == NULL) {
        employee E;
        E.ID=ID;
        E.work_hour=work_hour;
        E.salary=salary;
        node* temp=new node;
        temp->data = E;
        temp->next = first;
        first = temp;
    }
}
// Smart search
node* SmartSearch(node* head, int ID) {
    node* HEAD=head;
    while(HEAD) {
        if(ID==HEAD->data.ID) {
            return HEAD;
        }
        HEAD=HEAD->next;
    }
    return NULL;
}
// Delete record
int DeleteRecord(int ID) {
    if(first->data.ID == ID) {
        first=first->next;
        return 0;
    }
    node* p=first;
    node* q=NULL;
    while(p->data.ID != ID) {
        q=p;
        p=p->next;
    }
    if(p) {
        q->next = p->next;
        return 0;
    }
    return -1;
}
// Show record
void ShowRecord(node* head) {
    node *HEAD=head;
    while(HEAD != NULL) {
        cout<<"Employee ID: "<<HEAD->data.ID<<endl;
        cout<<"Work hours: "<<HEAD->data.work_hour<<endl;
        cout<<"Salary: "<<HEAD->data.salary<<endl<<endl;
        HEAD=HEAD->next;
    }
}
// Show employee
void ShowEmployee(node* listNode) {
    cout<<"Employee ID: "<<listNode->data.ID<<endl;
    cout<<"Work hours: "<<listNode->data.work_hour<<endl;
    cout<<"Salary: "<<listNode->data.salary<<endl<<endl;
}
// Update salary
void UpdateSalary(node* head) {
    node* HEAD=head;
    while(HEAD != NULL) {
        if(HEAD->data.work_hour > 32) {
            HEAD->data.salary += (HEAD->data.work_hour - 32) * 0.02;
        }
        HEAD=HEAD->next;
    }
}
int main() {
    vector<employee> employees;
    int n=0;
    cout<<"Enter number of employees: ";
    cin>>n;
    for(int i=0; i<n; i++) {
        employee E;
        cout<<"Enter employee's ID: ";
        cin>>E.ID;
        cout<<"Enter employee's work hours: ";
        cin>>E.work_hour;
        cout<<"Enter employee's salary: ";
        cin>>E.salary;
        employees.push_back(E);
    }
    create(employees,n);
    cout<<"Enter ID to search: ";
    int search_ID=0;
    cin>>search_ID;
    ShowEmployee(CheckRecord(first,search_ID));
    cout<<"Enter ID of new employee: ";
    int newID=0;
    cin>>newID;
    cout<<"Enter work hours of new employee: ";
    float new_work_hour=0;
    cin>>new_work_hour;
    cout<<"Enter salary of new employee: ";
    double newSalary=0;
    cin>>newSalary;
    CreateRecord(newID,new_work_hour,newSalary);
    cout<<"Enter ID to delete employee: ";
    int delID=0;
    cin>>delID;
    if(DeleteRecord(delID) == 0) {
        cout<<"Deleted"<<endl;
    }
    else {
        cout<<"Not found"<<endl;
    }
    UpdateSalary(first);
    cout<<"Record of all employees after updating salary: "<<endl;
    ShowRecord(first);
    return 0;
}