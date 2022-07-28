#include<bits/stdc++.h>
using namespace std;
class node {
    public:
    int data;
    node* next;
    node(int val) {
        this->data=val;
        this->next=NULL;
    }
    ~node() {
        cout<<"you killed a node bitch !"<<endl;
    }
};
void insert(node* &head, int val) {
    node* temp=new node(val);
    temp->next=head;
    head=temp;
}
void display(node* head) {
    node* temp=head;
    while(temp != NULL) {
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
node* reverse_iterative(node* head) {
    if(head==NULL || head->next==NULL) return head;
    node* prev=NULL;
    node* current=head;
    node* nextptr;
    while(current != NULL) {
        nextptr=current->next;
        current->next=prev;
        prev=current;
        current=nextptr;
    }
    return prev;
}
node* reverse_recursive(node* &head) {
    if(head==NULL || head->next==NULL) {
        return head;
    }
    node* newhead=reverse_recursive(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}
int main() {
    node* head=NULL;
    for(int i=0; i<5; i++) {
        int val=0;
        cin>>val;
        insert(head,val);
    }
    display(head);
    node* rev=reverse_recursive(head);
    display(rev);
    return 0;
}